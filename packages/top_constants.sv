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

    typedef enum logic [1:0] { // Encodings for branch prediction
        strong_not_taken = 2'b00, // Strong not taken
        weak_not_taken = 2'b01, // Weak not taken
        weak_taken = 2'b10, // Weak taken
        strong_taken = 2'b11 // Strong taken
    } prediction_encoding;

    typedef enum logic [1:0] { // Encodings for branch prediction status
        NT_T = 2'b00, // Predicted not taken, branch taken
        T_NT = 2'b01, // Predicted taken, branch not taken
        NT_NT = 2'b10, // Predicted not taken, branch not taken
        T_T = 2'b11 // Predicted taken, branch taken
    } prediction_status_encoding;

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
        OP_J = 7'b1101111
    } opcode_encoding;

endpackage
