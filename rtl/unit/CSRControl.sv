`timescale 1ns/1ps

module CSRControl 
    import top_constants::*;
(
    input logic CSR, WB_csr_write,
    input logic [2:0] ID_funct3, WB_funct3,
    input logic [11:0] ID_csr_addr, WB_csr_addr,
    input logic [4:0] ID_rs1, ID_rd, WB_rs1,
    input logic [XLEN-1:0] WB_rs1_data, WB_csr_value,
    output logic ID_csr_write,
    output logic [XLEN-1:0] WB_csr_write_data
);

    // This module handles CSR control for writes
    // Provides CSR value in ID stage
    // Sets control signals for CSR writes in WB stage

    always_comb begin

        // Write Logic
 
        if (CSR && (!ID_funct3[1] || ID_rs1 != 5'b0)) ID_csr_write = 1;
        else ID_csr_write = 0;

        if (WB_csr_write) begin

            case (WB_funct3)

                3'b001: WB_csr_write_data = WB_rs1_data;
                3'b010: WB_csr_write_data = WB_csr_value | WB_rs1_data;
                3'b011: WB_csr_write_data = WB_csr_value & ~(WB_rs1_data);
                3'b101: WB_csr_write_data = {27'b0, WB_rs1};
                3'b110: WB_csr_write_data = WB_csr_value | {27'b0, WB_rs1};
                3'b111: WB_csr_write_data = WB_csr_value & ~({27'b0, WB_rs1});
                default: WB_csr_write_data = 0;

            endcase

        end        

        else WB_csr_write_data = 0;

    end

endmodule
