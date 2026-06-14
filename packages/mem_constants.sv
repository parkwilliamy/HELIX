`timescale 1ns/1ps

// This package defines memory map used for simulations and synthesis

package mem_constants;

    import top_constants::*;
    localparam bit mem_large = 1; // mem_large is 1 for RV32I compliance tests which simulate with 2 MB of memory, otherwise 32 KiB for synthesis

    localparam logic [XLEN-1:0] IMEM_START = 32'h00000000,
                                IMEM_END   = mem_large ? 32'h00200000 : 32'h00005000,
                                DMEM_START = IMEM_END,
                                DMEM_END   = mem_large ? 32'h00250000 : 32'h00008000,
                                ADDR_WIDTH = $clog2(DMEM_END-IMEM_START);

endpackage