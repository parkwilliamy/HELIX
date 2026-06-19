`timescale 1ns/1ps

import top_constants::*;

module WriteBack (
    input logic [XLEN-1:0] ALU_result, pc_imm, pc_4, csr_value,
    input logic [2:0] funct3, RegSrc,
    input logic [XLEN-1:0] DMEM_word,
    output logic [XLEN-1:0] rd_write_data
);

    logic [1:0] byte_offset;
    assign byte_offset = ALU_result[1:0]; // ALU_result is addrb (calculated addr)

    logic [XLEN-1:0] DMEM_shifted_word; 
    assign DMEM_shifted_word = DMEM_word >> 8*byte_offset;

    logic [XLEN-1:0] DMEM_result;

    always_comb begin
    
        DMEM_result = 32'b0;

        case (funct3) 
        
            3'b000: DMEM_result = {{24{DMEM_shifted_word[7]}}, DMEM_shifted_word[7:0]}; // LB
            3'b001: DMEM_result = {{16{DMEM_shifted_word[15]}}, DMEM_shifted_word[15:0]}; // LH
            3'b010: DMEM_result = DMEM_shifted_word; // LW
            3'b100: DMEM_result = {24'b0, DMEM_shifted_word[7:0]}; // LBU
            3'b101: DMEM_result = {16'b0, DMEM_shifted_word[15:0]}; // LHU
            default: DMEM_result = 0;

        endcase

        case (RegSrc) 

            0: rd_write_data = ALU_result;
            1: rd_write_data = DMEM_result;
            2: rd_write_data = pc_imm;
            3: rd_write_data = pc_4;
            4: rd_write_data = csr_value;
            default: rd_write_data = 0;

        endcase

    end


endmodule
