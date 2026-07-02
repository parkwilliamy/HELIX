// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        CData/*3:0*/ top_tb__DOT__wea;
        CData/*7:0*/ top_tb__DOT__INST1__DOT____Vlvbound_hca8ea982__0;
        CData/*7:0*/ top_tb__DOT__INST1__DOT____Vlvbound_h0f921f73__0;
        CData/*3:0*/ top_tb__DOT__INST2__DOT__web;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__IF_Branch;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__IF_Jump;
        CData/*7:0*/ top_tb__DOT__INST2__DOT__IF_BHTaddr;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__IF_branch_prediction;
        CData/*7:0*/ top_tb__DOT__INST2__DOT__ID_BHTaddr;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__ID_branch_prediction;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_BTBhit;
        CData/*2:0*/ top_tb__DOT__INST2__DOT__ID_ValidReg;
        CData/*2:0*/ top_tb__DOT__INST2__DOT__ID_RegSrc;
        CData/*3:0*/ top_tb__DOT__INST2__DOT__ID_field;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__ID_ALUOp;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__ID_ALUSrc;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_Stall;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_Flush;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_RegWrite;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_MemRead;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_MemWrite;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_Valid;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_Branch;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_Jump;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_CSR;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__EX_prediction_status;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__EX_overflow;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__EX_carry;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__EX_Flush;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__MEM_Flush;
        CData/*3:0*/ top_tb__DOT__INST2__DOT__web_io;
        CData/*3:0*/ top_tb__DOT__INST2__DOT__web_final;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__priv;
        CData/*3:0*/ top_tb__DOT__INST2__DOT__exception_status;
        CData/*3:0*/ top_tb__DOT__INST2__DOT__exception_status_n;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__critical_error;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__misaligned_fetch;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__trap_active;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__interrupt_taken;
        CData/*7:0*/ top_tb__DOT__INST2__DOT__gh;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_PostFlush;
        CData/*0:0*/ top_tb__DOT__INST2__DOT____VdfgRegularize_hdb8421e2_0_0;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__write;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__way_found;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__victim_idx;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__INST3__DOT__trap_entry;
        CData/*6:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__opcode;
        CData/*2:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__funct3;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        SData/*14:0*/ top_tb__DOT__addra;
        SData/*14:0*/ top_tb__DOT__addrb;
        SData/*15:0*/ top_tb__DOT__led;
        SData/*14:0*/ top_tb__DOT__INST2__DOT__addra;
    };
    struct {
        SData/*11:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__intimm1;
        IData/*31:0*/ top_tb__DOT__doa;
        IData/*31:0*/ top_tb__DOT__dob;
        IData/*31:0*/ top_tb__DOT__dia;
        IData/*31:0*/ top_tb__DOT__dib;
        VlWide<250>/*7999:0*/ top_tb__DOT__program_file;
        IData/*31:0*/ top_tb__DOT__RVMODEL_DATA_BEGIN;
        IData/*31:0*/ top_tb__DOT__RVMODEL_DATA_END;
        IData/*31:0*/ top_tb__DOT__tohost;
        IData/*31:0*/ top_tb__DOT__i;
        IData/*31:0*/ top_tb__DOT__fd;
        IData/*31:0*/ top_tb__DOT__INST1__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST1__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__IF_pc;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__next_pc;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__IF_pc_imm;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__ID_pc;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__ID_pc_4;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__ID_instruction;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__ID_imm;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__ID_csr_value;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_op1;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_op2;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_rs1_fwd_data;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_rs2_fwd_data;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_rs1_data_final;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_rs2_data_final;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_ALU_result;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__MEM_rs2_data_final;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__MEM_csr_value_final;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__WB_rd_write_data;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__WB_csr_write_data;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__WB_io_data;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__misa;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mvendorid;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__marchid;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mimpid;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mhartid;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mtvec;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mie;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mcounteren;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mcountinhibit;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mscratch;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mepc;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mcause;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mtval;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mconfigptr;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mhpmevent3;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__mhpmevent4;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__pc_imm_in;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST3__DOT__unnamedblk1__DOT__i;
        IData/*19:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__intimm2;
    };
    struct {
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__imm1;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__imm2;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__imm3;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__imm4;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_result;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data;
        IData/*31:0*/ __VactIterCount;
        VlWide<9>/*284:0*/ top_tb__DOT__INST2__DOT__EX;
        VlWide<9>/*284:0*/ top_tb__DOT__INST2__DOT__EX_n;
        VlWide<9>/*263:0*/ top_tb__DOT__INST2__DOT__MEM;
        VlWide<8>/*226:0*/ top_tb__DOT__INST2__DOT__WB;
        QData/*63:0*/ top_tb__DOT__INST2__DOT__mstatus;
        QData/*63:0*/ top_tb__DOT__INST2__DOT__mcycle;
        QData/*63:0*/ top_tb__DOT__INST2__DOT__minstret;
        QData/*63:0*/ top_tb__DOT__INST2__DOT__mhpmcounter3;
        QData/*63:0*/ top_tb__DOT__INST2__DOT__mhpmcounter4;
        QData/*63:0*/ top_tb__DOT__INST2__DOT__menvcfg;
        QData/*63:0*/ top_tb__DOT__INST2__DOT__mtime;
        QData/*63:0*/ top_tb__DOT__INST2__DOT__mtimecmp;
        VlUnpacked<IData/*31:0*/, 7616> top_tb__DOT__INST1__DOT__mem;
        VlUnpacked<CData/*5:0*/, 4> top_tb__DOT__INST2__DOT__exception_code;
        VlUnpacked<CData/*5:0*/, 4> top_tb__DOT__INST2__DOT__exception_code_n;
        VlUnpacked<CData/*1:0*/, 256> top_tb__DOT__INST2__DOT__BHT;
        VlUnpacked<VlUnpacked<QData/*60:0*/, 2>, 16> top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer;
        VlUnpacked<QData/*60:0*/, 2> top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines;
        VlUnpacked<QData/*60:0*/, 2> top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines;
        VlUnpacked<IData/*31:0*/, 32> top_tb__DOT__INST2__DOT__INST3__DOT__reg_file;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlNBACommitQueue<VlUnpacked<CData/*1:0*/, 256>, false, CData/*1:0*/, 1> __VdlyCommitQueuetop_tb__DOT__INST2__DOT__BHT;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
