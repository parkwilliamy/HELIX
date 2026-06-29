// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<9>/*287:0*/ Vtop_tb__ConstPool__CONST_h2a0d1dfa_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop_tb__ConstPool__TABLE_h7e943254_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop_tb__ConstPool__TABLE_h95f43f75_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop_tb__ConstPool__TABLE_ha9daee0e_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop_tb__ConstPool__TABLE_hde757d44_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop_tb__ConstPool__TABLE_h05aa568c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop_tb__ConstPool__TABLE_h47e2d5d3_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop_tb__ConstPool__TABLE_h4971ab44_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop_tb__ConstPool__TABLE_h93fb0f0f_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop_tb__ConstPool__TABLE_ha648006e_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop_tb__ConstPool__TABLE_hcdbe96f9_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop_tb__ConstPool__TABLE_h64d7ce41_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vtop_tb__ConstPool__TABLE_hdb653689_0;
extern const VlWide<9>/*287:0*/ Vtop_tb__ConstPool__CONST_h11ab053c_0;
extern const VlWide<8>/*255:0*/ Vtop_tb__ConstPool__CONST_hd5724acc_0;

void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ top_tb__DOT__INST2__DOT__IF_pc_imm;
    top_tb__DOT__INST2__DOT__IF_pc_imm = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__IF_Branch;
    top_tb__DOT__INST2__DOT__IF_Branch = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__IF_Jump;
    top_tb__DOT__INST2__DOT__IF_Jump = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__ID_imm;
    top_tb__DOT__INST2__DOT__ID_imm = 0;
    CData/*2:0*/ top_tb__DOT__INST2__DOT__ID_ValidReg;
    top_tb__DOT__INST2__DOT__ID_ValidReg = 0;
    CData/*3:0*/ top_tb__DOT__INST2__DOT__ID_field;
    top_tb__DOT__INST2__DOT__ID_field = 0;
    CData/*1:0*/ top_tb__DOT__INST2__DOT__ID_ALUOp;
    top_tb__DOT__INST2__DOT__ID_ALUOp = 0;
    CData/*1:0*/ top_tb__DOT__INST2__DOT__ID_ALUSrc;
    top_tb__DOT__INST2__DOT__ID_ALUSrc = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_RegWrite;
    top_tb__DOT__INST2__DOT__ID_RegWrite = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_MemRead;
    top_tb__DOT__INST2__DOT__ID_MemRead = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_MemWrite;
    top_tb__DOT__INST2__DOT__ID_MemWrite = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_Valid;
    top_tb__DOT__INST2__DOT__ID_Valid = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_Jump;
    top_tb__DOT__INST2__DOT__ID_Jump = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__ID_CSR;
    top_tb__DOT__INST2__DOT__ID_CSR = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_op1;
    top_tb__DOT__INST2__DOT__EX_op1 = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_op2;
    top_tb__DOT__INST2__DOT__EX_op2 = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_rs1_fwd_data;
    top_tb__DOT__INST2__DOT__EX_rs1_fwd_data = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_rs2_fwd_data;
    top_tb__DOT__INST2__DOT__EX_rs2_fwd_data = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__EX_overflow;
    top_tb__DOT__INST2__DOT__EX_overflow = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__EX_carry;
    top_tb__DOT__INST2__DOT__EX_carry = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__EX_Flush;
    top_tb__DOT__INST2__DOT__EX_Flush = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__MEM_rs2_data_final;
    top_tb__DOT__INST2__DOT__MEM_rs2_data_final = 0;
    CData/*3:0*/ top_tb__DOT__INST2__DOT__web_final;
    top_tb__DOT__INST2__DOT__web_final = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__INST1__DOT__way_found;
    top_tb__DOT__INST2__DOT__INST1__DOT__way_found = 0;
    CData/*6:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__opcode;
    top_tb__DOT__INST2__DOT__INST4__DOT__opcode = 0;
    CData/*2:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__funct3;
    top_tb__DOT__INST2__DOT__INST4__DOT__funct3 = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__imm1;
    top_tb__DOT__INST2__DOT__INST4__DOT__imm1 = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__imm2;
    top_tb__DOT__INST2__DOT__INST4__DOT__imm2 = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__imm3;
    top_tb__DOT__INST2__DOT__INST4__DOT__imm3 = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__INST4__DOT__imm4;
    top_tb__DOT__INST2__DOT__INST4__DOT__imm4 = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word;
    top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_result;
    top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_result = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd;
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd;
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd;
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd;
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd;
    top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data;
    top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    __VdfgRegularize_h6e95ff9d_0_4 = 0;
    VlWide<9>/*263:0*/ __Vdly__top_tb__DOT__INST2__DOT__MEM;
    VL_ZERO_W(264, __Vdly__top_tb__DOT__INST2__DOT__MEM);
    CData/*0:0*/ __Vdly__top_tb__DOT__INST2__DOT__TrapTaken;
    __Vdly__top_tb__DOT__INST2__DOT__TrapTaken = 0;
    QData/*63:0*/ __Vdly__top_tb__DOT__INST2__DOT__mtime;
    __Vdly__top_tb__DOT__INST2__DOT__mtime = 0;
    QData/*63:0*/ __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter4;
    __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter4 = 0;
    QData/*63:0*/ __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3;
    __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3 = 0;
    QData/*63:0*/ __Vdly__top_tb__DOT__INST2__DOT__mstatus;
    __Vdly__top_tb__DOT__INST2__DOT__mstatus = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__INST1__DOT__mem__v0;
    __VdlyVal__top_tb__DOT__INST1__DOT__mem__v0 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v0;
    __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST1__DOT__mem__v0;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__INST1__DOT__mem__v1;
    __VdlyVal__top_tb__DOT__INST1__DOT__mem__v1 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v1;
    __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST1__DOT__mem__v1;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__INST1__DOT__mem__v2;
    __VdlyVal__top_tb__DOT__INST1__DOT__mem__v2 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v2;
    __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST1__DOT__mem__v2;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__INST1__DOT__mem__v3;
    __VdlyVal__top_tb__DOT__INST1__DOT__mem__v3 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v3;
    __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST1__DOT__mem__v3;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__INST1__DOT__mem__v4;
    __VdlyVal__top_tb__DOT__INST1__DOT__mem__v4 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v4;
    __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST1__DOT__mem__v4;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v4 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__INST1__DOT__mem__v5;
    __VdlyVal__top_tb__DOT__INST1__DOT__mem__v5 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v5;
    __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST1__DOT__mem__v5;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v5 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__INST1__DOT__mem__v6;
    __VdlyVal__top_tb__DOT__INST1__DOT__mem__v6 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v6;
    __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST1__DOT__mem__v6;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__INST1__DOT__mem__v7;
    __VdlyVal__top_tb__DOT__INST1__DOT__mem__v7 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v7;
    __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST1__DOT__mem__v7;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v7 = 0;
    CData/*1:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__BHT__v0;
    __VdlyVal__top_tb__DOT__INST2__DOT__BHT__v0 = 0;
    CData/*7:0*/ __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v0;
    __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v0 = 0;
    CData/*1:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__BHT__v1;
    __VdlyVal__top_tb__DOT__INST2__DOT__BHT__v1 = 0;
    CData/*7:0*/ __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v1;
    __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v1 = 0;
    CData/*1:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__BHT__v2;
    __VdlyVal__top_tb__DOT__INST2__DOT__BHT__v2 = 0;
    CData/*7:0*/ __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v2;
    __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v2 = 0;
    CData/*1:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__BHT__v3;
    __VdlyVal__top_tb__DOT__INST2__DOT__BHT__v3 = 0;
    CData/*7:0*/ __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v3;
    __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v3 = 0;
    CData/*7:0*/ __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v4;
    __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v4 = 0;
    CData/*5:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v0;
    __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v0 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v0;
    __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v0 = 0;
    CData/*5:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v1;
    __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v1 = 0;
    CData/*5:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v2;
    __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v2 = 0;
    CData/*5:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v3;
    __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v3 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v4;
    __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v4 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v5;
    __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v5 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v6;
    __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v6 = 0;
    CData/*0:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0;
    __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0;
    __VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0;
    __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0 = 0;
    QData/*60:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1;
    __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1 = 0;
    CData/*3:0*/ __VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1;
    __VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1;
    __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1 = 0;
    QData/*60:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2;
    __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2 = 0;
    CData/*3:0*/ __VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2;
    __VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2;
    __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2 = 0;
    CData/*0:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3;
    __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3 = 0;
    CData/*3:0*/ __VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3;
    __VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3;
    __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v4;
    __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v4 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v0;
    __VdlySet__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v0 = 0;
    IData/*31:0*/ __VdlyVal__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32;
    __VdlyVal__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32 = 0;
    CData/*4:0*/ __VdlyDim0__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32;
    __VdlyDim0__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32;
    __VdlySet__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32 = 0;
    VlWide<9>/*287:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<9>/*287:0*/ __Vtemp_19;
    // Body
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v0 = 0U;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v1 = 0U;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v2 = 0U;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v3 = 0U;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v4 = 0U;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v5 = 0U;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v6 = 0U;
    __VdlySet__top_tb__DOT__INST1__DOT__mem__v7 = 0U;
    __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0 = 0U;
    __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1 = 0U;
    __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2 = 0U;
    __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3 = 0U;
    __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v4 = 0U;
    __VdlySet__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v0 = 0U;
    __VdlySet__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32 = 0U;
    __Vdly__top_tb__DOT__INST2__DOT__MEM[0U] = vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U];
    __Vdly__top_tb__DOT__INST2__DOT__MEM[1U] = vlSelfRef.top_tb__DOT__INST2__DOT__MEM[1U];
    __Vdly__top_tb__DOT__INST2__DOT__MEM[2U] = vlSelfRef.top_tb__DOT__INST2__DOT__MEM[2U];
    __Vdly__top_tb__DOT__INST2__DOT__MEM[3U] = vlSelfRef.top_tb__DOT__INST2__DOT__MEM[3U];
    __Vdly__top_tb__DOT__INST2__DOT__MEM[4U] = vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U];
    __Vdly__top_tb__DOT__INST2__DOT__MEM[5U] = vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U];
    __Vdly__top_tb__DOT__INST2__DOT__MEM[6U] = vlSelfRef.top_tb__DOT__INST2__DOT__MEM[6U];
    __Vdly__top_tb__DOT__INST2__DOT__MEM[7U] = vlSelfRef.top_tb__DOT__INST2__DOT__MEM[7U];
    __Vdly__top_tb__DOT__INST2__DOT__MEM[8U] = vlSelfRef.top_tb__DOT__INST2__DOT__MEM[8U];
    __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter4 = vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4;
    __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3 = vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3;
    __Vdly__top_tb__DOT__INST2__DOT__mstatus = vlSelfRef.top_tb__DOT__INST2__DOT__mstatus;
    __Vdly__top_tb__DOT__INST2__DOT__mtime = vlSelfRef.top_tb__DOT__INST2__DOT__mtime;
    __Vdly__top_tb__DOT__INST2__DOT__TrapTaken = vlSelfRef.top_tb__DOT__INST2__DOT__TrapTaken;
    __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v0 = 0U;
    __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v4 = 0U;
    __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v5 = 0U;
    __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v6 = 0U;
    if (VL_UNLIKELY(((1U == ((0x00093fffU >= (0x000fffffU 
                                              & (vlSelfRef.top_tb__DOT__tohost 
                                                 >> 2U)))
                              ? vlSelfRef.top_tb__DOT__INST1__DOT__mem
                             [(0x000fffffU & (vlSelfRef.top_tb__DOT__tohost 
                                              >> 2U))]
                              : 0U))))) {
        vlSelfRef.top_tb__DOT__fd = VL_FOPEN_NN("DUT-RV32I_test.signature"s
                                                , "w"s);
        ;
        vlSelfRef.top_tb__DOT__i = vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN;
        while ((vlSelfRef.top_tb__DOT__i < vlSelfRef.top_tb__DOT__RVMODEL_DATA_END)) {
            VL_FWRITEF_NX(vlSelfRef.top_tb__DOT__fd,"%08x\n",0,
                          32,((0x00093fffU >= (0x000fffffU 
                                               & VL_DIVS_III(32, vlSelfRef.top_tb__DOT__i, (IData)(4U))))
                               ? vlSelfRef.top_tb__DOT__INST1__DOT__mem
                              [(0x000fffffU & VL_DIVS_III(32, vlSelfRef.top_tb__DOT__i, (IData)(4U)))]
                               : 0U));
            vlSelfRef.top_tb__DOT__i = ((IData)(4U) 
                                        + vlSelfRef.top_tb__DOT__i);
        }
        VL_FCLOSE_I(vlSelfRef.top_tb__DOT__fd); VL_FINISH_MT("packages/../tb/system/top_tb.sv", 92, "");
    }
    if (vlSelfRef.rst_n) {
        if ((8U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) {
            if ((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))) {
                __VdlyVal__top_tb__DOT__INST2__DOT__BHT__v0 
                    = (3U & ((IData)(1U) + vlSelfRef.top_tb__DOT__INST2__DOT__BHT
                             [(0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                              >> 0x00000015U))]));
                __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v0 
                    = (0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                      >> 0x00000015U));
                vlSelfRef.__VdlyCommitQueuetop_tb__DOT__INST2__DOT__BHT.enqueue(__VdlyVal__top_tb__DOT__INST2__DOT__BHT__v0, (IData)(__VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v0));
            } else if ((1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))) {
                __VdlyVal__top_tb__DOT__INST2__DOT__BHT__v1 
                    = (3U & (vlSelfRef.top_tb__DOT__INST2__DOT__BHT
                             [(0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                              >> 0x00000015U))] 
                             - (IData)(1U)));
                __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v1 
                    = (0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                      >> 0x00000015U));
                vlSelfRef.__VdlyCommitQueuetop_tb__DOT__INST2__DOT__BHT.enqueue(__VdlyVal__top_tb__DOT__INST2__DOT__BHT__v1, (IData)(__VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v1));
            } else if ((2U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))) {
                if ((0U < vlSelfRef.top_tb__DOT__INST2__DOT__BHT
                     [(0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                      >> 0x00000015U))])) {
                    __VdlyVal__top_tb__DOT__INST2__DOT__BHT__v2 
                        = (3U & (vlSelfRef.top_tb__DOT__INST2__DOT__BHT
                                 [(0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                  >> 0x00000015U))] 
                                 - (IData)(1U)));
                    __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v2 
                        = (0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                          >> 0x00000015U));
                    vlSelfRef.__VdlyCommitQueuetop_tb__DOT__INST2__DOT__BHT.enqueue(__VdlyVal__top_tb__DOT__INST2__DOT__BHT__v2, (IData)(__VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v2));
                }
            } else if ((3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))) {
                if (((3U > vlSelfRef.top_tb__DOT__INST2__DOT__BHT
                      [(0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                       >> 0x00000015U))]) 
                     & (1U < (3U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                    >> 7U))))) {
                    __VdlyVal__top_tb__DOT__INST2__DOT__BHT__v3 
                        = (3U & ((IData)(1U) + vlSelfRef.top_tb__DOT__INST2__DOT__BHT
                                 [(0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                  >> 0x00000015U))]));
                    __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v3 
                        = (0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                          >> 0x00000015U));
                    vlSelfRef.__VdlyCommitQueuetop_tb__DOT__INST2__DOT__BHT.enqueue(__VdlyVal__top_tb__DOT__INST2__DOT__BHT__v3, (IData)(__VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v3));
                }
            }
        }
    } else {
        vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v4 
                = (0x000000ffU & vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuetop_tb__DOT__INST2__DOT__BHT.enqueue(1U, (IData)(__VdlyDim0__top_tb__DOT__INST2__DOT__BHT__v4));
            vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk1__DOT__i);
        }
    }
    if ((1U & (IData)(vlSelfRef.top_tb__DOT__wea))) {
        vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_h67f57f0a__0 
            = (0x000000ffU & vlSelfRef.top_tb__DOT__dia);
        if ((0x00093fffU >= vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra)) {
            __VdlyVal__top_tb__DOT__INST1__DOT__mem__v0 
                = vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_h67f57f0a__0;
            __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v0 
                = vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra;
            __VdlySet__top_tb__DOT__INST1__DOT__mem__v0 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.top_tb__DOT__wea))) {
        vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_h67f57f0a__0 
            = (0x000000ffU & (vlSelfRef.top_tb__DOT__dia 
                              >> 8U));
        if ((0x00093fffU >= vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra)) {
            __VdlyVal__top_tb__DOT__INST1__DOT__mem__v1 
                = vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_h67f57f0a__0;
            __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v1 
                = vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra;
            __VdlySet__top_tb__DOT__INST1__DOT__mem__v1 = 1U;
        }
    }
    if ((4U & (IData)(vlSelfRef.top_tb__DOT__wea))) {
        vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_h67f57f0a__0 
            = (0x000000ffU & (vlSelfRef.top_tb__DOT__dia 
                              >> 0x10U));
        if ((0x00093fffU >= vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra)) {
            __VdlyVal__top_tb__DOT__INST1__DOT__mem__v2 
                = vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_h67f57f0a__0;
            __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v2 
                = vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra;
            __VdlySet__top_tb__DOT__INST1__DOT__mem__v2 = 1U;
        }
    }
    if ((8U & (IData)(vlSelfRef.top_tb__DOT__wea))) {
        vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_h67f57f0a__0 
            = (vlSelfRef.top_tb__DOT__dia >> 0x18U);
        if ((0x00093fffU >= vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra)) {
            __VdlyVal__top_tb__DOT__INST1__DOT__mem__v3 
                = vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_h67f57f0a__0;
            __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v3 
                = vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra;
            __VdlySet__top_tb__DOT__INST1__DOT__mem__v3 = 1U;
        }
    }
    if ((1U & (IData)(vlSelfRef.top_tb__DOT__web))) {
        vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_hfa028462__0 
            = (0x000000ffU & vlSelfRef.top_tb__DOT__dib);
        if ((0x00093fffU >= (0x000fffffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                            >> 0x0000000aU)))) {
            __VdlyVal__top_tb__DOT__INST1__DOT__mem__v4 
                = vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_hfa028462__0;
            __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v4 
                = (0x000fffffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                  >> 0x0000000aU));
            __VdlySet__top_tb__DOT__INST1__DOT__mem__v4 = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.top_tb__DOT__web))) {
        vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_hfa028462__0 
            = (0x000000ffU & (vlSelfRef.top_tb__DOT__dib 
                              >> 8U));
        if ((0x00093fffU >= (0x000fffffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                            >> 0x0000000aU)))) {
            __VdlyVal__top_tb__DOT__INST1__DOT__mem__v5 
                = vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_hfa028462__0;
            __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v5 
                = (0x000fffffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                  >> 0x0000000aU));
            __VdlySet__top_tb__DOT__INST1__DOT__mem__v5 = 1U;
        }
    }
    if ((4U & (IData)(vlSelfRef.top_tb__DOT__web))) {
        vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_hfa028462__0 
            = (0x000000ffU & (vlSelfRef.top_tb__DOT__dib 
                              >> 0x10U));
        if ((0x00093fffU >= (0x000fffffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                            >> 0x0000000aU)))) {
            __VdlyVal__top_tb__DOT__INST1__DOT__mem__v6 
                = vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_hfa028462__0;
            __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v6 
                = (0x000fffffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                  >> 0x0000000aU));
            __VdlySet__top_tb__DOT__INST1__DOT__mem__v6 = 1U;
        }
    }
    if ((8U & (IData)(vlSelfRef.top_tb__DOT__web))) {
        vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_hfa028462__0 
            = (vlSelfRef.top_tb__DOT__dib >> 0x18U);
        if ((0x00093fffU >= (0x000fffffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                            >> 0x0000000aU)))) {
            __VdlyVal__top_tb__DOT__INST1__DOT__mem__v7 
                = vlSelfRef.top_tb__DOT__INST1__DOT____Vlvbound_hfa028462__0;
            __VdlyDim0__top_tb__DOT__INST1__DOT__mem__v7 
                = (0x000fffffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                  >> 0x0000000aU));
            __VdlySet__top_tb__DOT__INST1__DOT__mem__v7 = 1U;
        }
    }
    if ((((0U < (0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                >> 0x00000019U))) & 
          (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
           >> 2U)) & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status)))) {
        __VdlyVal__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32 
            = vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data;
        __VdlyDim0__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32 
            = (0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                              >> 0x00000019U));
        __VdlySet__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32 = 1U;
    }
    __Vtemp_6[0U] = (IData)((((QData)((IData)((0x00007fffU 
                                               & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                  >> 6U)))) 
                              << 0x00000019U) | (QData)((IData)(
                                                                ((0x01ffe000U 
                                                                  & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                                      << 0x00000013U) 
                                                                     | (0x0007e000U 
                                                                        & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                           >> 0x0000000dU)))) 
                                                                 | ((0x00001f80U 
                                                                     & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                        >> 9U)) 
                                                                    | ((((0x0000000eU 
                                                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                             >> 0x0000000cU)) 
                                                                         | (1U 
                                                                            & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                               >> 5U))) 
                                                                        << 3U) 
                                                                       | ((4U 
                                                                           & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                              >> 2U)) 
                                                                          | ((2U 
                                                                              & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                                >> 5U)) 
                                                                             | (1U 
                                                                                & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                                >> 1U)))))))))));
    __Vtemp_6[1U] = ((vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_data_final 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          (0x00007fffU 
                                                           & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                              >> 6U)))) 
                                          << 0x00000019U) 
                                         | (QData)((IData)(
                                                           ((0x01ffe000U 
                                                             & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                                 << 0x00000013U) 
                                                                | (0x0007e000U 
                                                                   & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                      >> 0x0000000dU)))) 
                                                            | ((0x00001f80U 
                                                                & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                   >> 9U)) 
                                                               | ((((0x0000000eU 
                                                                     & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                        >> 0x0000000cU)) 
                                                                    | (1U 
                                                                       & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                          >> 5U))) 
                                                                   << 3U) 
                                                                  | ((4U 
                                                                      & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                         >> 2U)) 
                                                                     | ((2U 
                                                                         & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                            >> 5U)) 
                                                                        | (1U 
                                                                           & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                              >> 1U)))))))))) 
                                        >> 0x00000020U)));
    vlSelfRef.top_tb__DOT__doa = ((0x00093fffU >= vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra)
                                   ? vlSelfRef.top_tb__DOT__INST1__DOT__mem
                                  [vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra]
                                   : 0U);
    vlSelfRef.top_tb__DOT__dob = ((0x00093fffU >= (0x000fffffU 
                                                   & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                      >> 0x0000000aU)))
                                   ? vlSelfRef.top_tb__DOT__INST1__DOT__mem
                                  [(0x000fffffU & (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                   >> 0x0000000aU))]
                                   : 0U);
    if ((1U & (~ (IData)(vlSelfRef.rst_n)))) {
        __VdlySet__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v0 = 1U;
    }
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.top_tb__DOT__INST2__DOT__BTBwrite) {
            if (vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__victim_idx) {
                if ((1U & (IData)((vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                   [(0x0000000fU & 
                                     (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                      >> 2U))][0U] 
                                   >> 1U)))) {
                    __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0 
                        = (1U & ((IData)(1U) + (IData)(
                                                       vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                                       [
                                                       (0x0000000fU 
                                                        & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                                           >> 2U))]
                                                       [0U])));
                    __VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0 
                        = (0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                          >> 2U));
                    __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0 = 1U;
                }
                __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2 
                    = (((QData)((IData)((vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                         >> 6U))) << 0x00000023U) 
                       | (((QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_imm)) 
                           << 3U) | (QData)((IData)(
                                                    (2U 
                                                     | ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) 
                                                        << 2U))))));
                __VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2 
                    = (0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                      >> 2U));
                __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2 = 1U;
            } else {
                __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1 
                    = (((QData)((IData)((vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                         >> 6U))) << 0x00000023U) 
                       | (((QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_imm)) 
                           << 3U) | (QData)((IData)(
                                                    (2U 
                                                     | ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) 
                                                        << 2U))))));
                __VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1 
                    = (0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                      >> 2U));
                __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1 = 1U;
                if ((1U & (IData)((vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                   [(0x0000000fU & 
                                     (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                      >> 2U))][1U] 
                                   >> 1U)))) {
                    __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3 
                        = (1U & ((IData)(1U) + (IData)(
                                                       vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                                       [
                                                       (0x0000000fU 
                                                        & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                                           >> 2U))]
                                                       [1U])));
                    __VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3 
                        = (0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                          >> 2U));
                    __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3 = 1U;
                }
            }
        }
        if ((8U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) {
            vlSelfRef.top_tb__DOT__INST2__DOT__gh = 
                ((0x000000feU & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__gh) 
                                 << 1U)) | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter));
        }
        if (vlSelfRef.top_tb__DOT__INST2__DOT__MEM_Flush) {
            __Vdly__top_tb__DOT__INST2__DOT__MEM[0U] 
                = Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[0U];
            __Vdly__top_tb__DOT__INST2__DOT__MEM[1U] 
                = Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[1U];
            __Vdly__top_tb__DOT__INST2__DOT__MEM[2U] 
                = Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[2U];
            __Vdly__top_tb__DOT__INST2__DOT__MEM[3U] 
                = Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[3U];
            __Vdly__top_tb__DOT__INST2__DOT__MEM[4U] 
                = Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[4U];
            __Vdly__top_tb__DOT__INST2__DOT__MEM[5U] 
                = Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[5U];
            __Vdly__top_tb__DOT__INST2__DOT__MEM[6U] 
                = Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[6U];
            __Vdly__top_tb__DOT__INST2__DOT__MEM[7U] 
                = Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[7U];
            __Vdly__top_tb__DOT__INST2__DOT__MEM[8U] 
                = Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[8U];
        } else {
            __Vdly__top_tb__DOT__INST2__DOT__MEM[0U] 
                = __Vtemp_6[0U];
            __Vdly__top_tb__DOT__INST2__DOT__MEM[1U] 
                = __Vtemp_6[1U];
            __Vdly__top_tb__DOT__INST2__DOT__MEM[2U] 
                = ((vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_data_final 
                    >> 0x00000018U) | ((((0x00000fffU 
                                          & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                              << 6U) 
                                             | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                >> 0x0000001aU))) 
                                         == (0x00000fffU 
                                             & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                >> 0x0000000dU)))
                                         ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                         : ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[2U] 
                                             << 3U) 
                                            | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                               >> 0x0000001dU))) 
                                       << 8U));
            __Vdly__top_tb__DOT__INST2__DOT__MEM[3U] 
                = (((((0x00000fffU & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                       << 6U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                 >> 0x0000001aU))) 
                      == (0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                         >> 0x0000000dU)))
                      ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                      : ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[2U] 
                          << 3U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                    >> 0x0000001dU))) 
                    >> 0x00000018U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_data_final 
                                       << 8U));
            __Vdly__top_tb__DOT__INST2__DOT__MEM[4U] 
                = ((vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_data_final 
                    >> 0x00000018U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result 
                                       << 8U));
            __Vdly__top_tb__DOT__INST2__DOT__MEM[5U] 
                = ((vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result 
                    >> 0x00000018U) | ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] 
                                        << 0x0000000bU) 
                                       | (0x00000700U 
                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[5U] 
                                             >> 0x00000015U))));
            __Vdly__top_tb__DOT__INST2__DOT__MEM[6U] 
                = ((0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] 
                                   >> 0x00000015U)) 
                   | ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[7U] 
                       << 0x0000000bU) | (0x00000700U 
                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] 
                                             >> 0x00000015U))));
            __Vdly__top_tb__DOT__INST2__DOT__MEM[7U] 
                = ((0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[7U] 
                                   >> 0x00000015U)) 
                   | ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[8U] 
                       << 0x0000000bU) | (0x00000700U 
                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[7U] 
                                             >> 0x00000015U))));
            __Vdly__top_tb__DOT__INST2__DOT__MEM[8U] 
                = (0x000000ffU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[8U] 
                                  >> 0x00000015U));
        }
        if (((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
              >> 2U) & (0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io)))) {
            if ((0x00250000U == ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                  >> 8U)))) {
                if ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xffffffffffffff00ULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | (IData)((IData)((0x000000ffU 
                                              & vlSelfRef.top_tb__DOT__dib))));
                }
                if ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xffffffffffff00ffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((0x000000ffU 
                                               & (vlSelfRef.top_tb__DOT__dib 
                                                  >> 8U)))) 
                              << 8U));
                }
                if ((4U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xffffffffff00ffffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((0x000000ffU 
                                               & (vlSelfRef.top_tb__DOT__dib 
                                                  >> 0x10U)))) 
                              << 0x00000010U));
                }
                if ((8U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xffffffff00ffffffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((vlSelfRef.top_tb__DOT__dib 
                                               >> 0x18U))) 
                              << 0x00000018U));
                }
            } else if ((0x00250004U == ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                         << 0x00000018U) 
                                        | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                           >> 8U)))) {
                if ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xffffff00ffffffffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((0x000000ffU 
                                               & vlSelfRef.top_tb__DOT__dib))) 
                              << 0x00000020U));
                }
                if ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xffff00ffffffffffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((0x000000ffU 
                                               & (vlSelfRef.top_tb__DOT__dib 
                                                  >> 8U)))) 
                              << 0x00000028U));
                }
                if ((4U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xff00ffffffffffffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((0x000000ffU 
                                               & (vlSelfRef.top_tb__DOT__dib 
                                                  >> 0x10U)))) 
                              << 0x00000030U));
                }
                if ((8U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0x00ffffffffffffffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((vlSelfRef.top_tb__DOT__dib 
                                               >> 0x18U))) 
                              << 0x00000038U));
                }
            } else if ((0x00250008U == ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                         << 0x00000018U) 
                                        | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                           >> 8U)))) {
                if ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xffffffffffffff00ULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | (IData)((IData)((0x000000ffU 
                                              & vlSelfRef.top_tb__DOT__dib))));
                }
                if ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xffffffffffff00ffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((0x000000ffU 
                                               & (vlSelfRef.top_tb__DOT__dib 
                                                  >> 8U)))) 
                              << 8U));
                }
                if ((4U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xffffffffff00ffffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((0x000000ffU 
                                               & (vlSelfRef.top_tb__DOT__dib 
                                                  >> 0x10U)))) 
                              << 0x00000010U));
                }
                if ((8U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xffffffff00ffffffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((vlSelfRef.top_tb__DOT__dib 
                                               >> 0x18U))) 
                              << 0x00000018U));
                }
            } else if ((0x0025000cU == ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                         << 0x00000018U) 
                                        | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                           >> 8U)))) {
                if ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xffffff00ffffffffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((0x000000ffU 
                                               & vlSelfRef.top_tb__DOT__dib))) 
                              << 0x00000020U));
                }
                if ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xffff00ffffffffffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((0x000000ffU 
                                               & (vlSelfRef.top_tb__DOT__dib 
                                                  >> 8U)))) 
                              << 0x00000028U));
                }
                if ((4U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0xff00ffffffffffffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((0x000000ffU 
                                               & (vlSelfRef.top_tb__DOT__dib 
                                                  >> 0x10U)))) 
                              << 0x00000030U));
                }
                if ((8U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mtime 
                        = ((0x00ffffffffffffffULL & __Vdly__top_tb__DOT__INST2__DOT__mtime) 
                           | ((QData)((IData)((vlSelfRef.top_tb__DOT__dib 
                                               >> 0x18U))) 
                              << 0x00000038U));
                }
            }
        }
        vlSelfRef.top_tb__DOT__INST2__DOT__ID_PostFlush = 0U;
        if (vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush) {
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_BHTaddr = 0U;
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction = 0U;
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_BTBhit = 0U;
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_4 = 0U;
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_PostFlush = 1U;
        } else if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall)))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_BHTaddr 
                = vlSelfRef.top_tb__DOT__INST2__DOT__IF_BHTaddr;
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction 
                = vlSelfRef.top_tb__DOT__INST2__DOT__IF_branch_prediction;
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_BTBhit 
                = (0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit));
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_4 
                = ((IData)(4U) + vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc);
        }
        if (((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
              >> 3U) & (0x00250000U <= ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                         << 0x00000018U) 
                                        | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                           >> 8U))))) {
            if ((0x00250000U == ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                  >> 8U)))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__WB_io_data 
                    = (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mtime);
            } else if ((0x00250004U == ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                         << 0x00000018U) 
                                        | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                           >> 8U)))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__WB_io_data 
                    = (IData)((vlSelfRef.top_tb__DOT__INST2__DOT__mtime 
                               >> 0x20U));
            } else if ((0x00250008U == ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                         << 0x00000018U) 
                                        | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                           >> 8U)))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__WB_io_data 
                    = (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mtimecmp);
            } else if ((0x0025000cU == ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                         << 0x00000018U) 
                                        | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                           >> 8U)))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__WB_io_data 
                    = (IData)((vlSelfRef.top_tb__DOT__INST2__DOT__mtimecmp 
                               >> 0x20U));
            } else if ((0x00250100U == ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                         << 0x00000018U) 
                                        | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                           >> 8U)))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__WB_io_data 
                    = vlSelfRef.top_tb__DOT__led;
            }
        }
        if ((2U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
            if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                          >> 0x00000018U)))) {
                if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                              >> 0x00000017U)))) {
                    if ((0x00400000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                        if ((0x00200000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                            if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                          >> 0x00000014U)))) {
                                if ((0x00080000U & 
                                     vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                    if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                  >> 0x00000012U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x00000011U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                     >> 0x00000010U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                         >> 0x0000000fU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                             >> 0x0000000eU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                                 >> 0x0000000dU)))) {
                                                            vlSelfRef.top_tb__DOT__INST2__DOT__mscratch 
                                                                = vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                              >> 0x00000013U)))) {
                                    if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                  >> 0x00000012U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x00000011U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                     >> 0x00000010U)))) {
                                                if (
                                                    (0x00008000U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                    if (
                                                        (0x00004000U 
                                                         & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                                 >> 0x0000000dU)))) {
                                                            vlSelfRef.top_tb__DOT__INST2__DOT__mcounteren 
                                                                = vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data;
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                             >> 0x0000000eU)))) {
                                                        if (
                                                            (0x00002000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                            vlSelfRef.top_tb__DOT__INST2__DOT__mtvec 
                                                                = vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                         >> 0x0000000fU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                             >> 0x0000000eU)))) {
                                                        if (
                                                            (0x00002000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                            vlSelfRef.top_tb__DOT__INST2__DOT__misa 
                                                                = 
                                                                ((0xfc00001fU 
                                                                  & vlSelfRef.top_tb__DOT__INST2__DOT__misa) 
                                                                 | (0x03ffffe0U 
                                                                    & vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data));
                                                            vlSelfRef.top_tb__DOT__INST2__DOT__misa 
                                                                = 
                                                                ((0xfffffff0U 
                                                                  & vlSelfRef.top_tb__DOT__INST2__DOT__misa) 
                                                                 | (0x0000000fU 
                                                                    & vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        __VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v4 = 1U;
        vlSelfRef.top_tb__DOT__INST2__DOT__gh = 0U;
        __Vdly__top_tb__DOT__INST2__DOT__MEM[0U] = 
            Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[0U];
        __Vdly__top_tb__DOT__INST2__DOT__MEM[1U] = 
            Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[1U];
        __Vdly__top_tb__DOT__INST2__DOT__MEM[2U] = 
            Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[2U];
        __Vdly__top_tb__DOT__INST2__DOT__MEM[3U] = 
            Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[3U];
        __Vdly__top_tb__DOT__INST2__DOT__MEM[4U] = 
            Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[4U];
        __Vdly__top_tb__DOT__INST2__DOT__MEM[5U] = 
            Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[5U];
        __Vdly__top_tb__DOT__INST2__DOT__MEM[6U] = 
            Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[6U];
        __Vdly__top_tb__DOT__INST2__DOT__MEM[7U] = 
            Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[7U];
        __Vdly__top_tb__DOT__INST2__DOT__MEM[8U] = 
            Vtop_tb__ConstPool__CONST_h2a0d1dfa_0[8U];
        vlSelfRef.top_tb__DOT__INST2__DOT__ID_BHTaddr = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__ID_BTBhit = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_4 = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__ID_PostFlush = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__mscratch = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__mcounteren = 0x0000001fU;
        vlSelfRef.top_tb__DOT__INST2__DOT__misa = 0xc0000400U;
        vlSelfRef.top_tb__DOT__INST2__DOT__mtvec = 0U;
    }
    vlSelfRef.__VdlyCommitQueuetop_tb__DOT__INST2__DOT__BHT.commit(vlSelfRef.top_tb__DOT__INST2__DOT__BHT);
    if (vlSelfRef.rst_n) {
        __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v0 
            = ((8U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status_n))
                ? (0x0000003fU & vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n
                   [3U]) : 0U);
        __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v0 = 1U;
        __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v1 
            = ((4U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status_n))
                ? vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n
               [2U] : vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
               [3U]);
        __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v2 
            = ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status_n))
                ? vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n
               [1U] : vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
               [2U]);
        __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v3 
            = ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status_n))
                ? vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n
               [0U] : vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
               [1U]);
        if ((2U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
            if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                          >> 0x00000018U)))) {
                if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                              >> 0x00000017U)))) {
                    if ((0x00400000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                        if ((0x00200000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                            if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                          >> 0x00000014U)))) {
                                if ((0x00080000U & 
                                     vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                    if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                  >> 0x00000012U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x00000011U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                     >> 0x00000010U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                         >> 0x0000000fU)))) {
                                                    if (
                                                        (0x00004000U 
                                                         & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                        if (
                                                            (0x00002000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                            vlSelfRef.top_tb__DOT__INST2__DOT__mtval 
                                                                = vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data;
                                                        } else {
                                                            vlSelfRef.top_tb__DOT__INST2__DOT__mcause 
                                                                = vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data;
                                                        }
                                                    } else if (
                                                               (0x00002000U 
                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                        vlSelfRef.top_tb__DOT__INST2__DOT__mepc 
                                                            = vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__mepc 
                = ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[7U] 
                    << 0x0000001dU) | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[6U] 
                                       >> 3U));
            vlSelfRef.top_tb__DOT__INST2__DOT__mcause 
                = vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                [0U];
            __Vdly__top_tb__DOT__INST2__DOT__TrapTaken = 1U;
            vlSelfRef.top_tb__DOT__INST2__DOT__mtval 
                = ((0x00000020U & vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                    [0U]) ? 0U : ((0x00000010U & vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                                   [0U]) ? 0U : ((8U 
                                                  & vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                                                  [0U])
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                                                   [0U])
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                                                    [0U])
                                                    ? 0U
                                                    : 
                                                   ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[4U] 
                                                     << 0x0000001dU) 
                                                    | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                                       >> 3U)))
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                                                    [0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                                                     [0U])
                                                     ? 
                                                    ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[7U] 
                                                      << 0x0000001dU) 
                                                     | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[6U] 
                                                        >> 3U))
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                                                     [0U])
                                                     ? 0U
                                                     : 
                                                    ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[4U] 
                                                      << 0x0000001dU) 
                                                     | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                                        >> 3U))))))));
        }
        if (((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status)) 
             & (vlSelfRef.top_tb__DOT__INST2__DOT__mip 
                >> 7U))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__mepc 
                = ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[7U] 
                    << 0x0000001dU) | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[6U] 
                                       >> 3U));
            vlSelfRef.top_tb__DOT__INST2__DOT__mcause 
                = vlSelfRef.top_tb__DOT__INST2__DOT__interrupt_code;
            __Vdly__top_tb__DOT__INST2__DOT__TrapTaken = 1U;
        }
        if (vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush) {
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall)))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                = vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc;
        }
        if (((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
              >> 2U) & (0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io)))) {
            if ((0x00250000U != ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                  << 0x00000018U) | 
                                 (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                  >> 8U)))) {
                if ((0x00250004U != ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                        >> 8U)))) {
                    if ((0x00250008U != ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                            >> 8U)))) {
                        if ((0x0025000cU != ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                              << 0x00000018U) 
                                             | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                >> 8U)))) {
                            if ((0x00250100U == ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                    >> 8U)))) {
                                if ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                                    vlSelfRef.top_tb__DOT__led 
                                        = ((0xff00U 
                                            & (IData)(vlSelfRef.top_tb__DOT__led)) 
                                           | (0x000000ffU 
                                              & vlSelfRef.top_tb__DOT__dib));
                                }
                                if ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__web_io))) {
                                    vlSelfRef.top_tb__DOT__led 
                                        = ((0x00ffU 
                                            & (IData)(vlSelfRef.top_tb__DOT__led)) 
                                           | (0x0000ff00U 
                                              & vlSelfRef.top_tb__DOT__dib));
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_status 
            = vlSelfRef.top_tb__DOT__INST2__DOT__exception_status_n;
        if ((1U & (~ vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__mcycle 
                = (1ULL + vlSelfRef.top_tb__DOT__INST2__DOT__mcycle);
        }
        if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit 
                      >> 1U)))) {
            __Vdly__top_tb__DOT__INST2__DOT__mtime 
                = (1ULL + vlSelfRef.top_tb__DOT__INST2__DOT__mtime);
        }
        if (((0U != (7U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                           >> 7U))) & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit 
                                          >> 2U)))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__minstret 
                = (1ULL + vlSelfRef.top_tb__DOT__INST2__DOT__minstret);
        }
        if ((8U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) {
            if (((2U == vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent4) 
                 & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit 
                       >> 4U)))) {
                __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter4 
                    = (1ULL + vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4);
            }
            if (((2U == vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent3) 
                 & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit 
                       >> 3U)))) {
                __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3 
                    = (1ULL + vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3);
            }
            if (((2U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status)) 
                 | (3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status)))) {
                if (((1U == vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent3) 
                     & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit 
                           >> 3U)))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3 
                        = (1ULL + vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3);
                }
                if (((1U == vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent4) 
                     & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit 
                           >> 4U)))) {
                    __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter4 
                        = (1ULL + vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4);
                }
            }
        }
        if ((2U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
            if ((0x01000000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                              >> 0x00000017U)))) {
                    if ((0x00400000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                        if ((0x00200000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                            if ((0x00100000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                              >> 0x00000013U)))) {
                                    if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                  >> 0x00000012U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x00000011U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                     >> 0x00000010U)))) {
                                                if (
                                                    (0x00008000U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                             >> 0x0000000eU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                                 >> 0x0000000dU)))) {
                                                            __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3 
                                                                = 
                                                                ((0x00000000ffffffffULL 
                                                                  & __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3) 
                                                                 | ((QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data)) 
                                                                    << 0x00000020U));
                                                        }
                                                    }
                                                } else if (
                                                           (0x00004000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                    if (
                                                        (0x00002000U 
                                                         & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                        __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3 
                                                            = 
                                                            ((0x00000000ffffffffULL 
                                                              & __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3) 
                                                             | ((QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data)) 
                                                                << 0x00000020U));
                                                    } else {
                                                        vlSelfRef.top_tb__DOT__INST2__DOT__minstret 
                                                            = 
                                                            ((0x00000000ffffffffULL 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__minstret) 
                                                             | ((QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data)) 
                                                                << 0x00000020U));
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                                >> 0x0000000dU)))) {
                                                    vlSelfRef.top_tb__DOT__INST2__DOT__mcycle 
                                                        = 
                                                        ((0x00000000ffffffffULL 
                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__mcycle) 
                                                         | ((QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data)) 
                                                            << 0x00000020U));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                 >> 0x00000013U)))) {
                                if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                              >> 0x00000012U)))) {
                                    if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                  >> 0x00000011U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x00000010U)))) {
                                            if ((0x00008000U 
                                                 & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                         >> 0x0000000eU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                             >> 0x0000000dU)))) {
                                                        __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter4 
                                                            = 
                                                            ((0xffffffff00000000ULL 
                                                              & __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter4) 
                                                             | (IData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data)));
                                                    }
                                                }
                                            } else if (
                                                       (0x00004000U 
                                                        & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                if (
                                                    (0x00002000U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                    __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3 
                                                        = 
                                                        ((0xffffffff00000000ULL 
                                                          & __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3) 
                                                         | (IData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data)));
                                                } else {
                                                    vlSelfRef.top_tb__DOT__INST2__DOT__minstret 
                                                        = 
                                                        ((0xffffffff00000000ULL 
                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__minstret) 
                                                         | (IData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data)));
                                                }
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                            >> 0x0000000dU)))) {
                                                vlSelfRef.top_tb__DOT__INST2__DOT__mcycle 
                                                    = 
                                                    ((0xffffffff00000000ULL 
                                                      & vlSelfRef.top_tb__DOT__INST2__DOT__mcycle) 
                                                     | (IData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                 >> 0x00000017U)))) {
                if ((0x00400000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                    if ((0x00200000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                        if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                      >> 0x00000014U)))) {
                            if ((0x00080000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                              >> 0x00000012U)))) {
                                    if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                  >> 0x00000011U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x00000010U)))) {
                                            if ((0x00008000U 
                                                 & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                         >> 0x0000000eU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                             >> 0x0000000dU)))) {
                                                        vlSelfRef.top_tb__DOT__INST2__DOT__mip 
                                                            = 
                                                            ((0xffffff7fU 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__mip) 
                                                             | (0x00000080U 
                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                 >> 0x00000012U)))) {
                                if ((0x00020000U & 
                                     vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                    if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                  >> 0x00000010U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x0000000fU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                     >> 0x0000000eU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                         >> 0x0000000dU)))) {
                                                    __Vdly__top_tb__DOT__INST2__DOT__mstatus 
                                                        = 
                                                        ((0xfffffbffffffffffULL 
                                                          & __Vdly__top_tb__DOT__INST2__DOT__mstatus) 
                                                         | ((QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data 
                                                                                >> 0x0aU)))) 
                                                            << 0x0000002aU));
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                   >> 0x00000010U)))) {
                                    if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                  >> 0x0000000fU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x0000000eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                     >> 0x0000000dU)))) {
                                                __Vdly__top_tb__DOT__INST2__DOT__mstatus 
                                                    = 
                                                    ((0xffffffffffffe7ffULL 
                                                      & __Vdly__top_tb__DOT__INST2__DOT__mstatus) 
                                                     | ((QData)((IData)(
                                                                        (3U 
                                                                         & (vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data 
                                                                            >> 0x0bU)))) 
                                                        << 0x0000000bU));
                                                __Vdly__top_tb__DOT__INST2__DOT__mstatus 
                                                    = 
                                                    ((0xffffffffffffff7fULL 
                                                      & __Vdly__top_tb__DOT__INST2__DOT__mstatus) 
                                                     | ((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data 
                                                                            >> 7U)))) 
                                                        << 7U));
                                                __Vdly__top_tb__DOT__INST2__DOT__mstatus 
                                                    = 
                                                    ((0xfffffffffffffff7ULL 
                                                      & __Vdly__top_tb__DOT__INST2__DOT__mstatus) 
                                                     | ((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data 
                                                                            >> 3U)))) 
                                                        << 3U));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((IData)((vlSelfRef.top_tb__DOT__INST2__DOT__mstatus 
                      >> 0x2aU)) & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__TrapTaken))) {
            __Vdly__top_tb__DOT__INST2__DOT__mstatus 
                = (0x0000000000001800ULL | __Vdly__top_tb__DOT__INST2__DOT__mstatus);
            __Vdly__top_tb__DOT__INST2__DOT__mstatus 
                = ((0xffffffffffffff7fULL & __Vdly__top_tb__DOT__INST2__DOT__mstatus) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlSelfRef.top_tb__DOT__INST2__DOT__mstatus 
                                                     >> 3U))))) 
                      << 7U));
            vlSelfRef.top_tb__DOT__INST2__DOT__critical_error = 1U;
            __Vdly__top_tb__DOT__INST2__DOT__mstatus 
                = (0xfffffffffffffff7ULL & __Vdly__top_tb__DOT__INST2__DOT__mstatus);
        }
        if ((IData)(((4U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc)) 
                     & (0x30000000U == (0xfe007000U 
                                        & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))) {
            __Vdly__top_tb__DOT__INST2__DOT__mstatus 
                = ((0xfffffffffffffff7ULL & __Vdly__top_tb__DOT__INST2__DOT__mstatus) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlSelfRef.top_tb__DOT__INST2__DOT__mstatus 
                                                     >> 7U))))) 
                      << 3U));
            __Vdly__top_tb__DOT__INST2__DOT__mstatus 
                = (0x0000000000001800ULL | __Vdly__top_tb__DOT__INST2__DOT__mstatus);
        }
        if ((1U & (IData)((vlSelfRef.top_tb__DOT__INST2__DOT__mstatus 
                           >> 3U)))) {
            if ((0x00000080U & vlSelfRef.top_tb__DOT__INST2__DOT__mie)) {
                if ((vlSelfRef.top_tb__DOT__INST2__DOT__mtime 
                     >= vlSelfRef.top_tb__DOT__INST2__DOT__mtimecmp)) {
                    vlSelfRef.top_tb__DOT__INST2__DOT__interrupt_code = 7U;
                } else if ((0xffffffffffffffffULL == vlSelfRef.top_tb__DOT__INST2__DOT__mtime)) {
                    vlSelfRef.top_tb__DOT__INST2__DOT__interrupt_code = 0x0dU;
                }
                vlSelfRef.top_tb__DOT__INST2__DOT__mip 
                    = (0x00000080U | vlSelfRef.top_tb__DOT__INST2__DOT__mip);
            }
        }
    } else {
        __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v4 = 1U;
        vlSelfRef.top_tb__DOT__INST2__DOT__mepc = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__mcause = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__mtval = 0U;
        __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v5 = 1U;
        __Vdly__top_tb__DOT__INST2__DOT__TrapTaken = 0U;
        __VdlySet__top_tb__DOT__INST2__DOT__exception_code__v6 = 1U;
        vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc = 0U;
        vlSelfRef.top_tb__DOT__led = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_status = 0U;
        __Vdly__top_tb__DOT__INST2__DOT__mstatus = 0x0000000000001800ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__mip = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__mcycle = 0ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__minstret = 0ULL;
        __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3 = 0ULL;
        __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter4 = 0ULL;
        __Vdly__top_tb__DOT__INST2__DOT__mtime = 0ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__critical_error = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.rst_n)))) {
        vlSelfRef.top_tb__DOT__INST2__DOT__mtimecmp = 0xffffffffffffffffULL;
    }
    if (__VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0) {
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[__VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0][0U] 
            = ((0x1ffffffffffffffeULL & vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                [__VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0]
                [0U]) | (IData)((IData)(__VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v0)));
    }
    if (__VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1) {
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[__VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1][0U] 
            = __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v1;
    }
    if (__VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2) {
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[__VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2][1U] 
            = __VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v2;
    }
    if (__VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3) {
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[__VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3][1U] 
            = ((0x1ffffffffffffffeULL & vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                [__VdlyDim1__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3]
                [1U]) | (IData)((IData)(__VdlyVal__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v3)));
    }
    if (__VdlySet__top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer__v4) {
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0U][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0U][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[1U][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[1U][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[2U][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[2U][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[3U][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[3U][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[4U][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[4U][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[5U][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[5U][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[6U][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[6U][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[7U][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[7U][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[8U][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[8U][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[9U][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[9U][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0x0aU][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0x0aU][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0x0bU][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0x0bU][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0x0cU][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0x0cU][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0x0dU][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0x0dU][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0x0eU][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0x0eU][1U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0x0fU][0U] = 4ULL;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[0x0fU][1U] = 4ULL;
    }
    if (__VdlySet__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v0) {
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[1U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[2U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[3U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[4U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[5U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[6U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[7U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[8U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[9U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x0aU] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x0bU] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x0cU] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x0dU] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x0eU] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x0fU] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x10U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x11U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x12U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x13U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x14U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x15U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x16U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x17U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x18U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x19U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x1aU] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x1bU] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x1cU] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x1dU] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x1eU] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0x1fU] = 0U;
    }
    if (__VdlySet__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32) {
        vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[__VdlyDim0__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32] 
            = __VdlyVal__top_tb__DOT__INST2__DOT__INST3__DOT__reg_file__v32;
    }
    if (__VdlySet__top_tb__DOT__INST1__DOT__mem__v0) {
        vlSelfRef.top_tb__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.top_tb__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v0]) 
               | (IData)(__VdlyVal__top_tb__DOT__INST1__DOT__mem__v0));
    }
    if (__VdlySet__top_tb__DOT__INST1__DOT__mem__v1) {
        vlSelfRef.top_tb__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.top_tb__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__top_tb__DOT__INST1__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__top_tb__DOT__INST1__DOT__mem__v2) {
        vlSelfRef.top_tb__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.top_tb__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__top_tb__DOT__INST1__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__top_tb__DOT__INST1__DOT__mem__v3) {
        vlSelfRef.top_tb__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.top_tb__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__top_tb__DOT__INST1__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__top_tb__DOT__INST1__DOT__mem__v4) {
        vlSelfRef.top_tb__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v4] 
            = ((0xffffff00U & vlSelfRef.top_tb__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v4]) 
               | (IData)(__VdlyVal__top_tb__DOT__INST1__DOT__mem__v4));
    }
    if (__VdlySet__top_tb__DOT__INST1__DOT__mem__v5) {
        vlSelfRef.top_tb__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v5] 
            = ((0xffff00ffU & vlSelfRef.top_tb__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v5]) 
               | ((IData)(__VdlyVal__top_tb__DOT__INST1__DOT__mem__v5) 
                  << 8U));
    }
    if (__VdlySet__top_tb__DOT__INST1__DOT__mem__v6) {
        vlSelfRef.top_tb__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v6] 
            = ((0xff00ffffU & vlSelfRef.top_tb__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v6]) 
               | ((IData)(__VdlyVal__top_tb__DOT__INST1__DOT__mem__v6) 
                  << 0x00000010U));
    }
    if (__VdlySet__top_tb__DOT__INST1__DOT__mem__v7) {
        vlSelfRef.top_tb__DOT__INST1__DOT__mem[__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v7] 
            = ((0x00ffffffU & vlSelfRef.top_tb__DOT__INST1__DOT__mem
                [__VdlyDim0__top_tb__DOT__INST1__DOT__mem__v7]) 
               | ((IData)(__VdlyVal__top_tb__DOT__INST1__DOT__mem__v7) 
                  << 0x00000018U));
    }
    if (__VdlySet__top_tb__DOT__INST2__DOT__exception_code__v0) {
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[3U] 
            = __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v0;
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[2U] 
            = __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v1;
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[1U] 
            = __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v2;
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[0U] 
            = __VdlyVal__top_tb__DOT__INST2__DOT__exception_code__v3;
    }
    if (__VdlySet__top_tb__DOT__INST2__DOT__exception_code__v4) {
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[0U] = 0U;
    }
    if (__VdlySet__top_tb__DOT__INST2__DOT__exception_code__v5) {
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[1U] = 0U;
    }
    if (__VdlySet__top_tb__DOT__INST2__DOT__exception_code__v6) {
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[2U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[3U] = 0U;
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__TrapTaken = __Vdly__top_tb__DOT__INST2__DOT__TrapTaken;
    vlSelfRef.top_tb__DOT__INST2__DOT__mtime = __Vdly__top_tb__DOT__INST2__DOT__mtime;
    vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4 
        = __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter4;
    vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3 
        = __Vdly__top_tb__DOT__INST2__DOT__mhpmcounter3;
    vlSelfRef.top_tb__DOT__INST2__DOT__mstatus = __Vdly__top_tb__DOT__INST2__DOT__mstatus;
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
        = ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_PostFlush)
            ? 0U : vlSelfRef.top_tb__DOT__doa);
    vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines[0U] 
        = vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
        [(0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                         >> 2U))][0U];
    vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines[1U] 
        = vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
        [(0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                         >> 2U))][1U];
    vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid 
        = ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid)) 
           | (1U & (IData)((vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                            [(0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                             >> 2U))]
                            [0U] >> 1U))));
    vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid 
        = ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid)) 
           | (2U & ((IData)((vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                             [(0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                              >> 2U))]
                             [1U] >> 1U)) << 1U)));
    top_tb__DOT__INST2__DOT__INST4__DOT__opcode = (0x0000007fU 
                                                   & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction);
    top_tb__DOT__INST2__DOT__INST4__DOT__funct3 = (7U 
                                                   & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                      >> 0x0cU));
    if ((0x00000040U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
        if ((0x00000020U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
            if ((0x00000010U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
            } else if ((8U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                if ((4U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                    if ((2U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                        if ((1U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 
                                = ((0x00080000U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                   >> 0x0000000cU)) 
                                   | ((0x0007f800U 
                                       & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                          >> 1U)) | 
                                      ((0x00000400U 
                                        & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                           >> 0x0000000aU)) 
                                       | (0x000003ffU 
                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                             >> 0x15U)))));
                        } else {
                            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                        }
                    } else {
                        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else if ((4U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                if ((2U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                    if ((1U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 
                            = (0x00000fffU & (((0x13U 
                                                == (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode)) 
                                               & ((1U 
                                                   == (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__funct3)) 
                                                  | (5U 
                                                     == (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__funct3))))
                                               ? (0x0000001fU 
                                                  & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                     >> 0x14U))
                                               : (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                  >> 0x14U)));
                        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                    } else {
                        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else if ((2U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                if ((1U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 
                        = ((((2U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                    >> 0x0000001eU)) 
                             | (1U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                      >> 7U))) << 0x0000000aU) 
                           | ((0x000003f0U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                              >> 0x00000015U)) 
                              | (0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                >> 8U))));
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                } else {
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
        }
    } else if ((0x00000020U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
        if ((0x00000010U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
            if ((8U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
            } else if ((4U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                if ((2U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                    if ((1U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 
                            = (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                               >> 0x0cU);
                    } else {
                        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else if ((2U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                if ((1U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                } else {
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
            }
        } else if ((8U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
        } else if ((4U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
        } else if ((2U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
            if ((1U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 
                    = ((0x00000fe0U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                       >> 0x00000014U)) 
                       | (0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                         >> 7U)));
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
            } else {
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
        }
    } else if ((0x00000010U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
        if ((8U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
        } else if ((4U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
            if ((2U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                if ((1U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 
                        = (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                           >> 0x0cU);
                } else {
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
            }
        } else if ((2U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
            if ((1U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 
                    = (0x00000fffU & (((0x13U == (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode)) 
                                       & ((1U == (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__funct3)) 
                                          | (5U == (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__funct3))))
                                       ? (0x0000001fU 
                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                             >> 0x14U))
                                       : (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                          >> 0x14U)));
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
            } else {
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
        }
    } else if ((8U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
        if ((4U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
            if ((2U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                if ((1U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 
                        = (0x00000fffU & (((0x13U == (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode)) 
                                           & ((1U == (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__funct3)) 
                                              | (5U 
                                                 == (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__funct3))))
                                           ? (0x0000001fU 
                                              & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                 >> 0x14U))
                                           : (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                              >> 0x14U)));
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                } else {
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
                vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
        }
    } else if ((4U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
    } else if ((2U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
        if ((1U & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 
                = (0x00000fffU & (((0x13U == (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode)) 
                                   & ((1U == (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__funct3)) 
                                      | (5U == (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__funct3))))
                                   ? (0x0000001fU & 
                                      (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                       >> 0x14U)) : 
                                  (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                   >> 0x14U)));
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
        } else {
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
            vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
        }
    } else {
        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = 0U;
    }
    top_tb__DOT__INST2__DOT__INST4__DOT__imm1 = (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1) 
                                                                 >> 0x0bU)))) 
                                                  << 0x0000000cU) 
                                                 | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1));
    top_tb__DOT__INST2__DOT__INST4__DOT__imm2 = (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 
                                                                 >> 0x13U)))) 
                                                  << 0x00000015U) 
                                                 | (vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 
                                                    << 1U));
    top_tb__DOT__INST2__DOT__INST4__DOT__imm3 = (vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 
                                                 << 0x0000000cU);
    top_tb__DOT__INST2__DOT__INST4__DOT__imm4 = (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1) 
                                                                 >> 0x0bU)))) 
                                                  << 0x0000000dU) 
                                                 | ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1) 
                                                    << 1U));
    top_tb__DOT__INST2__DOT__ID_imm = ((0x00000040U 
                                        & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                        ? ((0x00000020U 
                                            & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                            ? ((0x00000010U 
                                                & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                ? top_tb__DOT__INST2__DOT__INST4__DOT__imm1
                                                : (
                                                   (8U 
                                                    & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                       ? top_tb__DOT__INST2__DOT__INST4__DOT__imm2
                                                       : top_tb__DOT__INST2__DOT__INST4__DOT__imm1)
                                                      : top_tb__DOT__INST2__DOT__INST4__DOT__imm1)
                                                     : top_tb__DOT__INST2__DOT__INST4__DOT__imm1)
                                                    : 
                                                   ((4U 
                                                     & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                     ? top_tb__DOT__INST2__DOT__INST4__DOT__imm1
                                                     : 
                                                    ((2U 
                                                      & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                       ? top_tb__DOT__INST2__DOT__INST4__DOT__imm4
                                                       : top_tb__DOT__INST2__DOT__INST4__DOT__imm1)
                                                      : top_tb__DOT__INST2__DOT__INST4__DOT__imm1))))
                                            : top_tb__DOT__INST2__DOT__INST4__DOT__imm1)
                                        : ((0x00000010U 
                                            & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                            ? ((8U 
                                                & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                ? top_tb__DOT__INST2__DOT__INST4__DOT__imm1
                                                : (
                                                   (4U 
                                                    & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                      ? top_tb__DOT__INST2__DOT__INST4__DOT__imm3
                                                      : top_tb__DOT__INST2__DOT__INST4__DOT__imm1)
                                                     : top_tb__DOT__INST2__DOT__INST4__DOT__imm1)
                                                    : top_tb__DOT__INST2__DOT__INST4__DOT__imm1))
                                            : top_tb__DOT__INST2__DOT__INST4__DOT__imm1));
    __Vtableidx1 = (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_PostFlush) 
                     << 7U) | (0x0000007fU & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction));
    top_tb__DOT__INST2__DOT__ID_ALUOp = Vtop_tb__ConstPool__TABLE_h7e943254_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc = 
        Vtop_tb__ConstPool__TABLE_h95f43f75_0[__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_ALUSrc = Vtop_tb__ConstPool__TABLE_ha9daee0e_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_RegWrite = Vtop_tb__ConstPool__TABLE_hde757d44_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_MemRead = Vtop_tb__ConstPool__TABLE_h05aa568c_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_MemWrite = Vtop_tb__ConstPool__TABLE_h47e2d5d3_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch = 
        Vtop_tb__ConstPool__TABLE_h4971ab44_0[__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_Jump = Vtop_tb__ConstPool__TABLE_h93fb0f0f_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_Valid = Vtop_tb__ConstPool__TABLE_ha648006e_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_ValidReg = Vtop_tb__ConstPool__TABLE_hcdbe96f9_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_CSR = Vtop_tb__ConstPool__TABLE_h64d7ce41_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_imm = 
        (top_tb__DOT__INST2__DOT__ID_imm + vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc);
    __Vtableidx2 = ((((0x0000000eU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                      >> 0x0000000bU)) 
                      | (1U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                               >> 0x0000001eU))) << 3U) 
                    | ((4U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                              >> 3U)) | (IData)(top_tb__DOT__INST2__DOT__ID_ALUOp)));
    top_tb__DOT__INST2__DOT__ID_field = Vtop_tb__ConstPool__TABLE_hdb653689_0
        [__Vtableidx2];
    vlSelfRef.top_tb__DOT__INST2__DOT__BTBwrite = ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) 
                                                   | (IData)(top_tb__DOT__INST2__DOT__ID_Jump));
    if (vlSelfRef.rst_n) {
        if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall)))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                = vlSelfRef.top_tb__DOT__INST2__DOT__next_pc;
        }
    } else {
        vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc = 0U;
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__IF_BHTaddr = 
        (0x000000ffU & ((vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                         >> 2U) ^ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__gh)));
    vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines[0U] 
        = vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
        [(0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                         >> 2U))][0U];
    vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines[1U] 
        = vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
        [(0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                         >> 2U))][1U];
    vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit 
        = ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit)) 
           | (((0x03ffffffU & (IData)((vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                       [(0x0000000fU 
                                         & (vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                                            >> 2U))]
                                       [0U] >> 0x00000023U))) 
               == (vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                   >> 6U)) & (IData)((vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                      [(0x0000000fU 
                                        & (vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                                           >> 2U))]
                                      [0U] >> 1U))));
    vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit 
        = ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit)) 
           | ((((0x03ffffffU & (IData)((vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                        [(0x0000000fU 
                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                                             >> 2U))]
                                        [1U] >> 0x00000023U))) 
                == (vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                    >> 6U)) & (IData)((vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                       [(0x0000000fU 
                                         & (vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                                            >> 2U))]
                                       [1U] >> 1U))) 
              << 1U));
    top_tb__DOT__INST2__DOT__INST1__DOT__way_found = 0U;
    vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__victim_idx = 0U;
    if (vlSelfRef.rst_n) {
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] = 
            vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[0U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] = 
            vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[1U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[2U] = 
            vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[2U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[3U] = 
            vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[3U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[4U] = 
            vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[4U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[5U] = 
            vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[5U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] = 
            vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[6U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[7U] = 
            vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[7U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[8U] = 
            vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[8U];
        if ((2U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
            if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                          >> 0x00000018U)))) {
                if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                              >> 0x00000017U)))) {
                    if ((0x00400000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                        if ((0x00200000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                            if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                          >> 0x00000014U)))) {
                                if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                              >> 0x00000013U)))) {
                                    if ((0x00040000U 
                                         & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x00000011U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                     >> 0x00000010U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                         >> 0x0000000fU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                             >> 0x0000000eU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                                 >> 0x0000000dU)))) {
                                                            vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit 
                                                                = vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data;
                                                        }
                                                    }
                                                    if (
                                                        (0x00004000U 
                                                         & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                        if (
                                                            (0x00002000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                            vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent3 
                                                                = vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data;
                                                        }
                                                    }
                                                }
                                                if (
                                                    (0x00008000U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                             >> 0x0000000eU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                                 >> 0x0000000dU)))) {
                                                            vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent4 
                                                                = vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                  >> 0x00000012U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x00000011U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                     >> 0x00000010U)))) {
                                                if (
                                                    (0x00008000U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                             >> 0x0000000eU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                                 >> 0x0000000dU)))) {
                                                            vlSelfRef.top_tb__DOT__INST2__DOT__mie 
                                                                = 
                                                                ((0xffffff7fU 
                                                                  & vlSelfRef.top_tb__DOT__INST2__DOT__mie) 
                                                                 | (0x00000080U 
                                                                    & vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] = 
            Vtop_tb__ConstPool__CONST_h11ab053c_0[0U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] = 
            Vtop_tb__ConstPool__CONST_h11ab053c_0[1U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[2U] = 
            Vtop_tb__ConstPool__CONST_h11ab053c_0[2U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[3U] = 
            Vtop_tb__ConstPool__CONST_h11ab053c_0[3U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[4U] = 
            Vtop_tb__ConstPool__CONST_h11ab053c_0[4U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[5U] = 
            Vtop_tb__ConstPool__CONST_h11ab053c_0[5U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] = 
            Vtop_tb__ConstPool__CONST_h11ab053c_0[6U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[7U] = 
            Vtop_tb__ConstPool__CONST_h11ab053c_0[7U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX[8U] = 
            Vtop_tb__ConstPool__CONST_h11ab053c_0[8U];
        vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit = 0xffffffe0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent4 = 2U;
        vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent3 = 1U;
        vlSelfRef.top_tb__DOT__INST2__DOT__mie = 0x00000080U;
    }
    if (vlSelfRef.top_tb__DOT__INST2__DOT__BTBwrite) {
        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 2U, vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i)) {
                if ((3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid))) {
                    if ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines
                                      [(1U & vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i)]))) {
                        vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__victim_idx 
                            = (1U & vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i);
                        goto __Vlabel0;
                    }
                } else if ((1U & ((~ ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid) 
                                      >> (1U & vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i))) 
                                  & (~ (IData)(top_tb__DOT__INST2__DOT__INST1__DOT__way_found))))) {
                    vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__victim_idx 
                        = (1U & vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i);
                    top_tb__DOT__INST2__DOT__INST1__DOT__way_found = 1U;
                }
                vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i 
                    = ((IData)(1U) + vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i);
            }
            __Vlabel0: ;
        }
    }
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.top_tb__DOT__INST2__DOT__MEM_Flush) {
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                = Vtop_tb__ConstPool__CONST_hd5724acc_0[0U];
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] 
                = Vtop_tb__ConstPool__CONST_hd5724acc_0[1U];
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                = Vtop_tb__ConstPool__CONST_hd5724acc_0[2U];
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                = Vtop_tb__ConstPool__CONST_hd5724acc_0[3U];
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[4U] 
                = Vtop_tb__ConstPool__CONST_hd5724acc_0[4U];
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[5U] 
                = Vtop_tb__ConstPool__CONST_hd5724acc_0[5U];
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[6U] 
                = Vtop_tb__ConstPool__CONST_hd5724acc_0[6U];
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[7U] 
                = Vtop_tb__ConstPool__CONST_hd5724acc_0[7U];
        } else {
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                = ((((0xf8000000U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[1U] 
                                     << 0x00000018U)) 
                     | (0x07ffffffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                       >> 3U))) << 3U) 
                   | ((6U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                             << 1U)) | (0x00250000U 
                                        <= ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                             << 0x00000018U) 
                                            | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                               >> 8U)))));
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] 
                = ((((0xf8000000U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[1U] 
                                     << 0x00000018U)) 
                     | (0x07ffffffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                       >> 3U))) >> 0x0000001dU) 
                   | ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[2U] 
                       << 0x0000001bU) | (0x07fffff8U 
                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[1U] 
                                             >> 5U))));
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                = ((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[2U] 
                          >> 5U)) | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM_csr_value_final 
                                     << 3U));
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                = ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM_csr_value_final 
                    >> 0x0000001dU) | ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                        << 0x0000001bU) 
                                       | (0x07fffff8U 
                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                             >> 5U))));
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[4U] 
                = ((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                          >> 5U)) | ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[6U] 
                                      << 0x0000001bU) 
                                     | (0x07fffff8U 
                                        & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                           >> 5U))));
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[5U] 
                = ((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[6U] 
                          >> 5U)) | ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[7U] 
                                      << 0x0000001bU) 
                                     | (0x07fffff8U 
                                        & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[6U] 
                                           >> 5U))));
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[6U] 
                = ((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[7U] 
                          >> 5U)) | ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[8U] 
                                      << 0x0000001bU) 
                                     | (0x07fffff8U 
                                        & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[7U] 
                                           >> 5U))));
            vlSelfRef.top_tb__DOT__INST2__DOT__WB[7U] 
                = (7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[8U] 
                         >> 5U));
        }
    } else {
        vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] = 
            Vtop_tb__ConstPool__CONST_hd5724acc_0[0U];
        vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] = 
            Vtop_tb__ConstPool__CONST_hd5724acc_0[1U];
        vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] = 
            Vtop_tb__ConstPool__CONST_hd5724acc_0[2U];
        vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] = 
            Vtop_tb__ConstPool__CONST_hd5724acc_0[3U];
        vlSelfRef.top_tb__DOT__INST2__DOT__WB[4U] = 
            Vtop_tb__ConstPool__CONST_hd5724acc_0[4U];
        vlSelfRef.top_tb__DOT__INST2__DOT__WB[5U] = 
            Vtop_tb__ConstPool__CONST_hd5724acc_0[5U];
        vlSelfRef.top_tb__DOT__INST2__DOT__WB[6U] = 
            Vtop_tb__ConstPool__CONST_hd5724acc_0[6U];
        vlSelfRef.top_tb__DOT__INST2__DOT__WB[7U] = 
            Vtop_tb__ConstPool__CONST_hd5724acc_0[7U];
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall = 0U;
    if ((((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
           >> 5U) | vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U]) 
         & (0U != (0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                  >> 6U))))) {
        if ((((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                              >> 6U)) == (0x0000001fU 
                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                             >> 0x0000000fU))) 
             & ((IData)(top_tb__DOT__INST2__DOT__ID_ValidReg) 
                >> 1U))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall = 1U;
        }
        if ((((~ (IData)(top_tb__DOT__INST2__DOT__ID_MemWrite)) 
              & ((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                 >> 6U)) == (0x0000001fU 
                                             & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                >> 0x00000014U)))) 
             & ((IData)(top_tb__DOT__INST2__DOT__ID_ValidReg) 
                >> 2U))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall = 1U;
        }
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__IF_branch_prediction 
        = vlSelfRef.top_tb__DOT__INST2__DOT__BHT[vlSelfRef.top_tb__DOT__INST2__DOT__IF_BHTaddr];
    top_tb__DOT__INST2__DOT__IF_Branch = 0U;
    top_tb__DOT__INST2__DOT__IF_Jump = 0U;
    if ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit))) {
        top_tb__DOT__INST2__DOT__IF_Branch = (1U & (IData)(
                                                           (vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines
                                                            [0U] 
                                                            >> 2U)));
        top_tb__DOT__INST2__DOT__IF_Jump = (1U & (~ (IData)(
                                                            (vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines
                                                             [0U] 
                                                             >> 2U))));
        top_tb__DOT__INST2__DOT__IF_pc_imm = 0U;
        top_tb__DOT__INST2__DOT__IF_pc_imm = (IData)(
                                                     (vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines
                                                      [0U] 
                                                      >> 3U));
    } else {
        top_tb__DOT__INST2__DOT__IF_pc_imm = 0U;
    }
    if ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit))) {
        top_tb__DOT__INST2__DOT__IF_Branch = (1U & (IData)(
                                                           (vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines
                                                            [1U] 
                                                            >> 2U)));
        top_tb__DOT__INST2__DOT__IF_Jump = (1U & (~ (IData)(
                                                            (vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines
                                                             [1U] 
                                                             >> 2U))));
        top_tb__DOT__INST2__DOT__IF_pc_imm = (IData)(
                                                     (vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines
                                                      [1U] 
                                                      >> 3U));
    }
    vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra 
        = (0x000fffffU & (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall)
                            ? vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc
                            : vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc) 
                          >> 2U));
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM_Flush = 
        (1U & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status) 
               | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__critical_error)));
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] = __Vdly__top_tb__DOT__INST2__DOT__MEM[0U];
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM[1U] = __Vdly__top_tb__DOT__INST2__DOT__MEM[1U];
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM[2U] = __Vdly__top_tb__DOT__INST2__DOT__MEM[2U];
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM[3U] = __Vdly__top_tb__DOT__INST2__DOT__MEM[3U];
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] = __Vdly__top_tb__DOT__INST2__DOT__MEM[4U];
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] = __Vdly__top_tb__DOT__INST2__DOT__MEM[5U];
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM[6U] = __Vdly__top_tb__DOT__INST2__DOT__MEM[6U];
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM[7U] = __Vdly__top_tb__DOT__INST2__DOT__MEM[7U];
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM[8U] = __Vdly__top_tb__DOT__INST2__DOT__MEM[8U];
    vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[0U] 
        = ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_Flush)
            ? 0U : (0x0000003fU & vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                    [1U]));
    top_tb__DOT__INST2__DOT__web_final = 0U;
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd 
        = (((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                            >> 0x00000010U)) == (0x0000001fU 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                    >> 0x00000019U))) 
           & (IData)(((0x00000080U == (0x00000088U 
                                       & vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U])) 
                      & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                         >> 0x00000011U))));
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd 
        = (((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                            >> 0x0000000bU)) == (0x0000001fU 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                    >> 0x00000019U))) 
           & (IData)(((0x00000080U == (0x00000088U 
                                       & vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U])) 
                      & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                         >> 0x00000012U))));
    top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd 
        = (((0x0000001fU & ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[1U] 
                             << 2U) | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                       >> 0x0000001eU))) 
            == (0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                               >> 0x00000019U))) & 
           ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
             >> 1U) | (IData)(((0x00000204U == (0x00000204U 
                                                & vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U])) 
                               & (0x00000088U == (0x00000088U 
                                                  & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U]))))));
    __VdfgRegularize_h6e95ff9d_0_4 = ((0x00000fffU 
                                       & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                          >> 0x0000000dU)) 
                                      == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                          >> 0x00000014U));
    vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data 
        = ((2U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
            ? ((0x00001000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                ? ((0x00000800U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                    ? ((0x00000400U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                        ? ((~ (0x0000001fU & ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] 
                                               << 2U) 
                                              | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                 >> 0x0000001eU)))) 
                           & ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                               << 0x0000001dU) | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                                                  >> 3U)))
                        : (((vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                             << 0x0000001dU) | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                                                >> 3U)) 
                           | (0x0000001fU & ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] 
                                              << 2U) 
                                             | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                >> 0x0000001eU)))))
                    : ((0x00000400U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                        ? (0x0000001fU & ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] 
                                           << 2U) | 
                                          (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                           >> 0x0000001eU)))
                        : 0U)) : ((0x00000800U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                                   ? ((0x00000400U 
                                       & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                                       ? ((~ ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                                               << 0x0000001dU) 
                                              | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] 
                                                 >> 3U))) 
                                          & ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                              << 0x0000001dU) 
                                             | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                                                >> 3U)))
                                       : (((vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                            << 0x0000001dU) 
                                           | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                                              >> 3U)) 
                                          | ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                                              << 0x0000001dU) 
                                             | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] 
                                                >> 3U))))
                                   : ((0x00000400U 
                                       & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                                       ? ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                                           << 0x0000001dU) 
                                          | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] 
                                             >> 3U))
                                       : 0U))) : 0U);
    top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word 
        = VL_SHIFTR_III(32,32,32, ((1U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                                    ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_io_data
                                    : vlSelfRef.top_tb__DOT__dob), 
                        VL_SHIFTL_III(32,32,32, (3U 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                                    >> 3U)), 3U));
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd 
        = (((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                            >> 0x00000010U)) == (0x0000001fU 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x00000019U))) 
           & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
               >> 0x00000011U) & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                  >> 7U)));
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd 
        = (((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                            >> 0x0000000bU)) == (0x0000001fU 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x00000019U))) 
           & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
               >> 0x00000012U) & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                  >> 7U)));
    if ((1U & ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                >> 2U) & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status))))) {
        top_tb__DOT__INST2__DOT__web_final = (0x0000000fU 
                                              & ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                      >> 0x0000000aU)))
                                                  ? 
                                                 ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                      >> 8U)))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                       >> 0x0000000aU)))
                                                   ? 
                                                  ((IData)(3U) 
                                                   << 
                                                   (3U 
                                                    & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                       >> 8U)))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                        >> 0x0000000aU)))
                                                    ? 0x0fU
                                                    : 0U))));
    }
    if ((0x00250000U <= ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                          << 0x00000018U) | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                             >> 8U)))) {
        vlSelfRef.top_tb__DOT__web = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__web_io = top_tb__DOT__INST2__DOT__web_final;
    } else {
        vlSelfRef.top_tb__DOT__web = top_tb__DOT__INST2__DOT__web_final;
        vlSelfRef.top_tb__DOT__INST2__DOT__web_io = 0U;
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM_csr_value_final 
        = (((0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                            >> 0x0000000dU)) == (0x00000fffU 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x0000000dU)))
            ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
            : ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[3U] 
                << 0x00000018U) | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[2U] 
                                   >> 8U)));
    top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_result 
        = ((0x00001000U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
            ? ((0x00000800U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                ? 0U : ((0x00000400U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                         ? (0x0000ffffU & top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word)
                         : (0x000000ffU & top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word)))
            : ((0x00000800U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                ? ((0x00000400U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                    ? 0U : top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word)
                : ((0x00000400U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                    ? (((- (IData)((1U & (top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word 
                                          >> 0x0000000fU)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word))
                    : (((- (IData)((1U & (top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word 
                                          >> 7U)))) 
                        << 8U) | (0x000000ffU & top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word)))));
    vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data 
        = ((0U == (7U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                         >> 4U))) ? ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[4U] 
                                      << 0x0000001dU) 
                                     | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                        >> 3U)) : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                        >> 4U)))
                                                    ? top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_result
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                         >> 4U)))
                                                     ? 
                                                    ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[5U] 
                                                      << 0x0000001dU) 
                                                     | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[4U] 
                                                        >> 3U))
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                          >> 4U)))
                                                      ? 
                                                     ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[6U] 
                                                       << 0x0000001dU) 
                                                      | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[5U] 
                                                         >> 3U))
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                           >> 4U)))
                                                       ? 
                                                      ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                                        << 0x0000001dU) 
                                                       | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                                                          >> 3U))
                                                       : 0U)))));
    top_tb__DOT__INST2__DOT__MEM_rs2_data_final = (
                                                   ((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd) 
                                                    & (0U 
                                                       != 
                                                       (0x0000001fU 
                                                        & ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[1U] 
                                                            << 2U) 
                                                           | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                              >> 0x0000001eU)))))
                                                    ? 
                                                   ((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd)
                                                     ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                                                     : 0U)
                                                    : 
                                                   ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                     << 0x00000018U) 
                                                    | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[3U] 
                                                       >> 8U)));
    top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data 
        = ((0U == (7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                         >> 4U))) ? ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                      << 0x00000018U) 
                                     | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                        >> 8U)) : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                        >> 4U)))
                                                    ? 
                                                   ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[6U] 
                                                     << 0x00000018U) 
                                                    | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                                       >> 8U))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                         >> 4U)))
                                                     ? 
                                                    ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[7U] 
                                                      << 0x00000018U) 
                                                     | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[6U] 
                                                        >> 8U))
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                          >> 4U)))
                                                      ? 
                                                     ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[3U] 
                                                       << 0x00000018U) 
                                                      | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[2U] 
                                                         >> 8U))
                                                      : 0U))));
    top_tb__DOT__INST2__DOT__EX_rs1_fwd_data = ((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd)
                                                 ? top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data
                                                 : 0U);
    if (top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd) {
        top_tb__DOT__INST2__DOT__EX_rs1_fwd_data = 
            ((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd)
              ? (((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                  >> 0x00000019U)) 
                  != (0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                     >> 0x00000019U)))
                  ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                  : top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data)
              : vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data);
    }
    top_tb__DOT__INST2__DOT__EX_rs2_fwd_data = ((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd)
                                                 ? top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data
                                                 : 0U);
    if (top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd) {
        top_tb__DOT__INST2__DOT__EX_rs2_fwd_data = 
            ((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd)
              ? (((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                  >> 0x00000019U)) 
                  != (0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                     >> 0x00000019U)))
                  ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                  : top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data)
              : vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data);
    }
    vlSelfRef.top_tb__DOT__dib = 0U;
    if ((1U & ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                >> 2U) & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status))))) {
        vlSelfRef.top_tb__DOT__dib = ((0U == (7U & 
                                              (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                               >> 0x0000000aU)))
                                       ? (((~ ((IData)(0x000000ffU) 
                                               << (0x0000001fU 
                                                   & VL_SHIFTL_III(5,32,32, 
                                                                   (3U 
                                                                    & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                                       >> 8U)), 3U)))) 
                                           & vlSelfRef.top_tb__DOT__dib) 
                                          | (0x00000000ffffffffULL 
                                             & ((0x000000ffU 
                                                 & top_tb__DOT__INST2__DOT__MEM_rs2_data_final) 
                                                << 
                                                (0x0000001fU 
                                                 & VL_SHIFTL_III(5,32,32, 
                                                                 (3U 
                                                                  & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                                     >> 8U)), 3U)))))
                                       : ((1U == (7U 
                                                  & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                     >> 0x0000000aU)))
                                           ? (((~ ((IData)(0x0000ffffU) 
                                                   << 
                                                   (0x0000001fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (3U 
                                                                     & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                                        >> 8U)), 3U)))) 
                                               & vlSelfRef.top_tb__DOT__dib) 
                                              | (0x00000000ffffffffULL 
                                                 & ((0x0000ffffU 
                                                     & top_tb__DOT__INST2__DOT__MEM_rs2_data_final) 
                                                    << 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (3U 
                                                                      & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                                         >> 8U)), 3U)))))
                                           : ((2U == 
                                               (7U 
                                                & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                   >> 0x0000000aU)))
                                               ? top_tb__DOT__INST2__DOT__MEM_rs2_data_final
                                               : 0U)));
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_data_final 
        = ((((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd) 
             | (IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd)) 
            & (0U != (0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                     >> 0x00000010U))))
            ? top_tb__DOT__INST2__DOT__EX_rs1_fwd_data
            : ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[5U] 
                << 3U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[4U] 
                          >> 0x0000001dU)));
    vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_data_final 
        = ((((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd) 
             | (IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd)) 
            & (0U != (0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                     >> 0x0000000bU))))
            ? top_tb__DOT__INST2__DOT__EX_rs2_fwd_data
            : ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[4U] 
                << 3U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[3U] 
                          >> 0x0000001dU)));
    top_tb__DOT__INST2__DOT__EX_op1 = ((IData)((0x00000a40U 
                                                == 
                                                (0x0000fe40U 
                                                 & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])))
                                        ? 0U : vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_data_final);
    top_tb__DOT__INST2__DOT__EX_op2 = ((0U == (3U & 
                                               (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                >> 9U)))
                                        ? vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_data_final
                                        : ((1U == (3U 
                                                   & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                      >> 9U)))
                                            ? ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[3U] 
                                                << 3U) 
                                               | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[2U] 
                                                  >> 0x0000001dU))
                                            : ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[2U] 
                                                << 3U) 
                                               | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                  >> 0x0000001dU))));
    top_tb__DOT__INST2__DOT__EX_carry = 0U;
    if ((0x02000000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) {
        if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                      >> 0x00000018U)))) {
            if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                          >> 0x00000017U)))) {
                if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                              >> 0x00000016U)))) {
                    top_tb__DOT__INST2__DOT__EX_carry 
                        = (1U & (IData)((1ULL & (((QData)((IData)(top_tb__DOT__INST2__DOT__EX_op1)) 
                                                  - (QData)((IData)(top_tb__DOT__INST2__DOT__EX_op2))) 
                                                 >> 0x00000020U))));
                }
            }
        }
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result 
            = ((0x01000000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                ? ((0x00800000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                    ? 0U : ((0x00400000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                             ? VL_SHIFTRS_III(32,32,5, top_tb__DOT__INST2__DOT__EX_op1, 
                                              (0x0000001fU 
                                               & top_tb__DOT__INST2__DOT__EX_op2))
                             : 0U)) : ((0x00800000U 
                                        & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                                        ? 0U : ((0x00400000U 
                                                 & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                                                 ? 0U
                                                 : 
                                                (top_tb__DOT__INST2__DOT__EX_op1 
                                                 - top_tb__DOT__INST2__DOT__EX_op2))));
    } else {
        if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                      >> 0x00000018U)))) {
            if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                          >> 0x00000017U)))) {
                if ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                              >> 0x00000016U)))) {
                    top_tb__DOT__INST2__DOT__EX_carry 
                        = (1U & (IData)((1ULL & (((QData)((IData)(top_tb__DOT__INST2__DOT__EX_op1)) 
                                                  + (QData)((IData)(top_tb__DOT__INST2__DOT__EX_op2))) 
                                                 >> 0x00000020U))));
                }
            }
        }
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result 
            = ((0x01000000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                ? ((0x00800000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                    ? ((0x00400000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                        ? (top_tb__DOT__INST2__DOT__EX_op1 
                           & top_tb__DOT__INST2__DOT__EX_op2)
                        : (top_tb__DOT__INST2__DOT__EX_op1 
                           | top_tb__DOT__INST2__DOT__EX_op2))
                    : ((0x00400000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                        ? (top_tb__DOT__INST2__DOT__EX_op1 
                           >> (0x0000001fU & top_tb__DOT__INST2__DOT__EX_op2))
                        : (top_tb__DOT__INST2__DOT__EX_op1 
                           ^ top_tb__DOT__INST2__DOT__EX_op2)))
                : ((0x00800000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                    ? ((0x00400000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                        ? (top_tb__DOT__INST2__DOT__EX_op1 
                           < top_tb__DOT__INST2__DOT__EX_op2)
                        : VL_LTS_III(32, top_tb__DOT__INST2__DOT__EX_op1, top_tb__DOT__INST2__DOT__EX_op2))
                    : ((0x00400000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                        ? (top_tb__DOT__INST2__DOT__EX_op1 
                           << (0x0000001fU & top_tb__DOT__INST2__DOT__EX_op2))
                        : (top_tb__DOT__INST2__DOT__EX_op1 
                           + top_tb__DOT__INST2__DOT__EX_op2))));
    }
    __VdfgRegularize_h6e95ff9d_0_2 = ((IData)(((0x00080000U 
                                                == 
                                                (0x00180000U 
                                                 & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) 
                                               & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)) 
                                      | (IData)(((0x00100000U 
                                                  == 
                                                  (0x00180000U 
                                                   & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)))));
    top_tb__DOT__INST2__DOT__EX_overflow = (((top_tb__DOT__INST2__DOT__EX_op1 
                                              >> 0x0000001fU) 
                                             != (top_tb__DOT__INST2__DOT__EX_op2 
                                                 >> 0x0000001fU)) 
                                            & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result 
                                                >> 0x0000001fU) 
                                               != (top_tb__DOT__INST2__DOT__EX_op1 
                                                   >> 0x0000001fU)));
    vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter = 0U;
    vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status = 0U;
    if ((8U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) {
        vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter 
            = (1U & ((0x00200000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                      ? ((0x00100000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                          ? ((0x00080000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                              ? (~ (IData)(top_tb__DOT__INST2__DOT__EX_carry))
                              : (IData)(top_tb__DOT__INST2__DOT__EX_carry))
                          : ((0x00080000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                              ? (~ (VL_GTS_III(32, 0U, vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result) 
                                    ^ (IData)(top_tb__DOT__INST2__DOT__EX_overflow)))
                              : (VL_GTS_III(32, 0U, vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result) 
                                 ^ (IData)(top_tb__DOT__INST2__DOT__EX_overflow))))
                      : ((1U & (~ (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                   >> 0x00000014U))) 
                         && ((0x00080000U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                              ? (0U != vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)
                              : (0U == vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)))));
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status 
            = ((((0U == (3U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                               >> 7U))) | (1U == (3U 
                                                  & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                     >> 7U)))) 
                & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter))
                ? 0U : ((((2U == (3U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                        >> 7U))) | 
                          (3U == (3U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                        >> 7U)))) & 
                         (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter)))
                         ? 1U : ((((0U == (3U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                 >> 7U))) 
                                   | (1U == (3U & (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                   >> 7U)))) 
                                  & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter)))
                                  ? 2U : ((((2U == 
                                             (3U & 
                                              (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                               >> 7U))) 
                                            | (3U == 
                                               (3U 
                                                & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                   >> 7U)))) 
                                           & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter))
                                           ? 3U : 0U))));
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = (1U 
                                                   & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status) 
                                                      | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__critical_error)));
    vlSelfRef.top_tb__DOT__INST2__DOT__next_pc = ((IData)(4U) 
                                                  + vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc);
    if (vlSelfRef.top_tb__DOT__INST2__DOT__critical_error) {
        vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
            = vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc;
    } else if ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status))) {
        vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
            = vlSelfRef.top_tb__DOT__INST2__DOT__mtvec;
    } else if ((IData)(((4U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc)) 
                        & (0x30000000U == (0xfe007000U 
                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))) {
        vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
            = vlSelfRef.top_tb__DOT__INST2__DOT__mepc;
    } else {
        if ((0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit))) {
            if (top_tb__DOT__INST2__DOT__IF_Branch) {
                if (((2U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__IF_branch_prediction)) 
                     | (3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__IF_branch_prediction)))) {
                    vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
                        = top_tb__DOT__INST2__DOT__IF_pc_imm;
                }
            } else if (top_tb__DOT__INST2__DOT__IF_Jump) {
                vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
                    = top_tb__DOT__INST2__DOT__IF_pc_imm;
            }
        }
        if ((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) 
              | (IData)(top_tb__DOT__INST2__DOT__ID_Jump)) 
             & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BTBhit)))) {
            if (vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) {
                if (((2U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction)) 
                     | (3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction)))) {
                    vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
                        = vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_imm;
                }
            } else if (((IData)(top_tb__DOT__INST2__DOT__ID_Jump) 
                        & (0U == (IData)(top_tb__DOT__INST2__DOT__ID_ALUSrc)))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
                    = vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_imm;
            }
        }
        if ((8U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) {
            if ((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
                    = ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] 
                        << 3U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[5U] 
                                  >> 0x0000001dU));
            } else if ((1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
                    = ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[7U] 
                        << 3U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] 
                                  >> 0x0000001dU));
            }
        } else if (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                     >> 2U) & (0U != (3U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                            >> 9U))))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
                = (0xfffffffeU & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result);
        }
    }
    top_tb__DOT__INST2__DOT__EX_Flush = (1U & (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status) 
                                                | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__critical_error)) 
                                               | (IData)(
                                                         ((4U 
                                                           == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc)) 
                                                          & (0x00500000U 
                                                             == 
                                                             (0x01f07000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))));
    if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__critical_error)))) {
        if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status)))) {
            if ((1U & (~ (IData)(((4U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc)) 
                                  & (0x30000000U == 
                                     (0xfe007000U & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))))) {
                if ((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) 
                      | (IData)(top_tb__DOT__INST2__DOT__ID_Jump)) 
                     & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BTBhit)))) {
                    if (vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) {
                        if (((2U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction)) 
                             | (3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction)))) {
                            vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
                        }
                    } else if (((IData)(top_tb__DOT__INST2__DOT__ID_Jump) 
                                & (0U == (IData)(top_tb__DOT__INST2__DOT__ID_ALUSrc)))) {
                        vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
                    }
                }
                if ((8U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) {
                    if ((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))) {
                        vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
                        top_tb__DOT__INST2__DOT__EX_Flush = 1U;
                    } else if ((1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))) {
                        vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
                    }
                } else if (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                             >> 2U) & (0U != (3U & 
                                              (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                               >> 9U))))) {
                    vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
                    top_tb__DOT__INST2__DOT__EX_Flush = 1U;
                }
            }
        }
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[2U] 
        = ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush)
            ? 0U : ((IData)(top_tb__DOT__INST2__DOT__ID_Valid)
                     ? (((IData)(((4U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc)) 
                                  & (0U == (0x00007000U 
                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)))) 
                         & ((0U == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                    >> 0x00000014U)) 
                            | (1U == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                      >> 0x00000014U))))
                         ? ((1U == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                    >> 0x00000014U))
                             ? 3U : 0x0bU) : vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                        [3U]) : 2U));
    vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[3U] 
        = ((0x00200000U <= vlSelfRef.top_tb__DOT__INST2__DOT__next_pc)
            ? 1U : 0U);
    if (((IData)(top_tb__DOT__INST2__DOT__EX_Flush) 
         | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall))) {
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[1U] = 0U;
        __VdfgRegularize_h6e95ff9d_0_1 = 1U;
    } else {
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[1U] 
            = (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                 >> 5U) & ((IData)(((0x00080000U == 
                                     (0x00180000U & 
                                      vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) 
                                    & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)) 
                           | (IData)(((0x00100000U 
                                       == (0x00180000U 
                                           & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) 
                                      & (0U != (3U 
                                                & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result))))))
                ? 4U : (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                          >> 5U) & (0x00250000U <= vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result))
                         ? 5U : (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                   >> 4U) & ((IData)(
                                                     ((0x00080000U 
                                                       == 
                                                       (0x00180000U 
                                                        & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) 
                                                      & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)) 
                                             | (IData)(
                                                       ((0x00100000U 
                                                         == 
                                                         (0x00180000U 
                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) 
                                                        & (0U 
                                                           != 
                                                           (3U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result))))))
                                  ? 6U : (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                            >> 4U) 
                                           & (0x00250000U 
                                              <= vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result))
                                           ? 7U : (
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__next_pc))
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                                                   [2U])))));
        __VdfgRegularize_h6e95ff9d_0_1 = 0U;
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__exception_status_n 
        = ((((0x00200000U <= vlSelfRef.top_tb__DOT__INST2__DOT__next_pc) 
             << 3U) | (4U & (((~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush)) 
                              & ((~ (IData)(top_tb__DOT__INST2__DOT__ID_Valid)) 
                                 | (((4U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc)) 
                                     & (IData)(((0U 
                                                 == 
                                                 (0x00007000U 
                                                  & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)) 
                                                & ((0U 
                                                    == 
                                                    (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                     >> 0x00000014U)) 
                                                   | (1U 
                                                      == 
                                                      (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                       >> 0x00000014U)))))) 
                                    | ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status) 
                                       >> 3U)))) << 2U))) 
           | ((2U & (((~ (IData)(__VdfgRegularize_h6e95ff9d_0_1)) 
                      & (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                           >> 5U) & (IData)(__VdfgRegularize_h6e95ff9d_0_2)) 
                         | (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                              >> 5U) & (0x00250000U 
                                        <= vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)) 
                            | (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                 >> 4U) & (IData)(__VdfgRegularize_h6e95ff9d_0_2)) 
                               | (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                    >> 4U) & (0x00250000U 
                                              <= vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)) 
                                  | ((0U != (3U & vlSelfRef.top_tb__DOT__INST2__DOT__next_pc)) 
                                     | ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status) 
                                        >> 2U))))))) 
                     << 1U)) | (1U & ((~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_Flush)) 
                                      & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status) 
                                         >> 1U)))));
    __Vtemp_18[0U] = (IData)((((QData)((IData)(((0x003e0000U 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                    >> 3U)) 
                                                | ((0x0001f000U 
                                                    & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                       << 5U)) 
                                                   | (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                      >> 0x00000014U))))) 
                               << 0x0000001aU) | (QData)((IData)(
                                                                 ((((((IData)(top_tb__DOT__INST2__DOT__ID_field) 
                                                                      << 9U) 
                                                                     | (0x000001c0U 
                                                                        & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                                           >> 6U))) 
                                                                    | (((IData)(top_tb__DOT__INST2__DOT__ID_ValidReg) 
                                                                        << 3U) 
                                                                       | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc))) 
                                                                   << 0x0000000dU) 
                                                                  | ((((((IData)(top_tb__DOT__INST2__DOT__ID_ALUOp) 
                                                                         << 5U) 
                                                                        | ((IData)(top_tb__DOT__INST2__DOT__ID_ALUSrc) 
                                                                           << 3U)) 
                                                                       | (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction) 
                                                                           << 1U) 
                                                                          | (IData)(top_tb__DOT__INST2__DOT__ID_RegWrite))) 
                                                                      << 6U) 
                                                                     | ((((IData)(top_tb__DOT__INST2__DOT__ID_MemRead) 
                                                                          << 5U) 
                                                                         | (((IData)(top_tb__DOT__INST2__DOT__ID_MemWrite) 
                                                                             << 4U) 
                                                                            | ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) 
                                                                               << 3U))) 
                                                                        | (((IData)(top_tb__DOT__INST2__DOT__ID_Jump) 
                                                                            << 2U) 
                                                                           | ((((IData)(top_tb__DOT__INST2__DOT__ID_CSR) 
                                                                                & (IData)(
                                                                                (0x00002000U 
                                                                                != 
                                                                                (0x000fa000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)))) 
                                                                               << 1U) 
                                                                              | (IData)(top_tb__DOT__INST2__DOT__ID_CSR))))))))));
    __Vtemp_18[1U] = (((IData)((((QData)((IData)((((IData)(top_tb__DOT__INST2__DOT__ID_CSR) 
                                                   & (IData)(
                                                             (0x00001000U 
                                                              != 
                                                              (0x00003f80U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))
                                                   ? 
                                                  ((vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                    >> 0x0000001fU)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                     ? 0U
                                                     : 
                                                    ((0x20000000U 
                                                      & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                      ? 
                                                     ((0x10000000U 
                                                       & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                       ? 
                                                      ((0x08000000U 
                                                        & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                        ? 
                                                       ((0x04000000U 
                                                         & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                         ? 0U
                                                         : 
                                                        ((0x02000000U 
                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                          ? 0U
                                                          : 
                                                         ((0x01000000U 
                                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                           ? 0U
                                                           : 
                                                          ((0x00800000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x00400000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(
                                                                          (vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4 
                                                                           >> 0x00000020U)))))
                                                             : 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(
                                                                          (vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3 
                                                                           >> 0x00000020U)))
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(
                                                                          (vlSelfRef.top_tb__DOT__INST2__DOT__minstret 
                                                                           >> 0x00000020U))))
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(
                                                                          (vlSelfRef.top_tb__DOT__INST2__DOT__mcycle 
                                                                           >> 0x00000020U))))))))))
                                                        : 
                                                       ((0x04000000U 
                                                         & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                         ? 0U
                                                         : 
                                                        ((0x02000000U 
                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                          ? 0U
                                                          : 
                                                         ((0x01000000U 
                                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                           ? 0U
                                                           : 
                                                          ((0x00800000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x00400000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4))))
                                                             : 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3))
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__minstret)))
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mcycle))))))))))
                                                       : 0U)
                                                      : 0U))
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                     ? 0U
                                                     : 
                                                    ((0x20000000U 
                                                      & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                      ? 
                                                     ((0x10000000U 
                                                       & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                       ? 
                                                      ((0x08000000U 
                                                        & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                        ? 0U
                                                        : 
                                                       ((0x04000000U 
                                                         & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                         ? 
                                                        ((0x02000000U 
                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                          ? 0U
                                                          : 
                                                         ((0x01000000U 
                                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                           ? 0U
                                                           : 
                                                          ((0x00800000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x00400000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mip)))
                                                             : 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mtval)
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mcause))
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mepc)
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mscratch)))))))
                                                         : 
                                                        ((0x02000000U 
                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                          ? 
                                                         ((0x01000000U 
                                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                           ? 0U
                                                           : 
                                                          ((0x00800000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x00400000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent4)))
                                                             : 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent3)
                                                               : 0U)
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit))))))
                                                          : 
                                                         ((0x01000000U 
                                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                           ? 
                                                          ((0x00800000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x00400000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 0U
                                                             : 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(
                                                                          (vlSelfRef.top_tb__DOT__INST2__DOT__mstatus 
                                                                           >> 0x00000020U)))))))
                                                           : 
                                                          ((0x00800000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x00400000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mcounteren))
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mtvec)
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mie)))
                                                             : 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__misa)
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mstatus))))))))))
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U))) 
                                 << 0x0000000dU) | (QData)((IData)(
                                                                   (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BHTaddr) 
                                                                     << 5U) 
                                                                    | (0x0000001fU 
                                                                       & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                                          >> 0x0000000fU))))))) 
                       << 0x00000010U) | (IData)(((
                                                   ((QData)((IData)(
                                                                    ((0x003e0000U 
                                                                      & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                                         >> 3U)) 
                                                                     | ((0x0001f000U 
                                                                         & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                                            << 5U)) 
                                                                        | (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                                           >> 0x00000014U))))) 
                                                    << 0x0000001aU) 
                                                   | (QData)((IData)(
                                                                     ((((((IData)(top_tb__DOT__INST2__DOT__ID_field) 
                                                                          << 9U) 
                                                                         | (0x000001c0U 
                                                                            & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                                               >> 6U))) 
                                                                        | (((IData)(top_tb__DOT__INST2__DOT__ID_ValidReg) 
                                                                            << 3U) 
                                                                           | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc))) 
                                                                       << 0x0000000dU) 
                                                                      | ((((((IData)(top_tb__DOT__INST2__DOT__ID_ALUOp) 
                                                                             << 5U) 
                                                                            | ((IData)(top_tb__DOT__INST2__DOT__ID_ALUSrc) 
                                                                               << 3U)) 
                                                                           | (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction) 
                                                                               << 1U) 
                                                                              | (IData)(top_tb__DOT__INST2__DOT__ID_RegWrite))) 
                                                                          << 6U) 
                                                                         | ((((IData)(top_tb__DOT__INST2__DOT__ID_MemRead) 
                                                                              << 5U) 
                                                                             | (((IData)(top_tb__DOT__INST2__DOT__ID_MemWrite) 
                                                                                << 4U) 
                                                                                | ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) 
                                                                                << 3U))) 
                                                                            | (((IData)(top_tb__DOT__INST2__DOT__ID_Jump) 
                                                                                << 2U) 
                                                                               | ((((IData)(top_tb__DOT__INST2__DOT__ID_CSR) 
                                                                                & (IData)(
                                                                                (0x00002000U 
                                                                                != 
                                                                                (0x000fa000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)))) 
                                                                                << 1U) 
                                                                                | (IData)(top_tb__DOT__INST2__DOT__ID_CSR))))))))) 
                                                  >> 0x00000020U)));
    __Vtemp_18[2U] = (((IData)((((QData)((IData)((((IData)(top_tb__DOT__INST2__DOT__ID_CSR) 
                                                   & (IData)(
                                                             (0x00001000U 
                                                              != 
                                                              (0x00003f80U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))
                                                   ? 
                                                  ((vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                    >> 0x0000001fU)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                     ? 0U
                                                     : 
                                                    ((0x20000000U 
                                                      & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                      ? 
                                                     ((0x10000000U 
                                                       & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                       ? 
                                                      ((0x08000000U 
                                                        & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                        ? 
                                                       ((0x04000000U 
                                                         & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                         ? 0U
                                                         : 
                                                        ((0x02000000U 
                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                          ? 0U
                                                          : 
                                                         ((0x01000000U 
                                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                           ? 0U
                                                           : 
                                                          ((0x00800000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x00400000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(
                                                                          (vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4 
                                                                           >> 0x00000020U)))))
                                                             : 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(
                                                                          (vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3 
                                                                           >> 0x00000020U)))
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(
                                                                          (vlSelfRef.top_tb__DOT__INST2__DOT__minstret 
                                                                           >> 0x00000020U))))
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(
                                                                          (vlSelfRef.top_tb__DOT__INST2__DOT__mcycle 
                                                                           >> 0x00000020U))))))))))
                                                        : 
                                                       ((0x04000000U 
                                                         & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                         ? 0U
                                                         : 
                                                        ((0x02000000U 
                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                          ? 0U
                                                          : 
                                                         ((0x01000000U 
                                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                           ? 0U
                                                           : 
                                                          ((0x00800000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x00400000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4))))
                                                             : 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3))
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__minstret)))
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mcycle))))))))))
                                                       : 0U)
                                                      : 0U))
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                     ? 0U
                                                     : 
                                                    ((0x20000000U 
                                                      & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                      ? 
                                                     ((0x10000000U 
                                                       & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                       ? 
                                                      ((0x08000000U 
                                                        & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                        ? 0U
                                                        : 
                                                       ((0x04000000U 
                                                         & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                         ? 
                                                        ((0x02000000U 
                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                          ? 0U
                                                          : 
                                                         ((0x01000000U 
                                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                           ? 0U
                                                           : 
                                                          ((0x00800000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x00400000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mip)))
                                                             : 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mtval)
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mcause))
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mepc)
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mscratch)))))))
                                                         : 
                                                        ((0x02000000U 
                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                          ? 
                                                         ((0x01000000U 
                                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                           ? 0U
                                                           : 
                                                          ((0x00800000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x00400000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent4)))
                                                             : 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent3)
                                                               : 0U)
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit))))))
                                                          : 
                                                         ((0x01000000U 
                                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                           ? 
                                                          ((0x00800000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x00400000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 0U
                                                             : 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(
                                                                          (vlSelfRef.top_tb__DOT__INST2__DOT__mstatus 
                                                                           >> 0x00000020U)))))))
                                                           : 
                                                          ((0x00800000U 
                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x00400000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 0U
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mcounteren))
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mtvec)
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__mie)))
                                                             : 
                                                            ((0x00200000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((0x00100000U 
                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                               ? 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : vlSelfRef.top_tb__DOT__INST2__DOT__misa)
                                                               : 
                                                              ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mstatus))))))))))
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U))) 
                                 << 0x0000000dU) | (QData)((IData)(
                                                                   (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BHTaddr) 
                                                                     << 5U) 
                                                                    | (0x0000001fU 
                                                                       & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                                          >> 0x0000000fU))))))) 
                       >> 0x00000010U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     (((IData)(top_tb__DOT__INST2__DOT__ID_CSR) 
                                                                       & (IData)(
                                                                                (0x00001000U 
                                                                                != 
                                                                                (0x00003f80U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))
                                                                       ? 
                                                                      ((vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                                        >> 0x0000001fU)
                                                                        ? 
                                                                       ((0x40000000U 
                                                                         & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                         ? 0U
                                                                         : 
                                                                        ((0x20000000U 
                                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                          ? 
                                                                         ((0x10000000U 
                                                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                           ? 
                                                                          ((0x08000000U 
                                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                            ? 
                                                                           ((0x04000000U 
                                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                             ? 0U
                                                                             : 
                                                                            ((0x02000000U 
                                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                              ? 0U
                                                                              : 
                                                                             ((0x01000000U 
                                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                               ? 0U
                                                                               : 
                                                                              ((0x00800000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                ? 0U
                                                                                : 
                                                                               ((0x00400000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(
                                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4 
                                                                                >> 0x00000020U)))))
                                                                                 : 
                                                                                ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(
                                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3 
                                                                                >> 0x00000020U)))
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(
                                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__minstret 
                                                                                >> 0x00000020U))))
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(
                                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__mcycle 
                                                                                >> 0x00000020U))))))))))
                                                                            : 
                                                                           ((0x04000000U 
                                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                             ? 0U
                                                                             : 
                                                                            ((0x02000000U 
                                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                              ? 0U
                                                                              : 
                                                                             ((0x01000000U 
                                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                               ? 0U
                                                                               : 
                                                                              ((0x00800000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                ? 0U
                                                                                : 
                                                                               ((0x00400000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4))))
                                                                                 : 
                                                                                ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3))
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__minstret)))
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mcycle))))))))))
                                                                           : 0U)
                                                                          : 0U))
                                                                        : 
                                                                       ((0x40000000U 
                                                                         & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                         ? 0U
                                                                         : 
                                                                        ((0x20000000U 
                                                                          & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                          ? 
                                                                         ((0x10000000U 
                                                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                           ? 
                                                                          ((0x08000000U 
                                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                            ? 0U
                                                                            : 
                                                                           ((0x04000000U 
                                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                             ? 
                                                                            ((0x02000000U 
                                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                              ? 0U
                                                                              : 
                                                                             ((0x01000000U 
                                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                               ? 0U
                                                                               : 
                                                                              ((0x00800000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                ? 0U
                                                                                : 
                                                                               ((0x00400000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mip)))
                                                                                 : 
                                                                                ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mtval)
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mcause))
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mepc)
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mscratch)))))))
                                                                             : 
                                                                            ((0x02000000U 
                                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                              ? 
                                                                             ((0x01000000U 
                                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                               ? 0U
                                                                               : 
                                                                              ((0x00800000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                ? 0U
                                                                                : 
                                                                               ((0x00400000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent4)))
                                                                                 : 
                                                                                ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent3)
                                                                                 : 0U)
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit))))))
                                                                              : 
                                                                             ((0x01000000U 
                                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                               ? 
                                                                              ((0x00800000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                ? 0U
                                                                                : 
                                                                               ((0x00400000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(
                                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__mstatus 
                                                                                >> 0x00000020U)))))))
                                                                               : 
                                                                              ((0x00800000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                ? 0U
                                                                                : 
                                                                               ((0x00400000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mcounteren))
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mtvec)
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mie)))
                                                                                 : 
                                                                                ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__misa)
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_4)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mstatus))))))))))
                                                                           : 0U)
                                                                          : 0U)))
                                                                       : 0U))) 
                                                     << 0x0000000dU) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BHTaddr) 
                                                                        << 5U) 
                                                                       | (0x0000001fU 
                                                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                                             >> 0x0000000fU)))))) 
                                                   >> 0x00000020U)) 
                                          << 0x00000010U));
    __Vtemp_19[4U] = (((((vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                          >> 2U) & (((0x0000001fU & 
                                      (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                       >> 0x00000019U)) 
                                     == (0x0000001fU 
                                         & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                            >> 0x00000014U))) 
                                    & (0U != (0x0000001fU 
                                              & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                 >> 0x00000014U)))))
                         ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                         : vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file
                        [(0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                         >> 0x00000014U))]) 
                       >> 3U) | ((((vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                    >> 2U) & (((0x0000001fU 
                                                & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                   >> 0x00000019U)) 
                                               == (0x0000001fU 
                                                   & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                      >> 0x0000000fU))) 
                                              & (0U 
                                                 != 
                                                 (0x0000001fU 
                                                  & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                     >> 0x0000000fU)))))
                                   ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                                   : vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file
                                  [(0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                   >> 0x0000000fU))]) 
                                 << 0x0000001dU));
    if (__VdfgRegularize_h6e95ff9d_0_1) {
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[0U] 
            = Vtop_tb__ConstPool__CONST_h11ab053c_0[0U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[1U] 
            = Vtop_tb__ConstPool__CONST_h11ab053c_0[1U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[2U] 
            = Vtop_tb__ConstPool__CONST_h11ab053c_0[2U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[3U] 
            = Vtop_tb__ConstPool__CONST_h11ab053c_0[3U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[4U] 
            = Vtop_tb__ConstPool__CONST_h11ab053c_0[4U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[5U] 
            = Vtop_tb__ConstPool__CONST_h11ab053c_0[5U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[6U] 
            = Vtop_tb__ConstPool__CONST_h11ab053c_0[6U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[7U] 
            = Vtop_tb__ConstPool__CONST_h11ab053c_0[7U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[8U] 
            = Vtop_tb__ConstPool__CONST_h11ab053c_0[8U];
    } else {
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[0U] 
            = __Vtemp_18[0U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[1U] 
            = __Vtemp_18[1U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[2U] 
            = ((top_tb__DOT__INST2__DOT__ID_imm << 0x0000001dU) 
               | __Vtemp_18[2U]);
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[3U] 
            = ((top_tb__DOT__INST2__DOT__ID_imm >> 3U) 
               | ((((vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                     >> 2U) & (((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                >> 0x00000019U)) 
                                == (0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                   >> 0x00000014U))) 
                               & (0U != (0x0000001fU 
                                         & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                            >> 0x00000014U)))))
                    ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                    : vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file
                   [(0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                    >> 0x00000014U))]) 
                  << 0x0000001dU));
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[4U] 
            = __Vtemp_19[4U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[5U] 
            = (((((vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                   >> 2U) & (((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                              >> 0x00000019U)) 
                              == (0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                 >> 0x0000000fU))) 
                             & (0U != (0x0000001fU 
                                       & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                          >> 0x0000000fU)))))
                  ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                  : vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file
                 [(0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                  >> 0x0000000fU))]) 
                >> 3U) | (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_imm 
                          << 0x0000001dU));
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[6U] 
            = ((vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_imm 
                >> 3U) | ((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc)) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_4)))) 
                          << 0x0000001dU));
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[7U] 
            = (((IData)((((QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc)) 
                          << 0x00000020U) | (QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_4)))) 
                >> 3U) | ((IData)(((((QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc)) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_4))) 
                                   >> 0x00000020U)) 
                          << 0x0000001dU));
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[8U] 
            = ((IData)(((((QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc)) 
                          << 0x00000020U) | (QData)((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_4))) 
                        >> 0x00000020U)) >> 3U);
    }
}

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_tb___024root___eval_phase__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_triggers__act(vlSelf);
    Vtop_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_tb___024root___eval_phase__nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop_tb___024root___eval_nba(vlSelf);
        Vtop_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("packages/../tb/system/top_tb.sv", 6, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("packages/../tb/system/top_tb.sv", 6, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop_tb___024root___eval_phase__act(vlSelf));
    } while (Vtop_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
}
#endif  // VL_DEBUG
