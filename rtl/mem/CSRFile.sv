`timescale 1ns/1ps

import top_constants::*;

module CSRFile (
    input logic clk, rst_n,

    // ID read port
    input logic csr_read,
    input logic [11:0] ID_csr_addr,
    output logic [XLEN-1:0] ID_csr_value,

    // WB write port
    input logic csr_write,
    input logic [11:0] WB_csr_addr,
    input logic [XLEN-1:0] WB_csr_write_data,

    // Counter events
    input logic instret_event, branch_event, prediction_correct,

    // Trap handler entry / return
    input logic trap_entry, trap_exception, mret,
    input logic [5:0] trap_code,
    input logic [XLEN-1:0] WB_pc, WB_pc_imm, WB_ALU_result,

    // Interrupt pending level
    input logic mtip,

    // State exported to the pipeline
    output logic [XLEN-1:0] mtvec, mepc,
    output logic mstatus_mie, mstatus_mdt, mie_mtie, trap_active, mtime_inhibit
);

    logic [63:0] mstatus,
                 mcycle,
                 minstret,
                 mhpmcounter3,
                 mhpmcounter4,
                 menvcfg;

    logic [XLEN-1:0] misa,
                     mvendorid,
                     marchid,
                     mimpid,
                     mhartid,
                     mip,
                     mie,
                     mcounteren,
                     mcountinhibit,
                     mscratch,
                     mcause,
                     mtval,
                     mconfigptr,
                     mhpmevent3,
                     mhpmevent4;

    logic [1:0] priv; // current privilege level

    assign mip = {24'b0, mtip, 7'b0}; // MTIP mirrors the timer compare and clears when mtimecmp is rearmed

    assign mstatus_mie = mstatus[3];
    assign mstatus_mdt = mstatus[42];
    assign mie_mtie = mie[7];
    assign mtime_inhibit = mcountinhibit[1];

    // CSR read logic

    always_comb begin

        if (csr_read) begin

            case (ID_csr_addr)

                MISA: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : misa;
                MVENDORID, MARCHID, MIMPID, MHARTID, MCONFIGPTR, MENVCFG, MENVCFGH: ID_csr_value = 0; // Read only 0 registers
                MSTATUS: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mstatus[31:0];
                MSTATUSH: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mstatus[63:32];
                MTVEC: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mtvec;
                MIP: ID_csr_value = mip; // MTIP is read-only, so CSR writes never land and are not forwarded
                MIE: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mie;
                MCYCLE: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mcycle[31:0];
                MCYCLEH: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mcycle[63:32];
                MINSTRET: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : minstret[31:0];
                MINSTRETH: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : minstret[63:32];
                MHPMCOUNTER3: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mhpmcounter3[31:0];
                MHPMCOUNTER3H: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mhpmcounter3[63:32];
                MHPMCOUNTER4: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mhpmcounter4[31:0];
                MHPMCOUNTER4H: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mhpmcounter4[63:32];
                MHPMEVENT3: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mhpmevent3;
                MHPMEVENT4: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mhpmevent4;
                MCOUNTEREN: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mcounteren;
                MCOUNTINHIBIT: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mcountinhibit;
                MSCRATCH: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mscratch;
                MEPC: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mepc;
                MCAUSE: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mcause;
                MTVAL: ID_csr_value = (WB_csr_addr == ID_csr_addr) ? WB_csr_write_data : mtval;
                default: ID_csr_value = 0;

            endcase

        end

        else ID_csr_value = 0;

    end

    always_ff @ (posedge clk) begin

        if (!rst_n) begin

            misa <= {2'b11, 4'b0, 26'h400};
            mvendorid <= 0;
            marchid <= 0;
            mimpid <= 0;
            mhartid <= 0;
            mstatus <= 64'h1800;
            mtvec <= 0;
            mie <= 32'h80; // Only enable timer interrupts
            mcycle <= 0;
            minstret <= 0;
            mhpmcounter3 <= 0; // Correct branch prediction counter
            mhpmcounter4 <= 0; // Total branch prediction counter
            mhpmevent3 <= 1;
            mhpmevent4 <= 2;
            mcounteren <= 32'h1F; // Enable hpm4, hpm3, instret, time, cycles counters
            mcountinhibit <= 32'hFFFFFFE0;
            mscratch <= 0;
            mepc <= 0;
            mcause <= 0;
            mtval <= 0;
            mconfigptr <= 0;
            menvcfg <= 0;
            priv <= 2'b11;
            trap_active <= 0;

        end else begin

            // Default counting behavior
            if (!mcountinhibit[0]) mcycle <= mcycle + 1;

            if (instret_event && !mcountinhibit[2]) minstret <= minstret + 1;

            if (branch_event) begin

                if (mhpmevent4 == 2 && !mcountinhibit[4]) mhpmcounter4 <= mhpmcounter4 + 1;
                if (mhpmevent3 == 2 && !mcountinhibit[3]) mhpmcounter3 <= mhpmcounter3 + 1;

                if (prediction_correct) begin

                    if (mhpmevent3 == 1 && !mcountinhibit[3]) mhpmcounter3 <= mhpmcounter3 + 1;
                    if (mhpmevent4 == 1 && !mcountinhibit[4]) mhpmcounter4 <= mhpmcounter4 + 1;

                end

            end

            // CSR writes in WB override the default counting (later
            // non-blocking assignment to the same target wins).
            if (csr_write) begin

                case (WB_csr_addr)

                    MISA: {misa[25:5], misa[3:0]} <= {WB_csr_write_data[25:5], WB_csr_write_data[3:0]}; // MXL field and E bit read only
                    MSTATUS: {mstatus[12:11], mstatus[7], mstatus[3]} <= {WB_csr_write_data[12:11], WB_csr_write_data[7], WB_csr_write_data[3]}; // MPP, MPIE, MIE only writeable fields
                    MSTATUSH: mstatus[42] <= WB_csr_write_data[10]; // MDT only writeable field
                    MTVEC: mtvec <= WB_csr_write_data;
                    MIE: mie[7] <= WB_csr_write_data[7];
                    MCYCLE: mcycle[31:0] <= WB_csr_write_data;
                    MCYCLEH: mcycle[63:32] <= WB_csr_write_data;
                    MINSTRET: minstret[31:0] <= WB_csr_write_data;
                    MINSTRETH: minstret[63:32] <= WB_csr_write_data;
                    MHPMCOUNTER3: mhpmcounter3[31:0] <= WB_csr_write_data;
                    MHPMCOUNTER3H: mhpmcounter3[63:32] <= WB_csr_write_data;
                    MHPMCOUNTER4: mhpmcounter4[31:0] <= WB_csr_write_data;
                    MHPMCOUNTER4H: mhpmcounter4[63:32] <= WB_csr_write_data;
                    MHPMEVENT3: mhpmevent3 <= WB_csr_write_data;
                    MHPMEVENT4: mhpmevent4 <= WB_csr_write_data;
                    MCOUNTEREN: mcounteren <= WB_csr_write_data;
                    MCOUNTINHIBIT: mcountinhibit <= WB_csr_write_data;
                    MSCRATCH: mscratch <= WB_csr_write_data;
                    MEPC: mepc <= WB_csr_write_data;
                    MCAUSE: mcause <= WB_csr_write_data;
                    MTVAL: mtval <= WB_csr_write_data;
                    default: begin // For Verilator
                    end

                endcase

            end

            // Trap handler entry -- capture trap state for an exception or interrupt and mask further interrupts until mret

            if (trap_entry) begin

                mepc <= WB_pc;
                mcause <= trap_exception ? {1'b0, 25'b0, trap_code} : {1'b1, 25'b0, TIMER_INT};
                mstatus[42] <= 1; // Set MDT
                mstatus[12:11] <= 2'b11; // Set previous privilege to machine mode
                mstatus[7] <= mstatus[3]; // Set MPIE to MIE
                mstatus[3] <= 0; // Set MIE to 0
                priv <= 2'b11;
                trap_active <= 1;

                if (trap_exception) begin

                    case (trap_code)

                        INST_ADDR_MISALIGN: mtval <= WB_pc_imm; // misaligned branch/jump target address
                        LOAD_ADDR_MISALIGN, STORE_ADDR_MISALIGN: mtval <= WB_ALU_result; // misaligned load/store data address
                        BREAKPOINT: mtval <= WB_pc; // EBREAK: mtval = PC of the ebreak instruction
                        default: mtval <= 0;

                    endcase

                end

            end

            // Exception return / mret logic

            if (mret) begin

                mstatus[3] <= mstatus[7]; // Set MIE to MPIE
                mstatus[42] <= 0; // Set MDT to 0
                priv <= 2'b11;
                mstatus[12:11] <= 2'b11; // Set previous privilege to machine mode
                trap_active <= 0;

            end

        end

    end

endmodule
