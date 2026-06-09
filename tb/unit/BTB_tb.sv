`timescale 1ns/1ps

module BTB_tb;

    import BTB_constants::*;

    class BTBInputs;

        rand logic [XLEN-1:0] IF_pc, ID_pc, pc_imm_in;

        constraint addr_space {
            IF_pc inside {[ADDR_START:ADDR_END]};
            ID_pc inside {[ADDR_START:ADDR_END]};
            pc_imm_in inside {[ADDR_START:ADDR_END]};
        }

        constraint addr_alignment {
            IF_pc % 4 == 0;
            ID_pc % 4 == 0;
            pc_imm_in % 4 == 0;
        }
        
        covergroup cg @ (posedge clk);
            coverpoint IF_pc;
            coverpoint ID_pc;
            coverpoint pc_imm_in;
        endgroup
        
        function new();
            cg = new();
        endfunction
        
    endclass

    logic clk, rst_n, write, ID_Branch;
    logic [XLEN-1:0] IF_pc, ID_pc, pc_imm_in, pc_imm_out;
    logic IF_BTBhit, IF_Branch, IF_Jump;

    BTB DUT (
        .clk(clk), 
        .rst_n(rst_n),
        .write(write),
        .ID_Branch(ID_Branch),
        .IF_pc(IF_pc[XLEN-1:2]),
        .ID_pc(ID_pc[XLEN-1:2]),
        .pc_imm_in(pc_imm_in),
        .pc_imm_out(pc_imm_out),
        .IF_BTBhit(IF_BTBhit),
        .IF_Branch(IF_Branch),
        .IF_Jump(IF_Jump)
    );

    logic [LRU_WIDTH-1:0] ID_lines_lru [WAYS-1:0];

    BTBInputs BTBTest = new;

    always #5 clk = ~clk;

    initial begin

        $display("hi");
        clk = 0;
        write = 0;
        rst_n = 0;
        repeat (2) @(posedge clk);
        rst_n = 1;

        $display("DIRECTED TESTS");
        $display("=================================================================");
        $display("Read Miss - 50%% Ways Valid");
        $display("=================================================================");

        direct_read_tests(HALF_VALID, 0);

        $display("=================================================================");
        $display("Read Miss - All Ways Valid");
        $display("=================================================================");

        direct_read_tests(ALL_VALID, 0);

        $display("=================================================================");
        $display("Read Hit - Half Ways Valid");
        $display("=================================================================");

        direct_read_tests(HALF_VALID, 1);

        $display("=================================================================");
        $display("Read Hit - All Ways Valid");
        $display("=================================================================");

        direct_read_tests(ALL_VALID, 1);

        $display("=================================================================");
        $display("CONSTRAINED RANDOM TESTS");
        $display("=================================================================");
        $display("Read Miss Tests - No Ways Valid");
        $display("=================================================================");

        rst_n = 0;
        repeat (2) @(posedge clk);
        rst_n = 1;

        repeat (10) begin

            BTBTest.randomize();
            IF_pc = BTBTest.IF_pc;
            @(negedge clk);
            assert(!IF_BTBhit);
            
        end

        
        $display("=================================================================");
        $display("Write Tests - No Ways Valid");
        $display("=================================================================");

        write = 1;

        crv_write_tests(NO_VALID);

        $display("=================================================================");
        $display("Write Tests - 50%% Ways Valid");
        $display("=================================================================");

        crv_write_tests(HALF_VALID);

        $display("=================================================================");
        $display("Write Tests - All Ways Valid");
        $display("=================================================================");

        crv_write_tests(ALL_VALID);

        $display("Coverage: %0.2f %%", BTBTest.cg.get_coverage());

        write = 0;

        $finish;

    

    end

    // This task fills a cache set with invalid + valid lines according to input
    // tag_in is only provided when testing for read hits
    // If not provided, read miss occurs

    task populate_set (input [1:0] state, input [3:0] set = 0, input [TAG_WIDTH-1:0] tag_in);

        write = 0;
        ID_pc = {{TAG_WIDTH{1'b0}}, set, 2'b0}; 
        pc_imm_in = 32'b0;

        rst_n = 0;
        repeat (2) @(posedge clk);
        rst_n = 1;

        write = 1;

        case (state)

            HALF_VALID: begin

                for (int i = 0; i < WAYS/2-1; i++) begin

                    @(posedge clk); // wait for posedge clk to write pc_imm_in to BTB set
                    @(negedge clk); // avoid race condition
                    ID_pc[XLEN-1 -: TAG_WIDTH] = ID_pc[XLEN-1 -: TAG_WIDTH]+1; // change tag for next line

                end

                ID_pc = {tag_in, set, 2'b0}; // write next line in set with matching tag (or 0 if unspecified)
                @(posedge clk); 
                @(negedge clk);

            end

            ALL_VALID: begin

                for (int i = 0; i < WAYS-1; i++) begin

                    @(posedge clk); // wait for posedge clk to write pc_imm_in to BTB set
                    @(negedge clk); // avoid race condition
                    ID_pc[XLEN-1 -: TAG_WIDTH] = ID_pc[XLEN-1 -: TAG_WIDTH]+1; // change tag for next line

                end

                ID_pc = {tag_in, set, 2'b0}; // write last line in set with matching tag (or 0 if unspecified)
                @(posedge clk); 
                @(negedge clk);

            end

        endcase

        write = 0;


    endtask

    task direct_read_tests(input [1:0] state, input hit);

        logic [TAG_WIDTH-1:0] tag_in; 
        logic [XLEN-1:0] write_addr; 

        IF_pc = 32'h0000_2040; // Maps to set 0
        tag_in = hit ? IF_pc[XLEN-1 -: TAG_WIDTH] : {TAG_WIDTH{1'b0}};
        write_addr = (state == ALL_VALID) ? WAYS-1 : WAYS/2-1; // address to write the last valid line of the set

        populate_set(state, 0, tag_in); // Fill set 0 with 50% or v% valid lines based on STATE
        
        // tag_in == 0 indicates read miss tests, else test is for read hits

        @(negedge clk);

        if (tag_in) begin 

            assert(hit);
            assert(!DUT.IF_lines[write_addr].lru);
            assert(DUT.IF_lines[write_addr].valid);
            assert(DUT.IF_lines[write_addr].tag == IF_pc[XLEN-1 -: TAG_WIDTH]);

        end 
        
        else assert(!hit); 

        IF_pc = 32'h0000_203C; // Maps to set 15
        tag_in = hit ? IF_pc[XLEN-1 -: TAG_WIDTH] : {TAG_WIDTH{1'b0}};

        populate_set(state, 15, tag_in); // Fill set 0 with 50% or 100% valid lines based on STATE
        
        @(negedge clk);

        if (tag_in) begin

            assert(hit);
            assert(!DUT.IF_lines[write_addr].lru);
            assert(DUT.IF_lines[write_addr].valid);
            assert(DUT.IF_lines[write_addr].tag == IF_pc[XLEN-1 -: TAG_WIDTH]);

        end 
        
        else assert(!hit);

    endtask

    task crv_write_tests(input [1:0] state);

        logic [XLEN-1:0] write_addr;
        
        write_addr = (state == ALL_VALID || state == NO_VALID) ? 0 : WAYS/2; // address to write a new line, depending on cache lines stored

        populate_set(state, 0, 0); 

        repeat (10) begin

            BTBTest.randomize(); 
            IF_pc = BTBTest.IF_pc;
            pc_imm_in = BTBTest.pc_imm_in;
            @(posedge clk); // write to BTB on posedge
            @(negedge clk); // wait for write to complete
            assert(DUT.ID_lines[write_addr].valid);
            assert(!DUT.ID_lines[write_addr].lru);
            assert(DUT.ID_lines[write_addr].pc_imm == pc_imm_in);
            if (state == ALL_VALID) assert(lru_unique(0));
                
        end

        populate_set(state, 15, 0); 

        repeat (10) begin

            BTBTest.randomize(); 
            IF_pc = BTBTest.IF_pc;
            pc_imm_in = BTBTest.pc_imm_in;
            @(posedge clk); // write to BTB on posedge
            @(negedge clk); // wait for write to complete
            assert(DUT.ID_lines[write_addr].valid);
            assert(!DUT.ID_lines[write_addr].lru);
            assert(DUT.ID_lines[write_addr].pc_imm == pc_imm_in);
            if (state == ALL_VALID) assert(lru_unique(15));
                
        end

    endtask

    function logic lru_unique(input [3:0] set_index);

        logic [LRU_WIDTH-1:0] vals [WAYS];
        lru_unique = 1'b1;
        for (int i = 0; i < WAYS; i++) begin

            vals[i] = DUT.branch_target_buffer[set_index][i].lru;

        end

        for (int i = 0; i < WAYS; i++) begin

            for (int j = i+1; j < WAYS; j++) begin

                if (vals[i] == vals[j]) lru_unique = 1'b0;

            end

        end
                    

    endfunction

endmodule


