`timescale 1ns/1ps

module Multiplier
    import top_constants::*;
(   
    input logic clk, rst_n,
    input logic [XLEN-1:0] op1, op2,
    input logic [1:0] funct3_2,
    output logic [XLEN-1:0] mul_result
);

    logic higher_select; // control signal to select between upper and lower XLEN bits of product
    assign higher_select = (funct3_2 != 2'b00) ? 1 : 0;

    localparam PIPE_STAGES = 3;
    logic [2*XLEN-1:0] buffer [PIPE_STAGES]; // multiply pipeline for DSP slices
    assign mul_result = higher_select ? buffer[2][2*XLEN-1 -: XLEN] : buffer[2][XLEN-1:0];

    always_ff @ (posedge clk) begin

        if (!rst_n) for (int i = 0; i < PIPE_STAGES; i++) buffer[i] <= 0;

        else begin

            case (funct3_2) 

                2'b00,2'b01: buffer[0] <= $signed(op1)*$signed(op2);
                2'b10: buffer[0] <= $signed(op1)*$unsigned(op2);
                2'b11: buffer[0] <= $unsigned(op1)*$unsigned(op2);

            endcase
            
            for (int i = 0; i < PIPE_STAGES-1; i++) buffer[i+1] <= buffer[i];

        end

    end

endmodule
