`timescale 1ns/1ps

import top_constants::*;
import branch_constants::*;

module Fetch (
    input logic [1:0] IF_branch_prediction, ID_branch_prediction, prediction_status, ID_ALUSrc, EX_ALUSrc,
    input logic IF_BTBhit, ID_BTBhit, IF_Branch, IF_Jump, ID_Branch, EX_Branch, ID_Jump, EX_Jump, critical_error, ID_Stall,
    input logic [3:0] exception_status,
    input logic [2:0] ID_RegSrc, ID_funct3,
    input logic [4:0] ID_rs2,
    input logic [XLEN-1:0] IF_pc, IF_pc_imm, EX_pc_4, ID_pc_imm, EX_pc_imm, rs1_imm, mtvec, mepc,
    input logic [6:0] ID_funct7,
    output logic [XLEN-1:0] IF_pc_4,
    output logic [XLEN-1:0] next_pc,
    output logic ID_Flush, EX_Flush, MEM_Flush, WB_Flush
);

    assign IF_pc_4 = IF_pc+4; // This result is computed once in IF and used later in the pipeline if needed

    always_comb begin

        next_pc = IF_pc_4;
        ID_Flush = exception_status[0] || critical_error;
        EX_Flush = exception_status[0] || critical_error || (ID_RegSrc == 4 && ID_rs2 == 5'b00101 && ID_funct3 == 3'b000); // Implement WFI instruction as NOP
        MEM_Flush = exception_status[0] || critical_error;
        WB_Flush = exception_status[0] || critical_error;

        if (critical_error) next_pc = IF_pc; // Freeze pipeline for critical error raised on double trap exception
        else if (exception_status[0]) next_pc = mtvec; // Write trap handler address to PC
        else if (ID_RegSrc == 4 && ID_funct7 == 7'b0011000 && ID_funct3 == 3'b000) next_pc = mepc; // Restore PC to where exception initially occured

        else if (exception_status == 0) begin

            // IF Branches/Jumps

            if (IF_BTBhit) begin // If target address found in BTB for given instruction

                if (IF_Branch) begin // Conditional branch based on prediction

                    if (IF_branch_prediction == weak_taken || IF_branch_prediction == strong_taken) next_pc = IF_pc_imm;

                end

                else if (IF_Jump) next_pc = IF_pc_imm; // Unconditional jump
                
            end

            // ID Branches/Jumps

            if ((ID_Branch || ID_Jump) && !ID_BTBhit && !ID_Stall) begin // Branch/jump in ID redirects (and asserts ID_Flush) -- but NOT while load-use stalled: the stall holds the branch in ID, so a self-generated ID_Flush would evict it before it can resolve. It redirects the cycle after the stall clears.

                if (ID_Branch) begin

                    if (ID_branch_prediction == weak_taken || ID_branch_prediction == strong_taken) begin

                        next_pc = ID_pc_imm;
                        ID_Flush = 1; // 1 cycle penalty for ID branches

                    end

                end

                // Jump Instruction Logic
                else if (ID_Jump && ID_ALUSrc == 0) begin // If decoded instruction is JAL (otherwise, JALR is resolved in EX)

                    next_pc = ID_pc_imm; // JAL
                    ID_Flush = 1; // 1 cycle penalty for ID jumps
                    
                end

            end

            // EX Branches/Jumps

            if (EX_Branch) begin

                // Flush pipeline if prediction was incorrect

                case (prediction_status)

                    NT_T: begin

                        next_pc = EX_pc_imm;
                        ID_Flush = 1;
                        EX_Flush = 1;

                    end

                    T_NT: begin

                        next_pc = EX_pc_4;
                        ID_Flush = 1;

                    end
                    
                    // For Verilator warnings
                    default: begin
                    end

                endcase

            end

            else if (EX_Jump && EX_ALUSrc != 0) begin // JALR instruction
                
                ID_Flush = 1;
                EX_Flush = 1;
                next_pc = rs1_imm & 32'hFFFFFFFE; // JALR, clear lsb to ensure target address is word aligned
                
            end

        end

    end


endmodule
