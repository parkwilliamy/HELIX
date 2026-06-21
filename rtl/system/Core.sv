`timescale 1ns/1ps

import top_constants::*;
import branch_constants::*;
import mem_constants::*;

module Core (
    input logic rst_n, clk,
    input logic [XLEN-1:0] doa, dob,
    output logic [ADDR_WIDTH-1:0] addra, addrb, 
    output logic [3:0] web, 
    output logic [XLEN-1:0] dib 
);

    // NAMING CONVENTIONS

    // Pipeline Stages: IF (Instruction Fetch), ID (Instruction Decode), EX (Execute), MEM (Memory Writeback), WB (Register File Writeback)
    // Generally most registers are written as {PIPELINE STAGE}_{SIGNAL}

    // ************************************************************************************************ PIPELINE REGISTERS ************************************************************************************************************************************

    // IF

    logic [XLEN-1:0] IF_pc;
    logic [XLEN-1:0] next_pc;
    logic [XLEN-1:0] IF_pc_4, IF_pc_imm;
    logic IF_Branch, IF_Jump, BTBwrite, IF_BTBhit;
    logic [7:0] IF_BHTaddr;
    logic [1:0] IF_branch_prediction;

    // ID

    logic [XLEN-1:0] ID_pc, ID_pc_4;
    logic [7:0] ID_BHTaddr;
    logic [1:0] ID_branch_prediction;
    logic ID_BTBhit;
    logic [XLEN-1:0] ID_instruction, ID_imm, ID_rs1_data, ID_rs2_data, ID_pc_imm, ID_csr_value;
    logic [6:0] ID_opcode;
    logic [11:7] ID_rd;
    logic [14:12] ID_funct3;
    logic [19:15] ID_rs1;
    logic [24:20] ID_rs2;
    logic [XLEN-1:25] ID_funct7;
    logic [11:0] ID_csr_addr;
    logic ID_Stall, ID_Flush, ID_RegWrite, ID_MemRead, ID_MemWrite, ID_Valid, ID_Branch, ID_Jump, ID_CSR, ID_csr_write;
    logic [2:0] ID_ValidReg, ID_RegSrc;
    logic [1:0] ID_ALUOp, ID_ALUSrc;
    logic [3:0] ID_field; 
    
    // EX
    
    logic [3:0] EX_field;
    logic [2:0] EX_ValidReg, EX_funct3, EX_RegSrc;
    logic [1:0] EX_ALUOp, EX_branch_prediction, EX_ALUSrc;
    logic EX_RegWrite, EX_MemRead, EX_MemWrite, EX_Branch, EX_Jump, EX_csr_write, EX_csr_fwd, EX_CSR;
    logic [XLEN-1:0] EX_pc_4, EX_rs1_data, EX_rs2_data, EX_imm, EX_pc_imm, EX_csr_value;
    logic [4:0] EX_rs1, EX_rs2, EX_rd;
    logic [7:0] EX_BHTaddr;
    logic [11:0] EX_csr_addr;
    logic EX_zero, EX_sign, EX_overflow, EX_carry, EX_Flush, EX_branch_taken, EX_rs1_fwd, EX_rs2_fwd;
    logic [XLEN-1:0] EX_op1, EX_op2, EX_rs1_fwd_data, EX_rs2_fwd_data, EX_rs1_data_final, EX_rs2_data_final, EX_ALU_result;
    logic [1:0] EX_prediction_status;

    // MEM

    logic [XLEN-1:0] MEM_pc_4;
    logic [2:0] MEM_funct3, MEM_ValidReg, MEM_RegSrc;
    logic MEM_MemRead, MEM_MemWrite, MEM_RegWrite, MEM_csr_write, MEM_csr_fwd;
    logic [XLEN-1:0] MEM_pc_imm, MEM_ALU_result, MEM_rs2_data, MEM_csr_value, MEM_rs1_data;
    logic [4:0] MEM_rs1, MEM_rs2, MEM_rd;
    logic [11:0] MEM_csr_addr;
    logic [XLEN-1:0] MEM_rs2_fwd_data, MEM_rs2_data_final, MEM_csr_value_final;
    logic MEM_rs2_fwd;

    // WB

    logic [XLEN-1:0] WB_pc_imm, WB_pc_4, WB_ALU_result, WB_csr_value, WB_rs1_data;
    logic [2:0] WB_funct3, WB_ValidReg, WB_RegSrc;
    logic WB_MemRead;
    logic WB_RegWrite;
    logic WB_csr_write;
    logic [4:0] WB_rs1, WB_rd;
    logic [11:0] WB_csr_addr;
    logic [XLEN-1:0] WB_rd_write_data, WB_csr_write_data;


    // ********************************************************************************************************  CONTROL AND STATUS REGISTERS *****************************************************************************************************************

    logic [63:0] mcycle;
    logic [XLEN-1:0] minstret, correct_predictions, total_predictions;

    // CPI = mcycle / minstret
    // Branch Predictor Accuracy = correct_predictions / total_predictions


    // *************************************************************************************************************** MODULES ********************************************************************************************************************************
               
    // =============================== INSTRUCTION FETCH ================================

    logic [1:0] BHT [BHTsize-1:0]; // Branch History Table stores predictions for up to 256 branch instructions
    // Prediction Encodings
    // 1) 00 - Strong Not Taken
    // 2) 01 - Weak Not Taken
    // 3) 10 - Weak Taken
    // 4) 11 - Strong Taken

    logic [ghsize-1:0] gh; // Global History shift register stores the last 8 predictions, with 0 indicating branch not taken and 1 indicating branch taken
    
    assign IF_BHTaddr = IF_pc[2 +: ghsize] ^ gh; // gshare branch prediction indexing
    assign IF_branch_prediction = BHT[IF_BHTaddr];

    // Branch Target Buffer (BTB) is a 2-way set associative cache that holds up to 32 branch target addresses
    // Purpose of the BTB is to provide branch target addresses in the IF stage to avoid needing to compute it in the ID stage
    // No penalty incurred on taken branches that already computed the target address previously (i.e., loops)

    BTB INST1 (
        .clk(clk), 
        .rst_n(rst_n),
        .write(BTBwrite), 
        .ID_Branch(ID_Branch), 
        .IF_pc(IF_pc[XLEN-1:2]),
        .ID_pc(ID_pc[XLEN-1:2]),
        .pc_imm_in(ID_pc_imm),
        .pc_imm_out(IF_pc_imm),
        .IF_BTBhit(IF_BTBhit),
        .IF_Branch(IF_Branch),
        .IF_Jump(IF_Jump)
    );
    
    
    // =============================== INSTRUCTION DECODE ===============================

    logic ID_PostFlush; // flag used to indicate if a pipeline flush occured last cycle

    assign ID_instruction = ID_PostFlush ? 0 : doa; // if pipeline flush occured last cycle, clear the instruction received
    assign ID_opcode = ID_instruction[6:0];
    assign ID_rd = ID_instruction[11:7];
    assign ID_funct3 = ID_instruction[14:12];
    assign ID_rs1 = ID_instruction[19:15];
    assign ID_rs2 = ID_instruction[24:20];
    assign ID_funct7 = ID_instruction[XLEN-1:25];
    assign ID_csr_addr = ID_instruction[XLEN-1 -: 12];
    assign addra = ID_Stall ? ID_pc[ADDR_WIDTH-1:0] : IF_pc[ADDR_WIDTH-1:0]; // fetch instruction from ID_pc if pipeline is stalled
    
    ControlUnit INST2 (
        .opcode(ID_opcode), 
        .ValidReg(ID_ValidReg),
        .ALUOp(ID_ALUOp), 
        .RegSrc(ID_RegSrc), 
        .ALUSrc(ID_ALUSrc), 
        .RegWrite(ID_RegWrite), 
        .MemRead(ID_MemRead), 
        .MemWrite(ID_MemWrite), 
        .Branch(ID_Branch),
        .Jump(ID_Jump),
        .Valid(ID_Valid),
        .CSR(ID_CSR)
    );

    RegFile INST3 (
        .clk(clk), 
        .rst_n(rst_n),
        .RegWrite(WB_RegWrite), 
        .rs1(ID_rs1), 
        .rs2(ID_rs2), 
        .rd(WB_rd), 
        .rd_write_data(WB_rd_write_data), 
        .rs1_data(ID_rs1_data), 
        .rs2_data(ID_rs2_data)
    );

    ImmGen INST4 (
        .instruction(ID_instruction), 
        .imm(ID_imm)
    );

    ALUControl INST5 (
        .sub_bit(ID_funct7[30]), 
        .funct3(ID_funct3), 
        .ALUOp(ID_ALUOp), 
        .regbit(ID_opcode[5]), 
        .field(ID_field)
    );

    assign ID_pc_imm = ID_pc + ID_imm;
    assign BTBwrite = (ID_Jump || ID_Branch) ? 1 : 0;
    
    CSRControl INST6 (
        .clk(clk),
        .rst_n(rst_n),
        .CSR(ID_CSR),
        .WB_csr_write(WB_csr_write),
        .ID_funct3(ID_funct3),
        .WB_funct3(WB_funct3),
        .ID_csr_addr(ID_csr_addr),
        .WB_csr_addr(WB_csr_addr),
        .ID_rs1(ID_rs1),
        .ID_rd(ID_rd),
        .WB_rs1(WB_rs1),
        .WB_rs1_data(WB_rs1_data),
        .WB_csr_value(WB_csr_value),
        .mcycle(mcycle),
        .minstret(minstret),
        .correct_predictions(correct_predictions),
        .total_predictions(total_predictions),
        .ID_csr_write(ID_csr_write),
        .csr_value(ID_csr_value),
        .WB_csr_write_data(WB_csr_write_data)
    );
    

    // ==================================== EXECUTE =====================================

    assign EX_op1 = (EX_ALUOp == 1 && EX_ALUSrc == 1 && EX_RegSrc == 0 && EX_RegWrite == 1) ? 0 : EX_rs1_data_final;
    assign EX_op2 = (EX_ALUSrc == 2'b00) ? EX_rs2_data_final : 
                    (EX_ALUSrc == 2'b01) ? EX_imm : EX_csr_value;

    ALU INST7 (
        .op1(EX_op1), 
        .op2(EX_op2), 
        .field(EX_field), 
        .ALU_result(EX_ALU_result), 
        .zero(EX_zero), 
        .sign(EX_sign), 
        .overflow(EX_overflow), 
        .carry(EX_carry)
    );

    // Branch Resolution Unit compares prediction with actual branch result, yielding a prediction status that indicates whether the prediction was correct or not

    BRU INST8 (
        .EX_branch_prediction(EX_branch_prediction),
        .EX_Branch(EX_Branch), 
        .zero(EX_zero), 
        .sign(EX_sign), 
        .overflow(EX_overflow), 
        .carry(EX_carry),
        .funct3(EX_funct3),
        .branch_taken(EX_branch_taken),
        .prediction_status(EX_prediction_status)
    );


    // ================================ MEMORY WRITEBACK ================================
    
    assign addrb = MEM_ALU_result[ADDR_WIDTH-1:0];

    Store INST9 (
        .MemWrite(MEM_MemWrite),
        .addrb(MEM_ALU_result),
        .rs2_data(MEM_rs2_data_final),
        .funct3(MEM_funct3),
        .web(web),
        .dib(dib)
    );


    // =============================== REGFILE WRITEBACK ===============================+

    WriteBack INST10 (
        .ALU_result(WB_ALU_result), 
        .pc_imm(WB_pc_imm), 
        .pc_4(WB_pc_4),
        .csr_value(WB_csr_value),
        .funct3(WB_funct3),
        .RegSrc(WB_RegSrc),
        .DMEM_word(dob),
        .rd_write_data(WB_rd_write_data)
    );

    // Fetch Unit fetches next PC based on prediction status and control signals
    // Flushes the pipeline for incorrect predictions

    Fetch INST11 (
        .IF_branch_prediction(IF_branch_prediction),
        .ID_branch_prediction(ID_branch_prediction),
        .prediction_status(EX_prediction_status),
        .IF_BTBhit(IF_BTBhit),
        .ID_BTBhit(ID_BTBhit),
        .IF_Branch(IF_Branch),
        .IF_Jump(IF_Jump),
        .ID_Branch(ID_Branch),
        .EX_Branch(EX_Branch),
        .ID_Jump(ID_Jump),
        .EX_Jump(EX_Jump),
        .ID_ALUSrc(ID_ALUSrc),
        .EX_ALUSrc(EX_ALUSrc),
        .IF_pc(IF_pc),
        .IF_pc_imm(IF_pc_imm),
        .EX_pc_4(EX_pc_4),
        .ID_pc_imm(ID_pc_imm),
        .EX_pc_imm(EX_pc_imm),
        .rs1_imm(EX_ALU_result),
        .IF_pc_4(IF_pc_4),
        .next_pc(next_pc),
        .ID_Flush(ID_Flush),
        .EX_Flush(EX_Flush)
    );


    // ================================== FORWARDING ====================================

    // Forward Unit passes data to EX and MEM stages for Read After Write (RAW) hazards
    // 3 types of forwards:
    // 1) MEM -> EX
    // 2) WB -> EX
    // 3) WB -> MEM 

    ForwardUnit INST12 (
        .MEM_ALU_result(MEM_ALU_result),
        .MEM_pc_4(MEM_pc_4),
        .MEM_pc_imm(MEM_pc_imm),
        .MEM_RegSrc(MEM_RegSrc),
        .MEM_csr_value(MEM_csr_value),
        .WB_rd_write_data(WB_rd_write_data),
        .WB_csr_write_data(WB_csr_write_data),
        .EX_rs1(EX_rs1), 
        .EX_rs2(EX_rs2), 
        .MEM_rs2(MEM_rs2),
        .MEM_rd(MEM_rd), 
        .WB_rd(WB_rd),
        .EX_rs1_valid(EX_ValidReg[1]),
        .EX_rd_valid(EX_ValidReg[2]),
        .MEM_rs2_valid(MEM_ValidReg[0]),
        .MEM_rd_valid(MEM_ValidReg[2]),
        .WB_rs2_valid(WB_ValidReg[0]),
        .MEM_MemRead(MEM_MemRead),
        .MEM_MemWrite(MEM_MemWrite),
        .WB_MemRead(WB_MemRead),
        .WB_csr_write(WB_csr_write),
        .MEM_csr_addr(MEM_csr_addr),
        .WB_csr_addr(WB_csr_addr),
        .EX_rs1_fwd(EX_rs1_fwd), 
        .EX_rs2_fwd(EX_rs2_fwd),
        .MEM_rs2_fwd(MEM_rs2_fwd),
        .EX_rs1_fwd_data(EX_rs1_fwd_data),
        .EX_rs2_fwd_data(EX_rs2_fwd_data),
        .MEM_rs2_fwd_data(MEM_rs2_fwd_data),
        .MEM_csr_fwd(MEM_csr_fwd),
        .MEM_csr_value_final(MEM_csr_value_final)
    );

    assign EX_rs1_data_final = (EX_rs1_fwd) ? EX_rs1_fwd_data : EX_rs1_data;
    assign EX_rs2_data_final = (EX_rs2_fwd) ? EX_rs2_fwd_data : EX_rs2_data;
    assign MEM_rs2_data_final = (MEM_rs2_fwd) ? MEM_rs2_fwd_data : MEM_rs2_data;
    assign MEM_csr_value_final = (MEM_csr_fwd) ? WB_csr_write_data : MEM_csr_value;


    // =================================== STALLING =====================================

    // Stall Unit freezes the pipeline for load-use hazards

    StallUnit INST13 (
        .EX_MemRead(EX_MemRead),
        .ID_MemWrite(ID_MemWrite),
        .EX_CSR(EX_CSR),
        .EX_rd(EX_rd),
        .ID_rs1(ID_rs1),
        .ID_rs2(ID_rs2),
        .ID_rs1_valid(ID_ValidReg[1]),
        .ID_rd_valid(ID_ValidReg[2]),
        .Stall(ID_Stall)
    );


    // *********************************************************************************************************** SEQUENTIAL LOGIC ***************************************************************************************************************************
    
    // IF

    always @ (posedge clk) begin

        if (!rst_n) begin

            IF_pc <= 32'b0; 
            mcycle <= 0;
            minstret <= 0;
            correct_predictions <= 0;
            total_predictions <= 0;

        end

        else begin

            if (!ID_Stall) IF_pc <= next_pc;
            mcycle <= mcycle + 1; 

        end

    end
    
    // ID
    
    always @ (posedge clk) begin
    
        if (!rst_n) begin

            ID_PostFlush <= 0;
            ID_pc <= 32'b0;
            ID_pc_4 <= 32'b0;
            ID_BHTaddr <= 8'b0;
            ID_branch_prediction <= 2'b0;
            ID_BTBhit <= 1'b0;
        
        end else begin
        
            ID_PostFlush <= 0;
        
            if (ID_Flush) begin
            
                ID_pc <= 32'b0;
                ID_pc_4 <= 32'b0;
                ID_BHTaddr <= 8'b0;
                ID_branch_prediction <= 2'b0;
                ID_BTBhit <= 1'b0;
                ID_PostFlush <= 1;
            
            end
             
            else if (!ID_Stall) begin
            
                ID_pc <= IF_pc;
                ID_pc_4 <= IF_pc_4;
                ID_BHTaddr <= IF_BHTaddr;
                ID_branch_prediction <= IF_branch_prediction;
                ID_BTBhit <= IF_BTBhit;
            
            end
        
        end
    
    end
    
    // EX
    
    always @ (posedge clk) begin
    
        if (!rst_n) begin

            correct_predictions <= 0;
            total_predictions <= 0;
        
            gh <= 0;
            EX_pc_4 <= 32'b0;
            EX_pc_imm <= 32'b0;
            EX_BHTaddr <= 8'b0;
            EX_funct3 <= 3'b0;
            EX_field <= 4'b0;
            EX_ValidReg <= 3'b0;
            EX_ALUOp <= 2'b0;
            EX_RegSrc <= 3'b0;
            EX_ALUSrc <= 2'b0;
            EX_RegWrite <= 1'b0;
            EX_MemRead <= 1'b0;
            EX_MemWrite <= 1'b0;
            EX_Branch <= 1'b0;
            EX_branch_prediction <= 2'b0;
            EX_Jump <= 1'b0;
            EX_rs1_data <= 32'b0;
            EX_rs2_data <= 32'b0;
            EX_imm <= 32'b0;
            EX_rd <= 5'b0;
            EX_rs1 <= 5'b0;
            EX_rs2 <= 5'b0;
            EX_csr_addr <= 12'b0;
            EX_csr_write <= 1'b0;
            EX_csr_value <= 32'b0;
            EX_CSR <= 0;
            
            for (int i = 0; i < 256; i = i+1) begin

                BHT[i] <= 2'b01;

            end
        
        end else begin

            if (EX_Branch) total_predictions <= total_predictions+1;
     
            if (EX_Flush) begin
            
                EX_pc_4 <= 32'b0;
                EX_pc_imm <= 32'b0;
                EX_BHTaddr <= 8'b0;
                EX_funct3 <= 3'b0;
                EX_field <= 4'b0;
                EX_ValidReg <= 3'b0;
                EX_ALUOp <= 2'b0;
                EX_RegSrc <= 3'b0;
                EX_ALUSrc <= 2'b0;
                EX_RegWrite <= 1'b0;
                EX_MemRead <= 1'b0;
                EX_MemWrite <= 1'b0;
                EX_Branch <= 1'b0;
                EX_branch_prediction <= 2'b0;
                EX_Jump <= 1'b0;
                EX_rs1_data <= 32'b0;
                EX_rs2_data <= 32'b0;
                EX_imm <= 32'b0;
                EX_rd <= 5'b0;
                EX_rs1 <= 5'b0;
                EX_rs2 <= 5'b0;
                EX_csr_addr <= 12'b0;
                EX_csr_write <= 1'b0;
                EX_csr_value <= 32'b0;
                EX_CSR <= 1'b0;
            
            end
           
            else if (ID_Stall) begin
            
                EX_funct3 <= 3'b0;
                EX_field <= 4'b0;
                EX_ValidReg <= 3'b0;
                EX_ALUOp <= 2'b0;
                EX_RegSrc <= 3'b0;
                EX_ALUSrc <= 2'b0;
                EX_RegWrite <= 1'b0;
                EX_MemRead <= 1'b0;
                EX_MemWrite <= 1'b0;
                EX_Branch <= 1'b0;
                EX_branch_prediction <= 2'b0;
                EX_Jump <= 1'b0;
                EX_csr_write <= 1'b0;
                EX_CSR <= 1'b0;
   
            end
            
            else begin
            
                EX_pc_4 <= ID_pc_4;
                EX_pc_imm <= ID_pc_imm;
                EX_BHTaddr <= ID_BHTaddr;
                EX_funct3 <= ID_funct3;
                EX_field <= ID_field;
                EX_ValidReg <= ID_ValidReg;
                EX_ALUOp <= ID_ALUOp;
                EX_RegSrc <= ID_RegSrc;
                EX_ALUSrc <= ID_ALUSrc;
                EX_RegWrite <= ID_RegWrite;
                EX_MemRead <= ID_MemRead;
                EX_MemWrite <= ID_MemWrite;
                EX_Branch <= ID_Branch;
                EX_branch_prediction <= ID_branch_prediction;
                EX_Jump <= ID_Jump;
                EX_rs1_data <= ID_rs1_data;
                EX_rs2_data <= ID_rs2_data;
                EX_imm <= ID_imm;
                EX_rd <= ID_rd;
                EX_rs1 <= ID_rs1;
                EX_rs2 <= ID_rs2;
                EX_csr_addr <= ID_csr_addr;
                EX_csr_write <= ID_csr_write;
                EX_csr_value <= ID_csr_value;
                EX_CSR <= ID_CSR;
            
            end
            
            if (EX_Branch) begin
    
                gh <= {gh[6:0], EX_branch_taken};
    
                case (EX_prediction_status)
    
                    0: begin
                        
                        BHT[EX_BHTaddr] <= BHT[EX_BHTaddr]+1;
    
                    end
                    1: begin
                        
                        BHT[EX_BHTaddr] <= BHT[EX_BHTaddr]-1;
    
                    end
                    2: begin
                        
                        if (BHT[EX_BHTaddr] > 0)  BHT[EX_BHTaddr] <= BHT[EX_BHTaddr]-1;
                        correct_predictions <= correct_predictions+1;
    
                    end
                    3: begin
                        
                        if (BHT[EX_BHTaddr] < 3 && EX_branch_prediction > 1)  BHT[EX_BHTaddr] <= BHT[EX_BHTaddr]+1;
                        correct_predictions <= correct_predictions+1;
    
                    end
    
                endcase

            end
        
        end
        
    end
    
    // MEM
    
    always @ (posedge clk) begin
    
        if (!rst_n) begin
        
            MEM_pc_4 <= 0;
            MEM_pc_imm <= 0;
            MEM_funct3 <= 0;
            MEM_ValidReg <= 0;
            MEM_RegSrc <= 0;
            MEM_RegWrite <= 0;
            MEM_MemRead <= 0;
            MEM_MemWrite <= 0;
            MEM_ALU_result <= 0;
            MEM_rs1 <= 0;
            MEM_rs2_data <= 0;
            MEM_rs2 <= 0;
            MEM_rd <= 0;
            MEM_csr_addr <= 0;
            MEM_csr_write <= 0;
            MEM_csr_value <= 0;
            MEM_rs1_data <= 0;
        
        end else begin
        
            MEM_pc_4 <= EX_pc_4;
            MEM_pc_imm <= EX_pc_imm;
            MEM_funct3 <= EX_funct3;
            MEM_ValidReg <= EX_ValidReg;
            MEM_RegSrc <= EX_RegSrc;
            MEM_RegWrite <= EX_RegWrite;
            MEM_MemRead <= EX_MemRead;
            MEM_MemWrite <= EX_MemWrite;
            MEM_ALU_result <= EX_ALU_result;
            MEM_rs1 <= EX_rs1;
            MEM_rs2_data <= EX_rs2_data_final;
            MEM_rs2 <= EX_rs2;
            MEM_rd <= EX_rd;
            MEM_csr_addr <= EX_csr_addr;
            MEM_csr_write <= EX_csr_write;
            MEM_csr_value <= EX_csr_value;
            MEM_rs1_data <= EX_rs1_data_final;
          
        end
    
    end
    
    // WB
    
    always @ (posedge clk) begin
    
        if (!rst_n) begin
        
            WB_pc_4 <= 0;
            WB_pc_imm <= 0;
            WB_funct3 <= 0;
            WB_ValidReg <= 0;
            WB_RegSrc <= 0;
            WB_MemRead <= 0;
            WB_RegWrite <= 0;
            WB_ALU_result <= 0;
            WB_rs1 <= 0;
            WB_rd <= 0;
            WB_csr_addr <= 0;
            WB_csr_write <= 0;
            WB_csr_value <= 0;
            WB_rs1_data <= 0;
        
        end else begin

            if (WB_ValidReg != 3'b000) minstret <= minstret+1;
        
            WB_pc_4 <= MEM_pc_4;
            WB_pc_imm <= MEM_pc_imm;
            WB_funct3 <= MEM_funct3;
            WB_ValidReg <= MEM_ValidReg;
            WB_RegSrc <= MEM_RegSrc;
            WB_MemRead <= MEM_MemRead;
            WB_RegWrite <= MEM_RegWrite;
            WB_ALU_result <= MEM_ALU_result;
            WB_rs1 <= MEM_rs1;
            WB_rd <= MEM_rd;
            WB_csr_addr <= MEM_csr_addr;
            WB_csr_write <= MEM_csr_write;
            WB_csr_value <= MEM_csr_value_final;
            WB_rs1_data <= MEM_rs1_data;

            if (WB_csr_write) begin

                case (WB_csr_addr)

                    MCYCLE: mcycle <= {32'b0, WB_csr_write_data};
                    MINSTRET: minstret <= WB_csr_write_data;
                    CORRECT_PREDICTIONS: correct_predictions <= WB_csr_write_data;
                    TOTAL_PREDICTIONS: total_predictions <= WB_csr_write_data;
                    default: begin // For Verilator
                    end

                endcase

            end
        
        end
    
    end

endmodule
