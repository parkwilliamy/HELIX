`timescale 1ns/1ps

module CSRControl 
    import top_constants::*;
(
    input logic clk, rst_n, CSR, WB_csr_write,
    input logic [2:0] funct3,
    input logic [11:0] ID_csr_addr, WB_csr_addr,
    input logic [4:0] rs1, rd,
    input logic [XLEN-1:0] ID_rs1_data, WB_csr_write_data,
    output logic ID_csr_write,
    output logic [XLEN-1:0] csr_value, ID_csr_write_data
);

    // This module handles CSR control for reads and writes
    // Provides CSR value in ID stage
    // Sets control signals for CSR writes in WB stage

    logic [XLEN-1:0] test_csr;

    always_comb begin

        // Read Logic
    
        if (CSR && (funct3[1:0] != 2'b01 || rd != 5'b0)) begin // For CSRRW and CSRRWI, ignore reads to rd = x0
            
            case (ID_csr_addr)

                TEST_CSR: csr_value = test_csr;
                default: csr_value = 0;

            endcase

        end

        else csr_value = 0;

        // Write Logic
 
        if (CSR && (!funct3[1] || rs1 != 5'b0)) begin

            ID_csr_write = 1;

            case (funct3)

                3'b001: ID_csr_write_data = ID_rs1_data;
                3'b010: ID_csr_write_data = ID_rs1_data;
                3'b011: ID_csr_write_data = ID_rs1_data;
                3'b101: ID_csr_write_data = {rs1, 27'b0};
                3'b110: ID_csr_write_data = {rs1, 27'b0};
                3'b111: ID_csr_write_data = {rs1, 27'b0};
                default: ID_csr_write_data = 0;

            endcase

        end

        else begin
            
            ID_csr_write = 0;
            ID_csr_write_data = 0;

        end

    end

    always_ff @ (posedge clk) begin

        if (!rst_n) begin

            test_csr <= 0;

        end

        else begin

            if (WB_csr_write) begin

                case (WB_csr_addr)

                    TEST_CSR: test_csr <= WB_csr_write_data;
                    default: begin // For Verilator
                    end

                endcase

            end

        end

    end

endmodule
