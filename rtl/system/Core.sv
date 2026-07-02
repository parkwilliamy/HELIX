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

    logic [63:0] mtime, mtimecmp; // memory mapped timer registers

    logic [XLEN-1:0] mtvec, mepc; // CSR state exported by the CSRFile
    logic mstatus_mie, mstatus_mdt, mie_mtie, trap_active, mtime_inhibit;

    logic [3:0] exception_status, exception_status_n; // bit vector encoding pipeline stages that contain exceptional instructions
    logic [5:0] exception_code [4]; // Each entry stores corresponding trap code for pipeline stage
    logic [5:0] exception_code_n [4];
    logic critical_error; // Asserted if double trap occurs
    logic misaligned_fetch;
    logic interrupt_taken, trap_entry, mtip, mret;

    assign mtip = mtime >= mtimecmp; // MTIP mirrors the timer compare and clears when mtimecmp is rearmed
    assign mret = ID_RegSrc == 4 && ID_funct7 == 7'b0011000 && ID_funct3 == 3'b000;
    assign interrupt_taken = mstatus_mie && mie_mtie && mtip && !trap_active && exception_status == 0 && exception_status_n[2:0] == 0 && WB.ValidReg != 3'b000; // Take a pending timer interrupt once no exception is in flight (IF is excluded since that fetch is redirected) and WB holds a real instruction for mepc
    assign trap_entry = exception_status[0] || interrupt_taken; // Trap handler entry for an exception or an interrupt

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
        .RegWrite(WB.RegWrite),
        .trap_entry(trap_entry),
        .rs1(ID_rs1),
        .rs2(ID_rs2),
        .rd(WB.rd),
        .rd_write_data(WB_rd_write_data),
        .rs1_data(ID_rs1_data),
        .rs2_data(ID_rs2_data)
    );

     // Architectural CSR state and trap-entry updates live in the CSRFile; the exception pipeline below decides when traps commit

    CSRFile INST4 (
        .clk(clk),
        .rst_n(rst_n),
        .csr_read(ID_CSR && (ID_funct3[1:0] != 2'b01 || ID_rd != 5'b0)), // For CSRRW and CSRRWI, ignore reads to rd = x0
        .ID_csr_addr(ID_csr_addr),
        .ID_csr_value(ID_csr_value),
        .csr_write(WB.csr_write && !interrupt_taken), // Suppressed on interrupt entry -- the instruction in WB is flushed and re-executed after mret
        .WB_csr_addr(WB.csr_addr),
        .WB_csr_write_data(WB_csr_write_data),
        .instret_event(WB.ValidReg != 3'b000),
        .branch_event(EX.Branch),
        .prediction_correct(EX_prediction_status == NT_NT || EX_prediction_status == T_T), // prediction_status 2 and 3 indicate a correct prediction
        .trap_entry(trap_entry),
        .trap_exception(exception_status[0]),
        .trap_code(exception_code[0]),
        .WB_pc(WB.pc),
        .WB_pc_imm(WB.pc_imm),
        .WB_ALU_result(WB.ALU_result),
        .mret(mret),
        .mtip(mtip),
        .mtvec(mtvec),
        .mepc(mepc),
        .mstatus_mie(mstatus_mie),
        .mstatus_mdt(mstatus_mdt),
        .mie_mtie(mie_mtie),
        .trap_active(trap_active),
        .mtime_inhibit(mtime_inhibit)
    );

    ImmGen INST5 (
        .instruction(ID_instruction),
        .imm(ID_imm)
    );

    ALUControl INST6 (
        .sub_bit(ID_funct7[5]),
        .funct3(ID_funct3),
        .ALUOp(ID_ALUOp),
        .regbit(ID_opcode[5]),
        .field(ID_field)
    );

    assign ID_pc_imm = ID_pc + ID_imm;
    assign BTBwrite = ID_Jump || ID_Branch;

    CSRControl INST7 (
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

    ALU INST8 (
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

    BRU INST9 (
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

    Store INST10 (
        .MemWrite(MEM.MemWrite),
        .exception_status(exception_status),
        .interrupt_taken(interrupt_taken),
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

    WriteBack INST11 (
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

    Fetch INST12 (
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
        .ID_Stall(ID_Stall),
        .misaligned_fetch(misaligned_fetch),
        .trap_entry(trap_entry),
        .exception_status(exception_status),
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

    ForwardUnit INST13 (
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

    StallUnit INST14 (
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
            exception_code_n[3] = INST_ACC_FAULT;

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

            if (!ID_Stall || trap_entry) IF_pc <= next_pc; // Trap entry overrides a stall -- the stalled instructions are flushed and refetched after mret

        end

    end

    // ID

    always_comb begin

        if (exception_status[0]) begin

            exception_status_n[2] = 0;
            exception_code_n[2] = 0;

        end

        else if (!ID_Valid && !ID_PostFlush) begin // Illegal opcode exception -- flush bubbles decode as invalid but are not instructions

            exception_status_n[2] = 1;
            exception_code_n[2] = ILLEGAL_INST;

        end
        else if (ID_RegSrc == 4 && ID_funct3 == 0 && (ID_csr_addr == 12'h000 || ID_csr_addr == 12'h001)) begin

            exception_status_n[2] = 1; // ECALL (0x000) / EBREAK (0x001) only -- exclude MRET (0x302) and WFI (0x105)
            exception_code_n[2] = (ID_csr_addr == 1) ? BREAKPOINT : ENV_CALL;

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

        // Flush and a stall bubble both inject a NOP into EX
        if (EX_Flush || ID_Stall) begin
            EX_n = '0;
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
        end

        if (exception_status[0]) begin 

            exception_status_n[1] = 0;
            exception_code_n[1] = 0;
            misaligned_fetch = 0;

        end

        else if (EX.MemRead && ((EX.funct3[1:0] == 2'b01 && EX_ALU_result[0] != 1'b0) ||
                                (EX.funct3[1:0] == 2'b10 && EX_ALU_result[1:0] != 2'b00))) begin // Load address misaligned (lh/lhu need 2-byte, lw needs 4-byte; lb/lbu always ok)

            exception_status_n[1] = 1;
            exception_code_n[1] = LOAD_ADDR_MISALIGN;
            misaligned_fetch = 0;

        end

        else if (EX.MemRead && EX_ALU_result >= IO_END) begin // Load access fault exception

            exception_status_n[1] = 1;
            exception_code_n[1] = LOAD_ACC_FAULT;
            misaligned_fetch = 0;

        end

        else if (EX.MemWrite && ((EX.funct3[1:0] == 2'b01 && EX_ALU_result[0] != 1'b0) ||
                                 (EX.funct3[1:0] == 2'b10 && EX_ALU_result[1:0] != 2'b00))) begin // Store address misaligned (sh needs 2-byte, sw needs 4-byte; sb always ok)

            exception_status_n[1] = 1;
            exception_code_n[1] = STORE_ADDR_MISALIGN;
            misaligned_fetch = 0;

        end

        else if (EX.MemWrite && EX_ALU_result >= IO_END) begin // Store access fault exception

            exception_status_n[1] = 1;
            exception_code_n[1] = STORE_ACC_FAULT;
            misaligned_fetch = 0;

        end

        else if (((EX.Branch && EX_branch_taken) || (EX.Jump && EX.ALUSrc == 2'b00)) && EX.pc_imm[1:0] != 2'b00) begin // Taken branch / JAL to a misaligned target

            exception_status_n[1] = 1;
            exception_code_n[1] = INST_ADDR_MISALIGN;
            misaligned_fetch = 1;

        end

        else if (EX.Jump && EX.ALUSrc != 2'b00 && EX_ALU_result[1] != 1'b0) begin // JALR to a misaligned target (hardware clears bit 0, so only bit 1 misaligns)

            exception_status_n[1] = 1;
            exception_code_n[1] = INST_ADDR_MISALIGN;
            misaligned_fetch = 1;

        end

        else begin

            exception_status_n[1] = exception_status[2];
            exception_code_n[1] = exception_code[2];
            misaligned_fetch = 0;

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

                NT_T: BHT[EX.BHTaddr] <= BHT[EX.BHTaddr] + 1;
                T_NT: BHT[EX.BHTaddr] <= BHT[EX.BHTaddr] - 1;
                NT_NT: begin
                    if (BHT[EX.BHTaddr] > 0) BHT[EX.BHTaddr] <= BHT[EX.BHTaddr] - 1;
                end
                T_T: begin
                    if (BHT[EX.BHTaddr] < 3 && EX.branch_prediction > 1) BHT[EX.BHTaddr] <= BHT[EX.BHTaddr] + 1;
                end

            endcase

        end

    end

    // MEM 

    always_comb begin

        exception_status_n[0] = exception_status[0] ? 0 : exception_status[1];
        exception_code_n[0] = exception_status[0] ? 0 : exception_code[1];

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
                    // JALR carries its (bit-0-cleared) target here so a misaligned-fetch
                    // trap handler can read the faulting target in mtval from pc_imm uniformly with branch/JAL.
                    pc_imm: (EX.Jump && EX.ALUSrc != 2'b00) ? (EX_ALU_result & 32'hFFFFFFFE) : EX.pc_imm,
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

    // Exception status pipeline and double trap tracking

    always_ff @ (posedge clk) begin

        if (!rst_n) begin

            exception_status <= 4'b0;

            for (int i = 0; i < 4; i++) begin

                exception_code[i] <= 0;

            end

            critical_error <= 0;

        end else begin

            exception_code[3] <= exception_status_n[3] ? exception_code_n[3] : 0;
            exception_status[3] <= exception_status_n[3];

            for (int i = 2; i >= 0; i--) begin

                exception_code[i] <= exception_status_n[i] ? exception_code_n[i] : exception_code[i+1];
                exception_status[i] <= exception_status_n[i];

            end

            // Double trap handling

            if (mstatus_mdt && exception_status[0]) critical_error <= 1; // if MDT and trap taken, double trap exception occurs

        end

    end

    // MMIO Read-Write Logic

    always_ff @ (posedge clk) begin

        if (!rst_n) begin

            mtime <= 0;
            mtimecmp <= 64'hFFFFFFFFFFFFFFFF;
            led <= 16'b0;

        end else begin

            if (!mtime_inhibit) mtime <= mtime + 1;

            if (MEM.MemWrite && web_io != 4'b0) begin // If instruction in MEM is a store and IO write is enabled

                case (MEM.ALU_result)

                    MTIME: begin

                        for (int i = 0; i < 4; i++) begin
                            if (web_io[i]) mtime[8*i +:8] <= dib[8*i +:8]; // IO write
                        end
                        
                    end

                    MTIME+4: begin

                        for (int i = 0; i < 4; i++) begin
                            if (web_io[i]) mtime[8*i+32 +:8] <= dib[8*i +:8]; 
                        end
                        
                    end

                    MTIMECMP: begin

                        for (int i = 0; i < 4; i++) begin
                            if (web_io[i]) mtimecmp[8*i +:8] <= dib[8*i +:8];
                        end

                    end

                    MTIMECMP+4: begin

                        for (int i = 0; i < 4; i++) begin
                            if (web_io[i]) mtimecmp[8*i+32 +:8] <= dib[8*i +:8];
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
