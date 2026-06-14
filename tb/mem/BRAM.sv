`timescale 1ns/1ps

import top_constants::*;
import mem_constants::*;

module BRAM (
    input logic clk,
    input logic [3:0] wea,
    input logic [3:0] web,
    // byte addresses
    input logic [31:0] addra, 
    input logic [31:0] addrb,
    input logic [31:0] dia,
    input logic [31:0] dib,
    output logic [31:0] doa,
    output logic [31:0] dob
);

    logic [31:0] mem [IMEM_START/4:DMEM_END/4-1];
    logic [31:0] row_a, row_b;
    assign row_a = addra >> 2;
    assign row_b = addrb >> 2;
    
    initial begin

        for (int i = 0; i < DMEM_END/4; i++) begin

            mem[i] = i;

        end

    end
    
    always_ff @ (posedge clk) begin // READ FIRST MODE
        
        for (int i = 0; i < 4; i++) begin
            if (wea[i]) mem[row_a][8*i +:8] <= dia[8*i +:8];
        end
        doa <= mem[row_a];

        for (int i = 0; i < 4; i++) begin
            if (web[i]) mem[row_b][8*i +:8] <= dib[8*i +:8];
        end
        dob <= mem[row_b];

    end

endmodule