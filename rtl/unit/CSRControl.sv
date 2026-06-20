`timescale 1ns/1ps

module CSRControl 
    import top_constants::*;
(
    input logic clk, rst_n, CSR, WB_csr_write,
    input logic [2:0] funct3,
    input logic [11:0] ID_csr_addr, WB_csr_addr,
    input logic [4:0] rs1, rd,
    input logic [XLEN-1:0] WB_rs1_data, WB_csr_value,
    output logic ID_csr_write,
    output logic [XLEN-1:0] csr_value
);

    // This module handles CSR control for reads and writes
    // Provides CSR value in ID stage
    // Sets control signals for CSR writes in WB stage

    logic [XLEN-1:0] WB_csr_write_data, mcycle;

    always_comb begin

        // Read Logic
    
        if (CSR && (funct3[1:0] != 2'b01 || rd != 5'b0)) begin // For CSRRW and CSRRWI, ignore reads to rd = x0
            
            case (ID_csr_addr)

                MCYCLE: csr_value = mcycle;
                default: csr_value = 0;

            endcase

        end

        else csr_value = 0;

        // Write Logic
 
        if (CSR && (!funct3[1] || rs1 != 5'b0)) ID_csr_write = 1;
        else ID_csr_write = 0;

        if (WB_csr_write) begin

            case (funct3)

                3'b001: WB_csr_write_data = WB_rs1_data;
                3'b010: WB_csr_write_data = WB_csr_value | WB_rs1_data;
                3'b011: WB_csr_write_data = WB_csr_value & ~(WB_rs1_data);
                3'b101: WB_csr_write_data = {rs1, 27'b0};
                3'b110: WB_csr_write_data = WB_csr_value | {rs1, 27'b0};
                3'b111: WB_csr_write_data = WB_csr_value & ~({rs1, 27'b0});
                default: WB_csr_write_data = 0;

            endcase

        end

    end

    always_ff @ (posedge clk) begin

        if (!rst_n) begin

            mcycle <= 27;

        end

        else begin

            if (WB_csr_write) begin

                case (WB_csr_addr)

                    TEST_CSR: mcycle <= WB_csr_write_data;
                    default: begin // For Verilator
                    end

                endcase

            end

        end

    end

endmodule
