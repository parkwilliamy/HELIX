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
        CData/*3:0*/ top_tb__DOT__web;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__BTBwrite;
        CData/*7:0*/ top_tb__DOT__INST2__DOT__IF_BHTaddr;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__IF_branch_prediction;
        CData/*7:0*/ top_tb__DOT__INST2__DOT__ID_BHTaddr;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__ID_branch_prediction;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_BTBhit;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_Stall;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_Flush;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_Branch;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__EX_prediction_status;
        CData/*7:0*/ top_tb__DOT__INST2__DOT__gh;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_PostFlush;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit;
        CData/*1:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__victim_idx;
        CData/*0:0*/ top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        SData/*12:0*/ top_tb__DOT____Vcellinp__INST1__addra;
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
        IData/*31:0*/ top_tb__DOT__INST2__DOT__IF_pc;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__next_pc;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__ID_pc;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__ID_pc_4;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__ID_pc_imm;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_rs1_data_final;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_rs2_data_final;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_ALU_result;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__MEM_csr_value_final;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__WB_rd_write_data;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__WB_csr_write_data;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__minstret;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__correct_predictions;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__total_predictions;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i;
        IData/*19:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__intimm2;
        IData/*31:0*/ __VactIterCount;
        VlWide<8>/*252:0*/ top_tb__DOT__INST2__DOT__EX;
        VlWide<8>/*252:0*/ top_tb__DOT__INST2__DOT__EX_n;
        VlWide<8>/*231:0*/ top_tb__DOT__INST2__DOT__MEM;
        VlWide<7>/*193:0*/ top_tb__DOT__INST2__DOT__WB;
        QData/*63:0*/ top_tb__DOT__INST2__DOT__mcycle;
        VlUnpacked<IData/*31:0*/, 8192> top_tb__DOT__INST1__DOT__mem;
        VlUnpacked<CData/*1:0*/, 256> top_tb__DOT__INST2__DOT__BHT;
        VlUnpacked<VlUnpacked<QData/*60:0*/, 2>, 16> top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer;
        VlUnpacked<QData/*60:0*/, 2> top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines;
        VlUnpacked<QData/*60:0*/, 2> top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines;
        VlUnpacked<IData/*31:0*/, 32> top_tb__DOT__INST2__DOT__INST3__DOT__reg_file;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
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
