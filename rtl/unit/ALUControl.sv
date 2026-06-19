`timescale 1ns/1ps

module ALUControl (
    input logic sub_bit,
    input logic [2:0] funct3,
    input logic [1:0] ALUOp,
    input logic regbit,
    output logic [3:0] field
);

    always_comb begin
    
        field = 4'b0000;

        case (ALUOp)

            0: begin

                if (regbit) field = {sub_bit, funct3}; // R-type format
                else begin // I-type format

                    if (funct3 == 3'b001 || funct3 == 3'b101) field = {sub_bit, funct3}; 
                    else field = {1'b0, funct3};

                end

            end
            1: field = 4'b0000; 
            2: field = 4'b1000;

        endcase


    end

endmodule
