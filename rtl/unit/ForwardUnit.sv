`timescale 1ns/1ps

import top_constants::*;

module ForwardUnit (
    input logic [XLEN-1:0] MEM_ALU_result, MEM_pc_4, MEM_pc_imm, MEM_csr_value, WB_rd_write_data,
    input logic [2:0] MEM_RegSrc,
    input logic [4:0] EX_rs1, EX_rs2, MEM_rs2, MEM_rd, WB_rd,
    input logic EX_rs1_valid, EX_rd_valid, MEM_rs2_valid ,MEM_rd_valid, WB_rs2_valid, MEM_MemRead, MEM_MemWrite, WB_MemRead, WB_csr_write,
    input logic [11:0] EX_csr_addr, MEM_csr_addr, WB_csr_addr,
    output logic EX_rs1_fwd, EX_rs2_fwd, MEM_rs2_fwd, // These signals indicate if one or more of these pipeline registers need data forwarded to them
    output logic [XLEN-1:0] EX_rs1_fwd_data, EX_rs2_fwd_data, MEM_rs2_fwd_data, // Data to forward to respective pipeline registers
    output logic EX_csr_fwd, MEM_csr_fwd
);

    logic EX_rs1_MEM_fwd, EX_rs2_MEM_fwd, EX_rs1_WB_fwd, EX_rs2_WB_fwd, MEM_rs2_WB_fwd;
    logic [XLEN-1:0] MEM_rd_write_data;

    // Instructions will always have the most recent data forwarded to them (i.e., prioritize MEM data over WB)
    assign EX_rs1_MEM_fwd = (EX_rs1 == MEM_rd) && (EX_rs1_valid && MEM_rs2_valid) && !MEM_MemRead; // MEM -> EX rd to rs1 forward
    assign EX_rs2_MEM_fwd = (EX_rs2 == MEM_rd) && (EX_rd_valid && MEM_rs2_valid) && !MEM_MemRead; // MEM -> EX rd to rs2 forward
    assign EX_rs1_WB_fwd = (EX_rs1 == WB_rd) && (EX_rs1_valid && WB_rs2_valid); // WB -> EX rd to rs1 forward
    assign EX_rs2_WB_fwd = (EX_rs2 == WB_rd) && (EX_rd_valid && WB_rs2_valid); // WB -> EX rd to rs2 forward
    assign MEM_rs2_WB_fwd = (MEM_rs2 == WB_rd) && ((WB_csr_write) || ((MEM_MemWrite && WB_MemRead) && (MEM_rd_valid && WB_rs2_valid))); // WB -> MEM rd to rs2 forward (for load-stores)
    //assign MEM_rs2_WB_fwd = (MEM_rs2 == WB_rd) && (WB_csr_write);

    assign EX_rs1_fwd = (EX_rs1_MEM_fwd || EX_rs1_WB_fwd) && (EX_rs1 != 0);
    assign EX_rs2_fwd = (EX_rs2_MEM_fwd || EX_rs2_WB_fwd) && (EX_rs2 != 0);
    assign MEM_rs2_fwd = MEM_rs2_WB_fwd && MEM_rs2 != 0;

    // CSR Forwarding

    assign EX_csr_fwd = (EX_csr_addr == WB_csr_addr);
    assign MEM_csr_fwd = (MEM_csr_addr == WB_csr_addr);

    always_comb begin
    
        MEM_rd_write_data = 0;

        // For MEM -> EX forwards, must decide what data to write back to EX
        case (MEM_RegSrc)

            0: MEM_rd_write_data = MEM_ALU_result;
            2: MEM_rd_write_data = MEM_pc_imm;
            3: MEM_rd_write_data = MEM_pc_4;
            4: MEM_rd_write_data = MEM_csr_value;
            default: MEM_rd_write_data = 0;

        endcase

        // rs1 MEM -> EX forwards
        if (EX_rs1_MEM_fwd) EX_rs1_fwd_data = MEM_rd_write_data;
        else EX_rs1_fwd_data = 0;

        // rs1 WB -> EX forwards
        if (EX_rs1_WB_fwd) begin
            if (EX_rs1_MEM_fwd) begin
                if (MEM_rd != WB_rd) EX_rs1_fwd_data = WB_rd_write_data; // MEM priority forwarding
                else EX_rs1_fwd_data = MEM_rd_write_data;
            end
            else EX_rs1_fwd_data = WB_rd_write_data;
        end

        // rs2 MEM -> EX forwards
        if (EX_rs2_MEM_fwd) EX_rs2_fwd_data = MEM_rd_write_data;
        else EX_rs2_fwd_data = 0;

        // rs2 WB -> EX forwards
        if (EX_rs2_WB_fwd) begin
            if (EX_rs2_MEM_fwd) begin
                if (MEM_rd != WB_rd) EX_rs2_fwd_data = WB_rd_write_data; // MEM priority forwarding
                else EX_rs2_fwd_data = MEM_rd_write_data;
            end
            else EX_rs2_fwd_data = WB_rd_write_data;
        end

        // rs2 WB -> MEM forwards
        if (MEM_rs2_WB_fwd) MEM_rs2_fwd_data = WB_rd_write_data;
        else MEM_rs2_fwd_data = 0;

    end


endmodule
