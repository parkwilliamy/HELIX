`timescale 1ns/1ps

import top_constants::*;
import branch_constants::*;
import mem_constants::*;

module Core (
    input logic rst_n, clk,
    input logic [XLEN-1:0] doa, dob,
    output logic [ADDR_WIDTH-1:0] addra, addrb,
    output logic [3:0] web,
    output logic [XLEN-1:0] dib,
    output logic [15:0] led
);

    // NAMING CONVENTIONS

    // Pipeline Stages: IF (Instruction Fetch), ID (Instruction Decode), EX (Execute), MEM (Memory Writeback), WB (Register File Writeback)
    // Generally most registers are written as {PIPELINE STAGE}_{SIGNAL}
    //
    // Pipeline-register convention:
    // Stages with many latched signals (EX/MEM/WB) bundle them into a packed
    // "*_reg_t" struct, driven ONLY in that stage's always_ff block.
    // IF/ID have only 1 / 5 latched signals, so they stay flat entirely.

    // ************************************************************************************************ PIPELINE REGISTERS ************************************************************************************************************************************

    // IF -- only IF_pc is a register; the rest are combinational (BTB / Fetch / gshare outputs)

    logic [XLEN-1:0] IF_pc;
    logic [XLEN-1:0] next_pc, IF_pc_4, IF_pc_imm;
    logic IF_Branch, IF_Jump, BTBwrite, IF_BTBhit;
    logic [7:0] IF_BHTaddr;
    logic [1:0] IF_branch_prediction;

    // ID -- registers: pc, pc_4, BHTaddr, branch_prediction, BTBhit; the rest are combinational (decode / control / RegFile / ImmGen outputs)

    logic [XLEN-1:0] ID_pc, ID_pc_4;
    logic [7:0] ID_BHTaddr;
    logic [1:0] ID_branch_prediction;
    logic ID_BTBhit;
    logic [XLEN-1:0] ID_instruction, ID_imm, ID_rs1_data, ID_rs2_data, ID_pc_imm, ID_csr_value;
    logic [6:0] ID_opcode, ID_funct7;
    logic [4:0] ID_rd, ID_rs1, ID_rs2;
    logic [2:0] ID_funct3, ID_ValidReg, ID_RegSrc;
    logic [11:0] ID_csr_addr;
    logic [3:0] ID_field;
    logic [1:0] ID_ALUOp, ID_ALUSrc;
    logic ID_Stall, ID_Flush, ID_RegWrite, ID_MemRead, ID_MemWrite, ID_Valid, ID_Branch, ID_Jump, ID_CSR, ID_csr_write;

    // EX

    // Registered EX payload: the signals latched ID -> EX (driven only in the
    // EX pipeline-register block). Stage-local combinational / module-output
    // signals are NOT registers, so they live outside the struct below.
    typedef struct packed {
        logic [XLEN-1:0] pc, pc_4, pc_imm, rs1_data, rs2_data, imm, csr_value;
        logic [7:0] BHTaddr;
        logic [4:0] rs1, rs2, rd;
        logic [11:0] csr_addr;
        logic [3:0] field;
        logic [2:0] funct3, ValidReg, RegSrc;
        logic [1:0] ALUOp, ALUSrc, branch_prediction;
        logic RegWrite, MemRead, MemWrite, Branch, Jump, csr_write, CSR;
    } ex_reg_t;
    ex_reg_t EX, EX_n;            // EX is the register; EX_n is its next-state (combinational)

    logic [XLEN-1:0] EX_op1, EX_op2, EX_rs1_fwd_data, EX_rs2_fwd_data,
                     EX_rs1_data_final, EX_rs2_data_final, EX_ALU_result, EX_csr_value_final;
    logic [1:0] EX_prediction_status;
    logic EX_zero, EX_sign, EX_overflow, EX_carry, EX_Flush, EX_branch_taken,
          EX_rs1_fwd, EX_rs2_fwd, EX_csr_fwd;

    // MEM -- registered payload; rs2/csr forwarding muxes are combinational

    typedef struct packed {
        logic [XLEN-1:0] pc, pc_4, pc_imm, ALU_result, rs2_data, csr_value, rs1_data;
        logic [4:0]  rs1, rs2, rd;
        logic [11:0] csr_addr;
        logic [2:0]  funct3, ValidReg, RegSrc;
        logic MemRead, MemWrite, RegWrite, csr_write;
    } mem_reg_t;
    mem_reg_t MEM;

    logic [XLEN-1:0] MEM_rs2_fwd_data, MEM_rs2_data_final, MEM_csr_value_final;
    logic MEM_rs2_fwd, MEM_csr_fwd, MEM_io, MEM_Flush;
    logic [3:0] web_io, web_final;

    // WB -- registered payload; rd_write_data / csr_write_data are combinational (WriteBack / CSRControl outputs)

    typedef struct packed {
        logic [XLEN-1:0] pc, pc_4, pc_imm, ALU_result, csr_value, rs1_data;
        logic [4:0]  rs1, rd;
        logic [11:0] csr_addr;
        logic [2:0]  funct3, ValidReg, RegSrc;
        logic MemRead, RegWrite, csr_write, io;
    } wb_reg_t;
    wb_reg_t WB;

    logic [XLEN-1:0] WB_rd_write_data, WB_csr_write_data, WB_io_data, DMEM_word_final;
    logic WB_Flush;


    // ********************************************************************************************************  CONTROL AND STATUS REGISTERS *****************************************************************************************************************

    logic [63:0] mstatus, 
                 mcycle, 
                 minstret, 
                 mhpmcounter3, 
                 mhpmcounter4, 
                 menvcfg,
                 mtime,
                 mtimecmp;

    logic [XLEN-1:0] misa, 
                     mvendorid, 
                     marchid, 
                     mimpid, 
                     mhartid,
                     mtvec,
                     mip,
                     mie,
                     mcounteren,
                     mcountinhibit,
                     mscratch,
                     mepc,
                     mcause,
                     mtval,
                     mconfigptr,
                     mhpmevent3,
                     mhpmevent4;

    logic [1:0] priv; // current privilege level
    logic [3:0] exception_status, exception_status_n; // bit vector encoding pipeline stages that contain exceptional instructions
    logic [5:0] exception_code [4]; // Each entry stores corresponding trap code for pipeline stage
    logic [5:0] exception_code_n [4];
    logic [3:0] interrupt_code;
    logic critical_error, TrapTaken; // Asserted if double trap occurs
    // MSB encodes exception/interrupt - lower 5 bits encode cause

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
        .ID_PostFlush(ID_PostFlush),
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
        .RegWrite(WB.RegWrite),
        .exception_pending(exception_status[0]),
        .rs1(ID_rs1),
        .rs2(ID_rs2),
        .rd(WB.rd),
        .rd_write_data(WB_rd_write_data),
        .rs1_data(ID_rs1_data),
        .rs2_data(ID_rs2_data)
    );

    ImmGen INST4 (
        .instruction(ID_instruction),
        .imm(ID_imm)
    );

    ALUControl INST5 (
        .sub_bit(ID_funct7[5]),
        .funct3(ID_funct3),
        .ALUOp(ID_ALUOp),
        .regbit(ID_opcode[5]),
        .field(ID_field)
    );

    assign ID_pc_imm = ID_pc + ID_imm;
    assign BTBwrite = ID_Jump || ID_Branch;

    CSRControl INST6 (
        .CSR(ID_CSR),
        .WB_csr_write(WB.csr_write),
        .ID_funct3(ID_funct3),
        .WB_funct3(WB.funct3),
        .ID_csr_addr(ID_csr_addr),
        .WB_csr_addr(WB.csr_addr),
        .ID_rs1(ID_rs1),
        .ID_rd(ID_rd),
        .WB_rs1(WB.rs1),
        .WB_rs1_data(WB.rs1_data),
        .WB_csr_value(WB.csr_value),
        .ID_csr_write(ID_csr_write),
        .WB_csr_write_data(WB_csr_write_data)
    );


    // ==================================== EXECUTE =====================================

    assign EX_op1 = (EX.ALUOp == 1 && EX.ALUSrc == 1 && EX.RegSrc == 0 && EX.RegWrite == 1) ? 0 : EX_rs1_data_final;
    assign EX_op2 = (EX.ALUSrc == 2'b00) ? EX_rs2_data_final :
                    (EX.ALUSrc == 2'b01) ? EX.imm : EX.csr_value;

    ALU INST7 (
        .op1(EX_op1),
        .op2(EX_op2),
        .field(EX.field),
        .ALU_result(EX_ALU_result),
        .zero(EX_zero),
        .sign(EX_sign),
        .overflow(EX_overflow),
        .carry(EX_carry)
    );

    // Branch Resolution Unit compares prediction with actual branch result, yielding a prediction status that indicates whether the prediction was correct or not

    BRU INST8 (
        .EX_branch_prediction(EX.branch_prediction),
        .EX_Branch(EX.Branch),
        .zero(EX_zero),
        .sign(EX_sign),
        .overflow(EX_overflow),
        .carry(EX_carry),
        .funct3(EX.funct3),
        .branch_taken(EX_branch_taken),
        .prediction_status(EX_prediction_status)
    );


    // ================================ MEMORY WRITEBACK ================================

    assign addrb = MEM.ALU_result[ADDR_WIDTH-1:0];

    Store INST9 (
        .MemWrite(MEM.MemWrite),
        .exception_pending(exception_status[0]),
        .addrb(MEM.ALU_result),
        .rs2_data(MEM_rs2_data_final),
        .funct3(MEM.funct3),
        .web_final(web_final),
        .dib(dib)
    );

    assign MEM_io = (MEM.ALU_result >= DMEM_END);
    assign web_io = MEM_io ? web_final : 4'b0;
    assign web = MEM_io ? 4'b0 : web_final;


    // =============================== REGFILE WRITEBACK ===============================+

    assign DMEM_word_final = WB.io ? WB_io_data : dob; // Select between reading IO register state or data word from memory

    WriteBack INST10 (
        .ALU_result(WB.ALU_result),
        .pc_imm(WB.pc_imm),
        .pc_4(WB.pc_4),
        .csr_value(WB.csr_value),
        .funct3(WB.funct3),
        .RegSrc(WB.RegSrc),
        .DMEM_word(DMEM_word_final),
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
        .EX_Branch(EX.Branch),
        .ID_Jump(ID_Jump),
        .EX_Jump(EX.Jump),
        .critical_error(critical_error),
        .exception_pending(exception_status[0]),
        .ID_RegSrc(ID_RegSrc),
        .ID_funct3(ID_funct3),
        .ID_rs2(ID_rs2),
        .ID_ALUSrc(ID_ALUSrc),
        .EX_ALUSrc(EX.ALUSrc),
        .IF_pc(IF_pc),
        .IF_pc_imm(IF_pc_imm),
        .EX_pc_4(EX.pc_4),
        .ID_pc_imm(ID_pc_imm),
        .EX_pc_imm(EX.pc_imm),
        .rs1_imm(EX_ALU_result),
        .mtvec(mtvec),
        .mepc(mepc),
        .ID_funct7(ID_funct7),
        .IF_pc_4(IF_pc_4),
        .next_pc(next_pc),
        .ID_Flush(ID_Flush),
        .EX_Flush(EX_Flush),
        .MEM_Flush(MEM_Flush),
        .WB_Flush(WB_Flush)
    );


    // ================================== FORWARDING ====================================

    // Forward Unit passes data to EX and MEM stages for Read After Write (RAW) hazards
    // 3 types of forwards:
    // 1) MEM -> EX
    // 2) WB -> EX
    // 3) WB -> MEM

    ForwardUnit INST12 (
        .MEM_ALU_result(MEM.ALU_result),
        .MEM_pc_4(MEM.pc_4),
        .MEM_pc_imm(MEM.pc_imm),
        .MEM_RegSrc(MEM.RegSrc),
        .MEM_csr_value(MEM.csr_value),
        .WB_rd_write_data(WB_rd_write_data),
        .EX_rs1(EX.rs1),
        .EX_rs2(EX.rs2),
        .MEM_rs2(MEM.rs2),
        .MEM_rd(MEM.rd),
        .WB_rd(WB.rd),
        .EX_rs1_valid(EX.ValidReg[1]),
        .EX_rd_valid(EX.ValidReg[2]),
        .MEM_rs2_valid(MEM.ValidReg[0]),
        .MEM_rd_valid(MEM.ValidReg[2]),
        .WB_rs2_valid(WB.ValidReg[0]),
        .MEM_MemRead(MEM.MemRead),
        .MEM_MemWrite(MEM.MemWrite),
        .WB_MemRead(WB.MemRead),
        .WB_csr_write(WB.csr_write),
        .EX_csr_addr(EX.csr_addr),
        .MEM_csr_addr(MEM.csr_addr),
        .WB_csr_addr(WB.csr_addr),
        .EX_rs1_fwd(EX_rs1_fwd),
        .EX_rs2_fwd(EX_rs2_fwd),
        .MEM_rs2_fwd(MEM_rs2_fwd),
        .EX_rs1_fwd_data(EX_rs1_fwd_data),
        .EX_rs2_fwd_data(EX_rs2_fwd_data),
        .MEM_rs2_fwd_data(MEM_rs2_fwd_data),
        .EX_csr_fwd(EX_csr_fwd),
        .MEM_csr_fwd(MEM_csr_fwd)
    );

    assign EX_rs1_data_final = (EX_rs1_fwd) ? EX_rs1_fwd_data : EX.rs1_data;
    assign EX_rs2_data_final = (EX_rs2_fwd) ? EX_rs2_fwd_data : EX.rs2_data;
    assign MEM_rs2_data_final = (MEM_rs2_fwd) ? MEM_rs2_fwd_data : MEM.rs2_data;
    assign EX_csr_value_final = (EX_csr_fwd) ? WB_csr_write_data : EX.csr_value;
    assign MEM_csr_value_final = (MEM_csr_fwd) ? WB_csr_write_data : MEM.csr_value;


    // =================================== STALLING =====================================

    // Stall Unit freezes the pipeline for load-use hazards

    StallUnit INST13 (
        .EX_MemRead(EX.MemRead),
        .ID_MemWrite(ID_MemWrite),
        .EX_CSR(EX.CSR),
        .EX_rd(EX.rd),
        .ID_rs1(ID_rs1),
        .ID_rs2(ID_rs2),
        .ID_rs1_valid(ID_ValidReg[1]),
        .ID_rd_valid(ID_ValidReg[2]),
        .Stall(ID_Stall)
    );


    // *********************************************************************************************************** SEQUENTIAL LOGIC ***************************************************************************************************************************

    // IF

    always_comb begin
        
        if (next_pc >= IMEM_END) begin // Instruction access fault exception

            exception_status_n[3] = 1; 
            exception_code_n[3] = 6'b1;

        end
        
        else begin

            exception_status_n[3] = 0;
            exception_code_n[3] = 0;
            
        end

    end

    always_ff @ (posedge clk) begin

        if (!rst_n) begin

            IF_pc <= 32'b0;

        end

        else begin

            if (!ID_Stall) IF_pc <= next_pc;

        end

    end

    // ID

    always_comb begin

        if (ID_Flush) begin

            exception_status_n[2] = 0;
            exception_code_n[2] = 0;

        end

        else if (!ID_Valid) begin

            exception_status_n[2] = 1; // Illegal opcode exception
            exception_code_n[2] = 6'd2;

        end
        else if (ID_RegSrc == 4 && ID_funct3 == 0 && (ID_csr_addr == 12'h000 || ID_csr_addr == 12'h001)) begin

            exception_status_n[2] = 1; // ECALL (0x000) / EBREAK (0x001) only -- exclude MRET (0x302) and WFI (0x105)
            exception_code_n[2] = (ID_csr_addr == 1) ? 6'd3 : 6'd11;

        end

        else begin

            exception_status_n[2] = exception_status[3];
            exception_code_n[2] = exception_code[3];
            
        end

    end

    always_ff @ (posedge clk) begin

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

    always_comb begin

        // Flush and a stall bubble both inject a NOP
        if (EX_Flush || ID_Stall) begin
            EX_n = '0;
            exception_status_n[1] = 0;
            exception_code_n[1] = 0;
        end
        else begin
            EX_n = '{
                pc: ID_pc,
                pc_4: ID_pc_4,
                pc_imm: ID_pc_imm,
                BHTaddr: ID_BHTaddr,
                funct3: ID_funct3,
                field: ID_field,
                ValidReg: ID_ValidReg,
                ALUOp: ID_ALUOp,
                RegSrc: ID_RegSrc,
                ALUSrc: ID_ALUSrc,
                RegWrite: ID_RegWrite,
                MemRead: ID_MemRead,
                MemWrite: ID_MemWrite,
                Branch: ID_Branch,
                branch_prediction: ID_branch_prediction,
                Jump: ID_Jump,
                rs1_data: ID_rs1_data,
                rs2_data: ID_rs2_data,
                imm: ID_imm,
                rd: ID_rd,
                rs1: ID_rs1,
                rs2: ID_rs2,
                csr_addr:  ID_csr_addr,
                csr_write: ID_csr_write,
                csr_value: ID_csr_value,
                CSR:ID_CSR
            };

            if (EX.MemRead && ((EX.funct3[1:0] == 2'b01 && EX_ALU_result[0] != 1'b0) ||
                               (EX.funct3[1:0] == 2'b10 && EX_ALU_result[1:0] != 2'b00))) begin // Load address misaligned (lh/lhu need 2-byte, lw needs 4-byte; lb/lbu always ok)

                exception_status_n[1] = 1;
                exception_code_n[1] = 6'd4;

            end
            
            else if (EX.MemRead && EX_ALU_result >= DMEM_END) begin // Load access fault exception

                exception_status_n[1] = 1;
                exception_code_n[1] = 6'd5;

            end
            
            else if (EX.MemWrite && ((EX.funct3[1:0] == 2'b01 && EX_ALU_result[0] != 1'b0) ||
                                     (EX.funct3[1:0] == 2'b10 && EX_ALU_result[1:0] != 2'b00))) begin // Store address misaligned (sh needs 2-byte, sw needs 4-byte; sb always ok)

                exception_status_n[1] = 1;
                exception_code_n[1] = 6'd6;

            end
            
            else if (EX.MemWrite && EX_ALU_result >= DMEM_END) begin // Store access fault exception

                exception_status_n[1] = 1;
                exception_code_n[1] = 6'd7;

            end

            else if (next_pc[1:0] != 2'b00) begin // Instruction address misaligned exception 
        
                exception_status_n[1] = 1;  
                exception_code_n[1] = 6'b0;

            end
            
            else begin

                exception_status_n[1] = exception_status[2];
                exception_code_n[1] = exception_code[2];
                
            end

        end

    end

    always_ff @ (posedge clk) begin
        if (!rst_n) EX <= '0;
        else EX <= EX_n;
    end

    // Branch predictor state (global history, BHT, prediction counters) --
    // not pipeline registers, so kept in their own block.
    always_ff @ (posedge clk) begin

        if (!rst_n) begin

            gh <= 0;
            for (int i = 0; i < BHTsize; i = i+1) BHT[i] <= 2'b01;

        end else if (EX.Branch) begin

            gh <= {gh[ghsize-2:0], EX_branch_taken};

            case (EX_prediction_status)

                0: BHT[EX.BHTaddr] <= BHT[EX.BHTaddr] + 1;
                1: BHT[EX.BHTaddr] <= BHT[EX.BHTaddr] - 1;
                2: begin
                    if (BHT[EX.BHTaddr] > 0) BHT[EX.BHTaddr] <= BHT[EX.BHTaddr] - 1;
                end
                3: begin
                    if (BHT[EX.BHTaddr] < 3 && EX.branch_prediction > 1) BHT[EX.BHTaddr] <= BHT[EX.BHTaddr] + 1;
                end

            endcase

        end

    end

    // MEM 

    always_comb begin

        exception_status_n[0] = MEM_Flush ? 0 : exception_status[1];
        exception_code_n[0] = MEM_Flush ? 0 : exception_code[1];

    end

    always_ff @ (posedge clk) begin

        if (!rst_n)
            MEM <= '0;
        else

            if (MEM_Flush) MEM <= '0;

            else begin

                MEM <= '{
                    pc: EX.pc,
                    pc_4: EX.pc_4,
                    pc_imm: EX.pc_imm,
                    funct3: EX.funct3,
                    ValidReg: EX.ValidReg,
                    RegSrc: EX.RegSrc,
                    RegWrite: EX.RegWrite,
                    MemRead: EX.MemRead,
                    MemWrite: EX.MemWrite,
                    ALU_result: EX_ALU_result,
                    rs1: EX.rs1,
                    rs2_data: EX_rs2_data_final,
                    rs2: EX.rs2,
                    rd: EX.rd,
                    csr_addr: EX.csr_addr,
                    csr_write: EX.csr_write,
                    csr_value: EX_csr_value_final,
                    rs1_data: EX_rs1_data_final
                };

            end

    end

    always_ff @ (posedge clk) begin

        if (!rst_n) begin

            WB <= '0;

        end else begin

            if (WB_Flush) WB <= '0;
         
            else begin

                WB <= '{
                    pc: MEM.pc,
                    pc_4: MEM.pc_4,
                    pc_imm: MEM.pc_imm,
                    funct3: MEM.funct3,
                    ValidReg: MEM.ValidReg,
                    RegSrc: MEM.RegSrc,
                    MemRead: MEM.MemRead,
                    RegWrite: MEM.RegWrite,
                    ALU_result: MEM.ALU_result,
                    rs1: MEM.rs1,
                    rd: MEM.rd,
                    csr_addr: MEM.csr_addr,
                    csr_write: MEM.csr_write,
                    csr_value: MEM_csr_value_final,
                    rs1_data: MEM.rs1_data,
                    io: MEM_io
                };

            end

        end

    end

    // CSR registers and exception handling

    always_comb begin

        // CSR read logic

        if (ID_CSR && (ID_funct3[1:0] != 2'b01 || ID_rd != 5'b0)) begin // For CSRRW and CSRRWI, ignore reads to rd = x0
            
            case (ID_csr_addr)

                MISA: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : misa;
                MVENDORID, MARCHID, MIMPID, MHARTID, MCONFIGPTR, MENVCFG, MENVCFGH: ID_csr_value = 0; // Read only 0 registers
                MSTATUS: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mstatus[31:0];
                MSTATUSH: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mstatus[63:32];
                MTVEC: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mtvec;
                MIP: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mip;
                MIE: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mie;
                MCYCLE: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mcycle[31:0];
                MCYCLEH: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mcycle[63:32];
                MINSTRET: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : minstret[31:0];
                MINSTRETH: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : minstret[63:32];
                MHPMCOUNTER3: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mhpmcounter3[31:0];
                MHPMCOUNTER3H: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mhpmcounter3[63:32];
                MHPMCOUNTER4: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mhpmcounter4[31:0];
                MHPMCOUNTER4H: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mhpmcounter4[63:32];
                MHPMEVENT3: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mhpmevent3;  
                MHPMEVENT4: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mhpmevent4;
                MCOUNTEREN: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mcounteren;
                MCOUNTINHIBIT: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mcountinhibit;
                MSCRATCH: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mscratch;
                MEPC: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mepc;
                MCAUSE: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mcause;
                MTVAL: ID_csr_value = (WB.csr_addr == ID_csr_addr) ? WB_csr_write_data : mtval;
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
            mip <= 0;
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
            mtime <= 0;
            mtimecmp <= 64'hFFFFFFFFFFFFFFFF;
            priv <= 2'b11;
            exception_status <= 4'b0;

            for (int i = 0; i < 4; i++) begin

                exception_code[i] <= 0;

            end

            critical_error <= 0;
            TrapTaken <= 0;

        end else begin

            // Default counting behavior
            if (!mcountinhibit[0]) mcycle <= mcycle + 1;
            if (!mcountinhibit[1]) mtime <= mtime + 1;

            if (WB.ValidReg != 3'b000 && !mcountinhibit[2]) minstret <= minstret + 1;

            if (EX.Branch) begin

                if (mhpmevent4 == 2 && !mcountinhibit[4]) mhpmcounter4 <= mhpmcounter4 + 1;
                if (mhpmevent3 == 2 && !mcountinhibit[3]) mhpmcounter3 <= mhpmcounter3 + 1;
                
                // prediction_status 2 and 3 indicate a correct prediction
                if (EX_prediction_status == 2 || EX_prediction_status == 3) begin
                    
                    if (mhpmevent3 == 1 && !mcountinhibit[3]) mhpmcounter3 <= mhpmcounter3 + 1;
                    if (mhpmevent4 == 1 && !mcountinhibit[4]) mhpmcounter4 <= mhpmcounter4 + 1;
            
                end

            end

            // CSR writes in WB override the default counting (later
            // non-blocking assignment to the same target wins).
            if (WB.csr_write) begin

                case (WB.csr_addr)

                    MISA: {misa[25:5], misa[3:0]} <= {WB_csr_write_data[25:5], WB_csr_write_data[3:0]}; // MXL field and E bit read only
                    MSTATUS: {mstatus[12:11], mstatus[7], mstatus[3]} <= {WB_csr_write_data[12:11], WB_csr_write_data[7], WB_csr_write_data[3]}; // MPP, MPIE, MIE only writeable fields
                    MSTATUSH: mstatus[42] <= WB_csr_write_data[10]; // MDT only writeable field
                    MTVEC: mtvec <= WB_csr_write_data;
                    MIP: mip[7] <= WB_csr_write_data[7];
                    MIE: mie[7] <= WB_csr_write_data[7];
                    MCYCLE: mcycle[31:0] <= WB_csr_write_data; 
                    MCYCLEH: mcycle[63:32] <= WB_csr_write_data;
                    MINSTRET: minstret[31:0] <= WB_csr_write_data;
                    MINSTRETH: minstret[63:32] <= WB_csr_write_data;
                    MHPMCOUNTER3: mhpmcounter3[31:0] <= WB_csr_write_data;
                    MHPMCOUNTER3H: mhpmcounter3[63:32] <= WB_csr_write_data;
                    MHPMCOUNTER4: mhpmcounter4[31:0] <= WB_csr_write_data;
                    MHPMCOUNTER4H: mhpmcounter3[63:32] <= WB_csr_write_data;
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

            exception_code[3] <= exception_status_n[3] ? exception_code_n[3] : 0;
            exception_status[3] <= exception_status_n[3];

            for (int i = 2; i >= 0; i--) begin

                exception_code[i] <= exception_status_n[i] ? exception_code_n[i] : exception_code[i+1];
                exception_status[i] <= exception_status_n[i];

            end

            // Exception handling logic / Trap handler entry

            if (exception_status[0]) begin

                mepc <= WB.pc;
                mcause <= {1'b0, 25'b0, exception_code[0]};
                priv <= 2'b11;
                case (exception_code[0])

                    INST_ADDR_MISALIGN, LOAD_ADDR_MISALIGN, STORE_ADDR_MISALIGN: mtval <= WB.ALU_result; // write misaligned address to mtval
                    BREAKPOINT: mtval <= WB.pc; // EBREAK: mtval = PC of the ebreak instruction
                    default: mtval <= 0;

                endcase
                TrapTaken <= 1;

            end

            // Double trap handling

            if (mstatus[42] && TrapTaken) begin // if MDT and trap taken, double trap exception occurs

                mstatus[12:11] <= 2'b11; // Set previous privilege to machine mode
                mstatus[7] <= mstatus[3]; // Set MPIE to MIE
                mstatus[3] <= 0; // Set MIE to 0
                critical_error <= 1; // Assert critical error

            end

            // Exception return / mret logic

            if (ID_RegSrc == 4 && ID_funct7 == 7'b0011000 && ID_funct3 == 3'b000) begin

                mstatus[3] <= mstatus[7]; // Set MIE to MPIE
                priv <= 2'b11;
                mstatus[12:11] <= 2'b11; // Set previous privilege to machine mode

            end

            // Timer Interrupt

            if (mstatus[3]) begin // If interrupts enabled 

                if (mie[7]) begin // If timer interrupts enabled

                    if (mtime >= mtimecmp) interrupt_code <= 4'd7;
                    else if (mtime == 64'hFFFFFFFFFFFFFFFF) interrupt_code <= 4'd13;

                    mip[7] <= 1;

                end
         
            end

            if (exception_status == 0 && mip[7]) begin // If no pending exceptions and timer interrupts pending

                mepc <= WB.pc;
                mcause <= {1'b0, 27'b0, interrupt_code};
                priv <= 2'b11;
                TrapTaken <= 1;

            end

        end

    end

    // MMIO Read-Write Logic

    always_ff @ (posedge clk) begin

        if (!rst_n) begin

            led <= 16'b0;

        end else begin

            if (MEM.MemWrite && web_io != 4'b0) begin // If instruction in MEM is a store and IO write is enabled

                case (MEM.ALU_result)

                    MTIME: begin

                        for (int i = 0; i < 4; i++) begin
                            if (web_io[i]) mtime[8*i +:8] <= dib[8*i +:8]; // IO write
                        end
                        
                    end

                    MTIME+4: begin

                        for (int i = 4; i < 8; i++) begin
                            if (web_io[i]) mtime[8*i +:8] <= dib[8*i +:8]; 
                        end
                        
                    end

                    MTIMECMP: begin

                        for (int i = 0; i < 4; i++) begin
                            if (web_io[i]) mtime[8*i +:8] <= dib[8*i +:8]; 
                        end
                        
                    end

                    MTIMECMP+4: begin

                        for (int i = 4; i < 8; i++) begin
                            if (web_io[i]) mtime[8*i +:8] <= dib[8*i +:8]; 
                        end
                        
                    end

                    LEDS: begin

                        for (int i = 0; i < 2; i++) begin
                            if (web_io[i]) led[8*i +:8] <= dib[8*i +:8]; 
                        end

                    end

                    default: begin // Verilator
                    end

                endcase

            end

            if (MEM.MemRead && MEM_io) begin // If instruction in MEM is a load from IO space

                case (MEM.ALU_result)

                    MTIME: WB_io_data <= mtime[31:0];

                    MTIME+4: WB_io_data <= mtime[63:32];

                    MTIMECMP: WB_io_data <= mtimecmp[31:0];

                    MTIMECMP+4: WB_io_data <= mtimecmp[63:32];

                    LEDS: WB_io_data <= {16'b0, led}; // IO read returns current register state

                    default: begin // Verilator
                    end

                    // Rest of IO space reserved for now

                endcase

            end

        end

    end

endmodule
