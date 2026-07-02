`timescale 1ns/1ps

import top_constants::*;
import mem_constants::*;

module Store (
    input logic MemWrite, interrupt_taken,
    input logic [3:0] exception_status,
    input logic [1:0] byte_offset, 
    input logic [XLEN-1:0] rs2_data,
    input logic [2:0] funct3,
    output logic [3:0] web_final,
    output logic [XLEN-1:0] dib
);

    always_comb begin

        web_final = 0;
        dib = 0;

        if (MemWrite && exception_status == 0 && !interrupt_taken) begin // Suppress the store when a trap flushes it -- it re-executes after mret

            case (funct3) 

                3'b000: begin // SB
                    
                    web_final = (4'b0001 << byte_offset);
                    dib[7+8*byte_offset -: 8] = rs2_data[7:0]; 

                end

                3'b001: begin // SH

                    web_final = (4'b0011 << byte_offset);
                    dib[15+8*byte_offset -: 16] = rs2_data[15:0]; 
                
                end

                3'b010: begin // SW

                    web_final = 4'b1111;
                    dib = rs2_data;

                end

                default: begin

                    web_final = 0;
                    dib = 0;

                end
            
            endcase
             
        end

    end


endmodule
