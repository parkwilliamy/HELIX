`timescale 1ns/1ps

import branch_constants::*;

module BRU (
    input logic [1:0] EX_branch_prediction,
    input logic EX_Branch, zero, sign, overflow, carry,
    input logic [2:0] funct3,
    output logic branch_taken,
    output logic [1:0] prediction_status 
    // {prediction}_{result} denotes prediction status, prediction and result can be NT (not taken) or T (taken)
    // Ex: NT_T denotes predict not taken, branch taken
);

    logic branch_taken_inter;
    assign branch_taken = branch_taken_inter;
    
    always_comb begin

        branch_taken_inter = 0;
        prediction_status = 0;

        if (EX_Branch) begin
                
                case (funct3) 
                    
                    3'b000: branch_taken_inter = zero; // BGE
                    3'b001: branch_taken_inter = ~zero; // BNE
                    3'b100: branch_taken_inter = sign^overflow; // BLT
                    3'b101: branch_taken_inter = ~(sign^overflow); // BGE
                    3'b110: branch_taken_inter = carry; // BLTU
                    3'b111: branch_taken_inter = ~carry; // BGEU
                    default: branch_taken_inter = 'x;
                    
                endcase

            // If predicted not taken and branch was taken
        
            if (((EX_branch_prediction == strong_not_taken || EX_branch_prediction == weak_not_taken) && branch_taken_inter)) begin

                prediction_status = NT_T;

            end

            // If predicted taken and branch was not taken

            else if (((EX_branch_prediction == weak_taken || EX_branch_prediction == strong_taken) && !branch_taken_inter)) begin

                prediction_status = T_NT;

            end

            // If predicted not taken and branch was not taken

            else if (((EX_branch_prediction == strong_not_taken || EX_branch_prediction == weak_not_taken) && !branch_taken_inter)) begin

                prediction_status = NT_NT;

            end

            // If predicted taken and branch was taken

            else if (((EX_branch_prediction == weak_taken || EX_branch_prediction == strong_taken) && branch_taken_inter)) begin

                prediction_status = T_T;

            end

            else prediction_status = 'x;
           
        end
      
    end
    
endmodule
