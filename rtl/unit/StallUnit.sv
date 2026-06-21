`timescale 1ns/1ps

module StallUnit (
    input logic EX_MemRead, ID_MemWrite, EX_CSR,
    input logic [4:0] EX_rd, ID_rs1, ID_rs2,
    input logic ID_rs1_valid, ID_rd_valid,
    output logic Stall
);

    always_comb begin

        // Load-Use Stall

        if (EX_MemRead && !ID_MemWrite) begin

            Stall = (EX_rd != 0) && (((EX_rd == ID_rs1) && ID_rs1_valid)) || ((EX_rd == ID_rs2) && ID_rd_valid); // Detect a load-use hazard

        end

        else if (EX_CSR && !ID_MemWrite) begin

            Stall = (EX_rd != 0) && (((EX_rd == ID_rs1) && ID_rs1_valid)) || ((EX_rd == ID_rs2) && ID_rd_valid); // CSR RAW hazard

        end

        else Stall = 0;

    end


endmodule
