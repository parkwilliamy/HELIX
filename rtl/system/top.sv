`timescale 1ns/1ps

import top_constants::*;
import mem_constants::*;

module top (
    input logic clk, rst_n_mem, rst_n_cpu, rst_clk, mem_control, RX,
    output logic TX,
    output logic [12:0] led // NOTE: LEDs are used to avoid Vivado optimizing away all the modules
);

    // Clock Wizard is used to convert 100MHz Basys-3 clock into 57MHz for CPU
  
    logic clk_out1;
    
    clk_wiz_0 INST1 (
      .clk_out1(clk_out1), // 57 MHz clock             
      .reset(rst_clk), 
      .locked(),
      .clk_in1(clk) // 100 MHz clock
    );
    
    // BRAM (word addressable)

    logic [3:0] wea, web;
    logic [ADDR_WIDTH-1:0] addra, addrb; // 20 KB for IMEM, 12 KB for DMEM
    logic [ADDR_WIDTH-1:0] addra_cpu, addrb_cpu;
    logic [ADDR_WIDTH-1:0] addra_mem, addrb_mem;
    logic [XLEN-1:0] doa, dob; // Port A is IMEM, Port B is DMEM
    logic [XLEN-1:0] dia, dib;
    
    logic [15:0] row_a, row_b;
    
    // mem_control determines what device has control of BRAM reads/writes, 0 is CPU, 1 is MemAccess
    // Addresses are right shifted 2 bits to convert a byte address into a word address
    
    assign row_a = mem_control ? addra_mem >> 2 : addra_cpu >> 2;
    assign row_b = mem_control ? addrb_mem >> 2 : addrb_cpu >> 2;

    blk_mem_gen_0 INST2 ( 
        .clka(clk_out1),
        .clkb(clk_out1),
        .wea(wea),
        .web(web),
        .addra(row_a[ADDR_WIDTH-3:0]),
        .addrb(row_b[ADDR_WIDTH-3:0]),
        .dina(dia),
        .dinb(dib),
        .douta(doa),
        .doutb(dob)
    );

    Core INST3 (
        .clk(clk_out1),
        .rst_n(rst_n_cpu),
        .doa(doa),
        .dob(dob),
        .addra(addra_cpu),
        .addrb(addrb_cpu),
        .web(web),
        .dib(dib)
    );

    logic TX_enable, byte_done;
    logic [7:0] TX_data, RX_data;

    // UART packs bits in bytes, while MemAccess packs bytes into frames
    // Both modules work together to read and write from BRAM while the CPU is not executing

    UART INST4 (
        .clk(clk_out1),
        .rst_n(rst_n_mem),
        .RX(RX),
        .TX_enable(TX_enable),
        .TX_data(TX_data),
        .TX(TX),
        .byte_done(byte_done),
        .RX_data(RX_data)
    );
    
    MemAccess INST5 (
        .clk(clk_out1),
        .rst_n(rst_n_mem),
        .byte_done(byte_done),
        .RX_data(RX_data),
        .dob(dob),
        .TX_enable(TX_enable),
        .addra(addra_mem),
        .addrb(addrb_mem),
        .wea(wea),
        .dia(dia),
        .TX_data(TX_data)
    );

    assign led[12:9] = web;
    assign led[8:1] = TX_data;
    assign led[0] = byte_done;
    
endmodule
