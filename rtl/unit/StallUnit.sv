`timescale 1ns/1ps

module StallUnit (
    input logic EX_MemRead, ID_MemWrite, EX_CSR,
    input logic [4:0] EX_rd, ID_rs1, ID_rs2,
    input logic ID_rs1_valid, ID_rd_valid,
    output logic Stall
);

    always_comb begin

        // Load-use / CSR-use hazard: a load or CSR read in EX produces its
        // result too late to feed an instruction entering EX next cycle.

        Stall = 1'b0;

        if ((EX_MemRead || EX_CSR) && (EX_rd != 0)) begin

            // rs1 stall logic
            if ((EX_rd == ID_rs1) && ID_rs1_valid) Stall = 1'b1;

            // rs2 stall logic, don't stall for load-store case if store uses load's result as data
            if (!ID_MemWrite && (EX_rd == ID_rs2) && ID_rd_valid) Stall = 1'b1;

        end

    end


endmodule
