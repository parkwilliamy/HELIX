`timescale 1ns/1ps

package top_constants;

    localparam XLEN = 32; // RISC-V Register Length

    typedef enum logic [3:0] { // Different fields for ALU operations
        ADD = 4'b0000,
        SUB = 4'b1000,
        AND = 4'b0111,
        OR  = 4'b0110,
        XOR = 4'b0100,
        SLL = 4'b0001,
        SRL = 4'b0101,
        SRA = 4'b1101,
        SLT = 4'b0010,
        SLTU = 4'b0011
    } alu_op;

    typedef enum logic [6:0] { // Opcodes for different instruction types
        OP_R = 7'b0110011,
        OP_I = 7'b0010011,
        OP_I_LD = 7'b0000011,
        OP_I_FENCE = 7'b0001111,
        OP_I_JALR = 7'b1100111,
        OP_S = 7'b0100011,
        OP_B = 7'b1100011,
        OP_U_LUI = 7'b0110111,
        OP_U_AUIPC = 7'b0010111,
        OP_J = 7'b1101111,
        OP_SYSTEM = 7'b1110011
    } opcode_encoding;

    typedef enum logic [11:0] { // Addresses for different CSRs

        // Machine Information Registers

        MVENDORID = 12'hF11,
        MARCHID = 12'hF12,
        MIMPID = 12'hF13,
        MHARTID = 12'hF14,
        MCONFIGPTR = 12'hF15,

        // Machine Trap Setup
        MSTATUS = 12'h300,
        MISA = 12'h301,
        MIE = 12'h304,
        MTVEC = 12'h305,
        MCOUNTEREN = 12'h306,
        MSTATUSH = 12'h310,

        // Machine Trap Handling

        MSCRATCH = 12'h340,
        MEPC = 12'h341,
        MCAUSE = 12'h342,
        MTVAL = 12'h343,
        MIP = 12'h344,

        // Machine Configuration

        MENVCFG = 12'h30A,
        MENVCFGH = 12'h31A,

        // Machine Counter/Timers

        MCYCLE = 12'hB00,
        MINSTRET = 12'hB02,
        MHPMCOUNTER3 = 12'hB03, // correct predictions
        MHPMCOUNTER4 = 12'hB04, // total predictions
        MCYCLEH = 12'hB80,
        MINSTRETH = 12'hB82,
        MHPMCOUNTER3H = 12'hB83,
        MHPMCOUNTER4H = 12'hB84,

        // Machine Counter Setup

        MCOUNTINHIBIT = 12'h320,
        MHPMEVENT3 = 12'h323,
        MHPMEVENT4 = 12'h324

    } csr_encoding;

    typedef enum logic [5:0] { // Opcodes for different instruction types
        INST_ADDR_MISALIGN = 0,
        INST_ACC_FAULT = 1,
        ILLEGAL_INST = 2,
        BREAKPOINT = 3,
        LOAD_ADDR_MISALIGN = 4,
        LOAD_ACC_FAULT = 5,
        STORE_ADDR_MISALIGN = 6,
        STORE_ACC_FAULT = 7,
        ENV_CALL = 11,
        DBL_TRAP = 16
    } exception_encoding;


endpackage
