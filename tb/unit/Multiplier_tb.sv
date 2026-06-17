`timescale 1ns/1ps

module Multiplier_tb;

    import top_constants::*;

    class MultiplierInputs;

        rand logic [XLEN-1:0] rs1_data, rs2_data;

        covergroup cg;
            coverpoint rs1_data { bins addrs[64] = {[0:32'hFFFF_FFFF]}; }
            coverpoint rs2_data { bins addrs[64] = {[0:32'hFFFF_FFFF]}; }
        endgroup
        
        function new();
            cg = new();
        endfunction
        
    endclass

    logic clk, rst_n;
    logic [XLEN-1:0] rs1_data, rs2_data, mul_result;
    logic [2*XLEN-1:0] temp_result;
    logic [2:0] funct3;

    Multiplier DUT (
        .clk(clk), 
        .rst_n(rst_n),
        .op1(rs1_data),
        .op2(rs2_data),
        .funct3_2(funct3[1:0]),
        .mul_result(mul_result)
    );

    MultiplierInputs MultiplierTest = new;
    localparam logic [2:0] funct3_encodings [4] = {3'b000, 3'b001, 3'b010, 3'b011};
    int ITERATIONS;
    
    always #5 clk = ~clk;

    initial begin

        if (!$value$plusargs("ITER=%d", ITERATIONS)) begin
            ITERATIONS = 1000;
        end

        clk = 0;
        rst_n = 0;
        repeat (2) @(posedge clk);
        rst_n = 1;

        $display("=================================================================");
        $display("DIRECTED TESTS");
        $display("=================================================================");
        $display("Multiplying by 0");
        $display("=================================================================");

        for (int i = 0; i < 4; i++) begin

            funct3 = funct3_encodings[i];
            $display("funct3: %b", funct3);

            rs1_data = 32'h0000FFFF;
            rs2_data = 0;
            repeat (4) @(posedge clk);
            assert(mul_result == 0);

            rs1_data = 0;
            rs2_data = 32'h0000FFFF;
            repeat (4) @(posedge clk);
            assert(mul_result == 0);

            rs1_data = 0;
            rs2_data = 0;
            repeat (4) @(posedge clk);
            assert(mul_result == 0);

        end

        $display("=================================================================");
        $display("CONSTRAINED RANDOM TESTS");
        $display("=================================================================");
        $display("MUL Tests");
        $display("=================================================================");

        funct3 = 3'b000;

        repeat (ITERATIONS) begin

            MultiplierTest.randomize();
            MultiplierTest.cg.sample();
            rs1_data = MultiplierTest.rs1_data;
            rs2_data = MultiplierTest.rs2_data;
            repeat (4) @(posedge clk);
            temp_result = $signed(rs1_data)*$signed(rs2_data);
            assert(mul_result == temp_result[XLEN-1:0]);
            
        end

        $display("=================================================================");
        $display("MULH Tests");
        $display("=================================================================");

        funct3 = 3'b001;

        repeat (ITERATIONS) begin

            MultiplierTest.randomize();
            MultiplierTest.cg.sample();
            rs1_data = MultiplierTest.rs1_data;
            rs2_data = MultiplierTest.rs2_data;
            repeat (4) @(posedge clk);
            temp_result = $signed(rs1_data)*$signed(rs2_data);
            assert(mul_result == temp_result[2*XLEN-1 -: XLEN]);
            
        end

        $display("=================================================================");
        $display("MULHSU Tests");
        $display("=================================================================");

        funct3 = 3'b010;

        repeat (ITERATIONS) begin

            MultiplierTest.randomize();
            MultiplierTest.cg.sample();
            rs1_data = MultiplierTest.rs1_data;
            rs2_data = MultiplierTest.rs2_data;
            repeat (4) @(posedge clk);
            temp_result = $signed(rs1_data)*$unsigned(rs2_data);
            assert(mul_result == temp_result[2*XLEN-1 -: XLEN]);
            
        end

        $display("=================================================================");
        $display("MULHU Tests");
        $display("=================================================================");

        funct3 = 3'b011;

        repeat (ITERATIONS) begin

            MultiplierTest.randomize();
            MultiplierTest.cg.sample();
            rs1_data = MultiplierTest.rs1_data;
            rs2_data = MultiplierTest.rs2_data;
            repeat (4) @(posedge clk);
            temp_result = $unsigned(rs1_data)*$unsigned(rs2_data);
            assert(mul_result == temp_result[2*XLEN-1 -: XLEN]);
            
        end

        $display("Coverage: %0.2f %%", MultiplierTest.cg.rs1_data.get_coverage());
        $display("Coverage: %0.2f %%", MultiplierTest.cg.rs2_data.get_coverage());

        $finish;

    end

endmodule


