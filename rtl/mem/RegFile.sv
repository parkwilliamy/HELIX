`timescale 1ns/1ps

import top_constants::*;

module RegFile (
    input logic clk, rst_n, RegWrite,
    input logic [4:0] rs1, rs2, rd,
    input logic [XLEN-1:0] rd_write_data,
    output logic [XLEN-1:0] rs1_data, rs2_data 
);

    logic [XLEN-1:0] reg_file [32];

    // RegFile supports internal WB -> ID forwarding
    assign rs1_data = (RegWrite && rd == rs1 && rs1 != 0) ? rd_write_data : reg_file[rs1];
    assign rs2_data = (RegWrite && rd == rs2 && rs2 != 0) ? rd_write_data : reg_file[rs2];

    always_ff @(posedge clk) begin

        if (!rst_n) begin

            for (int i = 0; i < 32; i = i+1) begin
                reg_file[i] <= 0;
            end

        end

        if (rd > 0 && RegWrite) reg_file[rd] <= rd_write_data; // Ensure address written to is from 1-31 and RegWrite is HIGH
        
    end
    
endmodule
