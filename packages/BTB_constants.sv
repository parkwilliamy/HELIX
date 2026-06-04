`timescale 1ns/1ps

import top_constants::*;

package BTB_constants;

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
        logic [LRU_WIDTH-1:0] lru; // LRU counter, where 0 indicates the least recently used line
    } BTB_line;

    // ==================================== TESTBENCH SPECIFIC DEFINITIONS ====================================

    localparam logic [XLEN-1:0] ADDR_START = 32'h0000_0000,
                                MEM_SIZE = 32'h0000_5000, // 20 KiB instruction memory
                                ADDR_END = ADDR_START + MEM_SIZE;

    typedef struct packed { // BTB cache line layout
        logic [TAG_WIDTH-1:0] tag;
        logic [XLEN-1:0] pc_imm;
        logic branch; // 0 means jump, 1 means branch
        logic valid; // 1 means the pc_imm value is valid
        logic [LRU_WIDTH-1:0] lru; // LRU counter, where 0 indicates the least recently used line
    } BTB_line;

    typedef enum logic [1:0] {
        NO_VALID = 2'b00,
        HALF_VALID = 2'b01,
        ALL_VALID = 2'b10;
    } BTB_states;

endpackage;