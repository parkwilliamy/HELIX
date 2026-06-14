`timescale 1ns/1ps

import top_constants::*;

module Store (
    input logic MemWrite,
    input logic [XLEN-1:0] addrb, rs2_data, clk_cycles, invalid_clk_cycles, retired_instructions, correct_predictions, total_predictions,
    input logic [2:0] funct3,
    output logic [3:0] web,
    output logic [XLEN-1:0] dib
);

    logic [1:0] byte_offset;
    assign byte_offset = addrb[1:0];

    // RESERVED ADDRESSES TO WRITE CPU PERFORMANCE METRICS TO
    // Assumes the test programs don't write to these addresses
    localparam CLK_CYCLE_ADDR = 32'h5000, INVALID_CLK_CYCLE_ADDR = 32'h5004, RETIRED_INSTRUCTIONS_ADDR = 32'h5008, CORRECT_PREDICTIONS_ADDR = 32'h500C, TOTAL_PREDICTIONS_ADDR = 32'h5010;

    logic [XLEN-1:0] final_data;

    always_comb begin

        web = 0;
        dib = 0;

        // If address is one of the reserved addresses, BRAM is written with the respective performance metric instead of rs2 data
        case (addrb) 

            CLK_CYCLE_ADDR: final_data = clk_cycles;
            INVALID_CLK_CYCLE_ADDR: final_data = invalid_clk_cycles;
            RETIRED_INSTRUCTIONS_ADDR: final_data = retired_instructions;
            CORRECT_PREDICTIONS_ADDR: final_data = correct_predictions;
            TOTAL_PREDICTIONS_ADDR: final_data = total_predictions;
            default: final_data = rs2_data;

        endcase

        if (MemWrite) begin

                case (funct3) 

                    3'b000: begin // SB
                        
                        web = (4'b0001 << byte_offset);
                        dib[7+8*byte_offset -: 8] = final_data[7:0]; 

                    end

                    3'b001: begin // SH

                        web = (4'b0011 << byte_offset);
                        dib[15+8*byte_offset -: 16] = final_data[15:0]; 
                    
                    end

                    3'b010: begin // SW

                        web = 4'b1111;
                        dib = final_data;

                    end

                    default: begin

                        web = 'x;
                        dib = 'x;

                    end
                
                endcase
             
        end

    end


endmodule
