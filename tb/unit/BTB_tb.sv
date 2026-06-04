`timescale 1ns/1ps

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

endclass

module BTB_tb;

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

    BTBInputs BTBTest = new;

    always #5 clk = ~clk;

    initial begin

        clk = 0;
        rst_n = 0;
        write = 0;
        #20;
        rst_n = 1;

        $display("DIRECTED TESTS");
        $display("\n");
        $display("=================================================================");
        $display("\n");
        $display("Read Miss - 50%% Ways Invalid");

        $populate_cache(HALF_INVALID);

        $display("\n");
        $display("=================================================================");
        $display("\n");

        $display("CONSTRAINED RANDOM TESTS");

        $display("Read Miss Tests - All Ways Invalid");

        repeat (100) begin

            BTBTest.randomize();
            IF_pc = BTBTest.IF_pc;
            #1;
            assert(hit==0);
            
        end

        $display("\n");
        $display("=================================================================");
        $display("\n");

        $display("Read Miss Tests - 50%% Ways Invalid");

        repeat (100) begin

            BTBTest.randomize(); 
            IF_pc = BTBTest.IF_pc;
            #1;
            assert(hit==0);
            
        end

        $finish;

    

    end



endmodule

// This task fills cache with invalid + valid lines according to input
// tag_in is only provided when testing for read hits
// If not provided, read miss occurs

task populate_cache (input state, input [TAG_WIDTH-1:0] tag_in = 0);

    begin

        always_comb begin

            case (state)

                HALF_INVALID: begin

                    for (int i = 0; i < WAYS/2; i++) begin

                        branch_target_buffer[0][i] = {{TAG_WIDTH{1'b0}}, {XLEN{1'b0}}, 1'b1, 1'b0, {LRU_WIDTH{1'b0}}};

                    end

                    for (int i = WAYS/2; i < WAYS; i++) begin

                        branch_target_buffer[0][i] = {{TAG_WIDTH{1'b0}}, {XLEN{1'b0}}, 1'b1, 1'b1, i[LRU_WIDTH:0]};

                    end

                    branch_target_buffer[0][WAYS-1].tag = tag_in;

                end

                ALL_VALID: begin

                    for (int i = 0; i < WAYS; i++) begin

                        branch_target_buffer[0][i] = {{TAG_WIDTH{1'b0}}, {XLEN{1'b0}}, 1'b1, 1'b1, i[LRU_WIDTH:0]};

                    end

                    branch_target_buffer[0][WAYS-1].tag = tag_in;

                end

            endcase

        end

    end

endtask
