`timescale 1ns/1ps

import top_constants::*;

module ImmGen (
    input logic [XLEN-1:0] instruction,
    output logic [XLEN-1:0] imm
);

    logic [6:0] opcode;
    logic [2:0] funct3;
    logic [11:0] intimm1; // 12-bit immediate
    logic [19:0] intimm2; // 20-bit immediate
    logic [XLEN-1:0] imm1;
    logic [XLEN-1:0] imm2;
    logic [XLEN-1:0] imm3;
    logic [XLEN-1:0] imm4;

    always_comb begin

        opcode = instruction[6:0];
        funct3 = instruction[14:12]; // Used for I-type instructions

        case (opcode)

            OP_R: begin 
                intimm1 = 0; // Only for R-type format
                intimm2 = 0;
            end
            OP_I, OP_I_LD, OP_I_FENCE, OP_I_JALR: begin
                intimm1 = (opcode == OP_I && (funct3 == 3'b001 || funct3 == 3'b101)) ? {7'b0000000, instruction[24:20]} : instruction[XLEN-1:20];
                intimm2 = 0;
            end
            OP_S: begin
                intimm1 = {instruction[XLEN-1:25], instruction[11:7]};
                intimm2 = 0;
            end
            OP_B: begin
                intimm1 = {instruction[XLEN-1], instruction[7], instruction[30:25], instruction[11:8]};
                intimm2 = 0;
            end
            OP_U_LUI, OP_U_AUIPC: begin
                intimm1 = 0;
                intimm2 = instruction[XLEN-1:12];
            end
            OP_J: begin
                intimm1 = 0;
                intimm2 = {instruction[XLEN-1], instruction[19:12], instruction[20], instruction[30:21]};
            end
            default: begin
                intimm1 = 'x;
                intimm2 = 'x;
            end

        endcase

        imm1 = {{20{intimm1[11]}}, intimm1};
        imm2 = {{11{intimm2[19]}}, intimm2, 1'b0};
        imm3 = {intimm2, 12'b0};
        imm4 = {{19{intimm1[11]}}, intimm1, 1'b0};

        case (opcode)

            OP_J: imm = imm2;
            OP_U_LUI, OP_U_AUIPC: imm = imm3;
            OP_B: imm = imm4;
            default: imm = imm1;

        endcase
    

    end

endmodule
