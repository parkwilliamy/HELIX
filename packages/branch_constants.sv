`timescale 1ns/1ps

package branch_constants;

    import top_constants::*;

    // 2-way set associative cache
    localparam int LINES = 32, 
                WAYS = 2, 
                SETS = LINES / WAYS,
                INDEX_WIDTH = $clog2(SETS),
                TAG_WIDTH = (XLEN-2) - INDEX_WIDTH, // Ignore lower 2 bits of PC since redundant with byte alignment
                LRU_WIDTH = $clog2(WAYS);

    typedef struct packed { // BTB cache line layout
        logic [TAG_WIDTH-1:0] tag;
        logic [XLEN-1:0] pc_imm;
        logic branch; // 0 means jump, 1 means branch
        logic valid; // 1 means the pc_imm value is valid
        logic [LRU_WIDTH-1:0] lru; // LRU counter, where 0 indicates the most recently used line
    } BTB_line;

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

    localparam int BHTsize = 256, // Branch History Table Entries
                   ghsize = 8; // Global History Shift Register Size

    // ==================================== TESTBENCH SPECIFIC DEFINITIONS ====================================

    typedef enum logic [1:0] {
        NO_VALID = 2'b00,
        HALF_VALID = 2'b01,
        ALL_VALID = 2'b10
    } BTB_states;

    

endpackage
