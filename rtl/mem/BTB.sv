`timescale 1ns/1ps

import constants::*;

module BTB (
    input logic clk, rst_n, write, ID_Branch,
    input logic [XLEN-1:0] IF_pc, ID_pc,
    input logic [XLEN-1:0] pc_imm_in, // Computed branch target address to write to BTB during ID
    output logic [XLEN-1:0] pc_imm_out, // Branch target address to read from BTB in IF
    output logic IF_BTBhit, // 0 if branch target address wasn't found for a given branch instruction, 1 otherwise
    output logic IF_Branch, IF_Jump // These signals indicate whether the fetched target address was for a branch or jump instruction
);

    // 2-way set associative cache
    localparam int LINES = 32, 
                int WAYS = 2, 
                int SETS = LINES / WAYS,
                int INDEX_WIDTH = $clog2(SETS),
                int TAG_WIDTH = (XLEN-2) - INDEX_WIDTH, // Ignore lower 2 bits of PC since redundant with byte alignment
                int LRU_WIDTH = $clog2(WAYS),
                int LINE_WIDTH = TAG_WIDTH+XLEN+2+LRU_WIDTH;

    typedef struct packed { // BTB cache line layout
        logic [TAG_WIDTH-1:0] tag;
        logic [XLEN-1:0] pc_imm;
        logic branch; // 0 means jump, 1 means branch
        logic valid; // 1 means the pc_imm value is valid
        logic [LRU_WIDTH-1:0] lru; // LRU counter, where 0 indicates the least recently used line
    } BTB_line;

    BTB_line branch_target_buffer [SETS][WAYS]; 

    // Tags, Sets, and Lines are split into IF and ID signals because the BTB can be used in both IF and ID stages
    // BTB is read in IF, written in ID

    logic [TAG_WIDTH-1:0] IF_tag, ID_tag;
    logic [INDEX_WIDTH-1:0] IF_index, ID_index;

    // Read tag and index from IF pc value for reads
    assign IF_tag = IF_pc[XLEN-1:6];
    assign IF_index = IF_pc[5:2];

    // Read tag and index from ID pc value for writes
    assign ID_tag = ID_pc[XLEN-1:6];
    assign ID_index = ID_pc[5:2];

    BTB_line IF_lines [WAYS]; // all the lines to compare in a set for a read
    BTB_line ID_lines [WAYS]; // all the lines to compare in a set for a 
    logic IF_lines_valid [WAYS];
    logic IF_lines_hit [WAYS];
    logic ID_lines_valid [WAYS];

    integer i;

    for (i = 0; i < WAYS; i++) begin

        IF_lines[i] = branch_target_buffer[IF_index][i];
        ID_lines[i] = branch_target_buffer[ID_index][i];
        IF_lines_valid[i] = branch_target_buffer[IF_index][i].valid;
        IF_lines_hit[i] = (branch_target_buffer[IF_index][i].tag == IF_tag && branch_target_buffer[IF_index][i].valid);
        ID_lines_valid[i] = branch_target_buffer[ID_index][i].valid;

    end

    logic set_full;
    assign set_full = &ID_lines_valid;

    assign IF_BTBhit = |IF_lines_hit;
    

    // =============================== BTB Reads ================================

    always_comb begin

        IF_Branch = 0;
        IF_Jump = 0;
        pc_imm_out = 0;

        for (i = 0; i < WAYS; i++) begin

            // If tag matches and valid bit is 1
            if (IF_lines.hit[i]) begin
                
                if (!IF_lines[i].branch) begin

                    IF_Branch = 0;
                    IF_Jump = 1;

                end

                else begin

                    IF_Branch = 1;
                    IF_Jump = 0;

                end

                pc_imm_out = IF_lines[i].pc_imm;

            end

        end
        
    end


    // =============================== BTB Writes ================================

    // Cache writes to the first invalid line it finds, otherwise, replace line with biggest LRU value

    integer j;

    always_ff @ (posedge clk) begin

        if (!rst_n) begin

            for (i = 0; i < SETS; i++) begin

                for (j = 0; j < WAYS; j++) begin

                    branch_target_buffer[i][j] <= {TAG_WIDTH'b0, XLEN'b0, 1'b1, 1'b0, LRU_WIDTH'b0}; // Initialize branch bit to 1, valid bit to 0, LRU counter to 0

                end

            end

        end

        else begin 

            if (write) begin   

                for (i = 0; i < WAYS; i++) begin

                    // If data is invalid (i.e. after a reset) or set is full and current line is the oldest
                    if (!ID_lines[i].valid) begin

                        branch_target_buffer[ID_set] <= 1;
                        ID_lines[i] <= {ID_tag, pc_imm_in, ID_Branch, 1'b1, LRU_WIDTH'b0}; // set LRU counter to 0
                        break;

                    end

                end 
            end
            
        end


    end


endmodule
