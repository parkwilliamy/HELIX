`timescale 1ns/1ps

import top_constants::*;

module ALU (
    input logic [XLEN-1:0] op1, op2,
    input logic [3:0] field, // funct7[5]/0 + funct3 (only funct7[5] for certain instructions)
    output logic [XLEN-1:0] ALU_result,
    output logic zero, sign, overflow,
    output logic carry
);

    assign zero = (ALU_result == 0);
    assign sign = ($signed(ALU_result) < 0);
    assign overflow = (op1[XLEN-1] != op2[XLEN-1]) && (ALU_result[XLEN-1] != op1[XLEN-1]); // Detects overflow for subtraction used in branch decisions

    always_comb begin
    
        ALU_result = 0;
        carry = 0;

        case (field) 

            ADD: {carry, ALU_result} = op1+op2;
            SUB: {carry, ALU_result} = op1-op2;
            AND: ALU_result = op1&op2;
            OR: ALU_result = op1|op2;
            XOR: ALU_result = op1^op2;
            SLL: ALU_result = op1<<op2[4:0];
            SRL: ALU_result = op1>>op2[4:0];
            SRA: ALU_result = $signed(op1)>>>op2[4:0];
            SLT: ALU_result = {{(XLEN-1){1'b0}}, $signed(op1)<$signed(op2)};
            SLTU: ALU_result = {{(XLEN-1){1'b0}}, op1<op2};
            default: ALU_result = 0;

        endcase
        
    end


endmodule
