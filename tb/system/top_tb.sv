`timescale 1ns/1ps

import top_constants::*;
import mem_constants::*;

module top_tb (input rst_n, clk);

    logic [3:0] wea, web;
    logic [ADDR_WIDTH-1:0] addra, addrb; // 20 KB for IMEM, 12 KB for DMEM
    logic [ADDR_WIDTH-1:0] addra_cpu, addrb_cpu;
    logic [XLEN-1:0] doa, dob; // Port A is IMEM, Port B is DMEM
    logic [XLEN-1:0] dia, dib;
    logic [15:0] led;
    
    logic [ADDR_WIDTH-1:0] row_a, row_b;
    
    assign row_a = addra_cpu >> 2;
    assign row_b = addrb_cpu >> 2;

    BRAM INST1 ( 
        .clk(clk),
        .wea(wea),
        .web(web),
        .addra(row_a[ADDR_WIDTH-3:0]),
        .addrb(row_b[ADDR_WIDTH-3:0]),
        .dia(dia),
        .dib(dib),
        .doa(doa),
        .dob(dob)
    );

    Core INST2 (
        .clk(clk),
        .rst_n(rst_n),
        .doa(doa),
        .dob(dob),
        .addra(addra_cpu),
        .addrb(addrb_cpu),
        .web(web),
        .dib(dib),
        .led(led)
    );


    logic [1000*8:1] program_file;  
    logic [31:0] RVMODEL_DATA_BEGIN, RVMODEL_DATA_END, tohost;
    // signature region start, end, and memory addr to check for program completion

    integer i;
    integer fd;

    initial begin

        // Argument loading

        if (!$value$plusargs("PROGRAM=%s", program_file)) begin
            $display("ERROR: No PROGRAM file specified! Use +PROGRAM=<path>");
            $finish;
        end

        $display("Loading program from %s", program_file);

        $readmemh(program_file, INST1.mem, 0);

        if (!$value$plusargs("begin_signature=%h", RVMODEL_DATA_BEGIN)) begin
            $display("No RVMODEL_DATA_BEGIN address specified! Using default address 0x00005000");
            RVMODEL_DATA_BEGIN = 32'h00005000;
        end
        
        $display("RVMODEL_DATA_BEGIN: %h", RVMODEL_DATA_BEGIN);

        if (!$value$plusargs("end_signature=%h", RVMODEL_DATA_END)) begin
            $display("No RVMODEL_DATA_END address specified! Using default address 0x00008000");
            RVMODEL_DATA_END = 32'h00008000;
        end
        
        $display("RVMODEL_DATA_END: %h", RVMODEL_DATA_END);

        if (!$value$plusargs("tohost=%h", tohost)) begin
            $display("No tohost address specified! Using default address 0x00005000");
            tohost = 32'h00005000;
        end
        
        $display("tohost: %h", tohost);

    end

    always @ (posedge clk) begin
        if (INST1.mem[tohost/4] == 32'h00000001) begin

            dump_sigfile();
            $finish; // termination condition

        end
    end

    task dump_sigfile();
        begin
            fd = $fopen("DUT-RV32I_test.signature", "w");

            for (i=RVMODEL_DATA_BEGIN; i < RVMODEL_DATA_END; i=i+4) begin
                $fdisplay(fd, "%08h", (INST1.mem[i/4]));
            end

            $fclose(fd);

        end
    endtask
   

endmodule