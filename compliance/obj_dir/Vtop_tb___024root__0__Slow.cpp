// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INW(8000, "PROGRAM=%s"s, 
                                             vlSelfRef.top_tb__DOT__program_file))))) {
        VL_WRITEF_NX("ERROR: No PROGRAM file specified! Use +PROGRAM=<path>\n",0);
        VL_FINISH_MT("packages/../tb/system/top_tb.sv", 58, "");
    }
    VL_WRITEF_NX("Loading program from %s\n",0,8000,
                 vlSelfRef.top_tb__DOT__program_file.data());
    VL_READMEM_N(true, 32, 7616, 0, VL_CVT_PACK_STR_NW(250, vlSelfRef.top_tb__DOT__program_file)
                 ,  &(vlSelfRef.top_tb__DOT__INST1__DOT__mem)
                 , 0U, ~0ULL);
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INI(32, "begin_signature=%h"s, 
                                             vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN))))) {
        VL_WRITEF_NX("No RVMODEL_DATA_BEGIN address specified! Using default address 0x00005000\n",0);
        vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN = 0x00005000U;
    }
    VL_WRITEF_NX("RVMODEL_DATA_BEGIN: %x\n",0,32,vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN);
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INI(32, "end_signature=%h"s, 
                                             vlSelfRef.top_tb__DOT__RVMODEL_DATA_END))))) {
        VL_WRITEF_NX("No RVMODEL_DATA_END address specified! Using default address 0x00008000\n",0);
        vlSelfRef.top_tb__DOT__RVMODEL_DATA_END = 0x00008000U;
    }
    VL_WRITEF_NX("RVMODEL_DATA_END: %x\n",0,32,vlSelfRef.top_tb__DOT__RVMODEL_DATA_END);
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INI(32, "tohost=%h"s, 
                                             vlSelfRef.top_tb__DOT__tohost))))) {
        VL_WRITEF_NX("No tohost address specified! Using default address 0x00005000\n",0);
        vlSelfRef.top_tb__DOT__tohost = 0x00005000U;
    }
    VL_WRITEF_NX("tohost: %x\n",0,32,vlSelfRef.top_tb__DOT__tohost);
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("packages/../tb/system/top_tb.sv", 6, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 128> Vtop_tb__ConstPool__TABLE_h4ae872a6_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop_tb__ConstPool__TABLE_h173db05d_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop_tb__ConstPool__TABLE_h360848ef_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h67a4a39b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_h07b8af5e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hc64fce2b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hf4dbd913_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_haff683e6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hc633f8d1_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop_tb__ConstPool__TABLE_h225d1e3e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hb235b974_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vtop_tb__ConstPool__TABLE_hdb653689_0;
extern const VlWide<9>/*287:0*/ Vtop_tb__ConstPool__CONST_h11ab053c_0;

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
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
    CData/*0:0*/ top_tb__DOT__INST2__DOT__misaligned_fetch;
    top_tb__DOT__INST2__DOT__misaligned_fetch = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT____VdfgRegularize_hdb8421e2_0_0;
    top_tb__DOT__INST2__DOT____VdfgRegularize_hdb8421e2_0_0 = 0;
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
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    __VdfgRegularize_h6e95ff9d_0_11 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<9>/*287:0*/ __Vtemp_6;
    // Body
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
    __VdfgRegularize_h6e95ff9d_0_6 = ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                       >> 2U) & (0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                     >> 9U))));
    top_tb__DOT__INST2__DOT____VdfgRegularize_hdb8421e2_0_0 
        = (vlSelfRef.top_tb__DOT__INST2__DOT__mtime 
           >= vlSelfRef.top_tb__DOT__INST2__DOT__mtimecmp);
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
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
        = ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_PostFlush)
            ? 0U : vlSelfRef.top_tb__DOT__doa);
    top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word 
        = VL_SHIFTR_III(32,32,32, ((1U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                                    ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_io_data
                                    : vlSelfRef.top_tb__DOT__dob), 
                        VL_SHIFTL_III(32,32,32, (3U 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                                    >> 3U)), 3U));
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd 
        = (((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                            >> 0x00000010U)) == (0x0000001fU 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                    >> 0x00000019U))) 
           & (IData)(((0x00000080U == (0x00000088U 
                                       & vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U])) 
                      & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                         >> 0x00000011U))));
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd 
        = (((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                            >> 0x00000010U)) == (0x0000001fU 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x00000019U))) 
           & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
               >> 0x00000011U) & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                  >> 7U)));
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd 
        = (((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                            >> 0x0000000bU)) == (0x0000001fU 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                    >> 0x00000019U))) 
           & (IData)(((0x00000080U == (0x00000088U 
                                       & vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U])) 
                      & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                         >> 0x00000012U))));
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd 
        = (((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                            >> 0x0000000bU)) == (0x0000001fU 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x00000019U))) 
           & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
               >> 0x00000012U) & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                  >> 7U)));
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM_csr_value_final 
        = (((0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                            >> 0x0000000dU)) == (0x00000fffU 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x0000000dU)))
            ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
            : ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[3U] 
                << 0x00000018U) | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[2U] 
                                   >> 8U)));
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
    __VdfgRegularize_h6e95ff9d_0_7 = ((0x00000fffU 
                                       & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                          >> 0x0000000dU)) 
                                      == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                          >> 0x00000014U));
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
    __Vtableidx1 = (0x0000007fU & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction);
    top_tb__DOT__INST2__DOT__ID_ALUOp = Vtop_tb__ConstPool__TABLE_h4ae872a6_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc = 
        Vtop_tb__ConstPool__TABLE_h173db05d_0[__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_ALUSrc = Vtop_tb__ConstPool__TABLE_h360848ef_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_RegWrite = Vtop_tb__ConstPool__TABLE_h67a4a39b_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_MemRead = Vtop_tb__ConstPool__TABLE_h07b8af5e_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_MemWrite = Vtop_tb__ConstPool__TABLE_hc64fce2b_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch = 
        Vtop_tb__ConstPool__TABLE_hf4dbd913_0[__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_Jump = Vtop_tb__ConstPool__TABLE_haff683e6_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_Valid = Vtop_tb__ConstPool__TABLE_hc633f8d1_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_ValidReg = Vtop_tb__ConstPool__TABLE_h225d1e3e_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__ID_CSR = Vtop_tb__ConstPool__TABLE_hb235b974_0
        [__Vtableidx1];
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
    __VdfgRegularize_h6e95ff9d_0_10 = ((0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit))
                                        ? ((IData)(top_tb__DOT__INST2__DOT__IF_Branch)
                                            ? (((2U 
                                                 == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__IF_branch_prediction)) 
                                                | (3U 
                                                   == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__IF_branch_prediction)))
                                                ? top_tb__DOT__INST2__DOT__IF_pc_imm
                                                : ((IData)(4U) 
                                                   + vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc))
                                            : ((IData)(top_tb__DOT__INST2__DOT__IF_Jump)
                                                ? top_tb__DOT__INST2__DOT__IF_pc_imm
                                                : ((IData)(4U) 
                                                   + vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc)))
                                        : ((IData)(4U) 
                                           + vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc));
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
    top_tb__DOT__INST2__DOT__INST1__DOT__way_found = 0U;
    vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__victim_idx = 0U;
    if ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status))) {
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[0U] = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[2U] = 0U;
    } else {
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[0U] 
            = (0x0000003fU & vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
               [1U]);
        vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[2U] 
            = ((1U & ((~ (IData)(top_tb__DOT__INST2__DOT__ID_Valid)) 
                      & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_PostFlush))))
                ? 2U : (((IData)(((4U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc)) 
                                  & (0U == (0x00007000U 
                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)))) 
                         & ((0U == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                    >> 0x00000014U)) 
                            | (1U == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                      >> 0x00000014U))))
                         ? ((1U == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                    >> 0x00000014U))
                             ? 3U : 0x0bU) : vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                        [3U]));
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
    vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra 
        = (0x00001fffU & (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall)
                            ? vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc
                            : vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc) 
                          >> 2U));
    __VdfgRegularize_h6e95ff9d_0_11 = (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__BTBwrite) 
                                        & ((~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BTBhit)) 
                                           & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall))))
                                        ? ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch)
                                            ? (((2U 
                                                 == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction)) 
                                                | (3U 
                                                   == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction)))
                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_imm
                                                : __VdfgRegularize_h6e95ff9d_0_10)
                                            : (((IData)(top_tb__DOT__INST2__DOT__ID_Jump) 
                                                & (0U 
                                                   == (IData)(top_tb__DOT__INST2__DOT__ID_ALUSrc)))
                                                ? vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_imm
                                                : __VdfgRegularize_h6e95ff9d_0_10))
                                        : __VdfgRegularize_h6e95ff9d_0_10);
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
    __VdfgRegularize_h6e95ff9d_0_3 = ((IData)(((0x00080000U 
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
    vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[1U] 
        = ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status))
            ? 0U : (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                      >> 5U) & ((IData)(((0x00080000U 
                                          == (0x00180000U 
                                              & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) 
                                         & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)) 
                                | (IData)(((0x00100000U 
                                            == (0x00180000U 
                                                & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) 
                                           & (0U != 
                                              (3U & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result))))))
                     ? 4U : (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                               >> 5U) & (0x00008000U 
                                         <= vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result))
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
                                                & (0x00008000U 
                                                   <= vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result))
                                                ? 7U
                                                : (
                                                   ((((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                       >> 3U) 
                                                      & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter)) 
                                                     | (IData)(
                                                               (4U 
                                                                == 
                                                                (0x00000604U 
                                                                 & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])))) 
                                                    & (0U 
                                                       != 
                                                       (3U 
                                                        & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[5U] 
                                                           >> 0x0000001dU))))
                                                    ? 0U
                                                    : 
                                                   ((((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                       >> 2U) 
                                                      & (0U 
                                                         != 
                                                         (3U 
                                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                             >> 9U)))) 
                                                     & (vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result 
                                                        >> 1U))
                                                     ? 0U
                                                     : 
                                                    vlSelfRef.top_tb__DOT__INST2__DOT__exception_code
                                                    [2U])))))));
    top_tb__DOT__INST2__DOT__misaligned_fetch = ((1U 
                                                  & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                           >> 5U) 
                                                          & ((IData)(
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
                                                                            & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)))))))) 
                                                     && ((1U 
                                                          & (~ 
                                                             ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                               >> 5U) 
                                                              & (0x00008000U 
                                                                 <= vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)))) 
                                                         && ((1U 
                                                              & (~ 
                                                                 ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                   >> 4U) 
                                                                  & ((IData)(
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
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)))))))) 
                                                             && ((1U 
                                                                  & (~ 
                                                                     ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                       >> 4U) 
                                                                      & (0x00008000U 
                                                                         <= vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)))) 
                                                                 && (((((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                         >> 3U) 
                                                                        & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter)) 
                                                                       | (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x00000604U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])))) 
                                                                      & (0U 
                                                                         != 
                                                                         (3U 
                                                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[5U] 
                                                                             >> 0x0000001dU)))) 
                                                                     || (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                           >> 2U) 
                                                                          & (0U 
                                                                             != 
                                                                             (3U 
                                                                              & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                                >> 9U)))) 
                                                                         & (vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result 
                                                                            >> 1U))))))));
    __VdfgRegularize_h6e95ff9d_0_12 = ((4U & (((~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_PostFlush) 
                                                    | (IData)(top_tb__DOT__INST2__DOT__ID_Valid))) 
                                                  | (((4U 
                                                       == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc)) 
                                                      & (IData)(
                                                                ((0U 
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
                                                        >> 3U)))) 
                                              << 2U)) 
                                       | ((2U & (((~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status)) 
                                                  & (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                       >> 5U) 
                                                      & (IData)(__VdfgRegularize_h6e95ff9d_0_3)) 
                                                     | (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                          >> 5U) 
                                                         & (0x00008000U 
                                                            <= vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)) 
                                                        | (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                             >> 4U) 
                                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_3)) 
                                                           | (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                >> 4U) 
                                                               & (0x00008000U 
                                                                  <= vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)) 
                                                              | (((((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                                     >> 3U) 
                                                                    & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter)) 
                                                                   | (IData)(
                                                                             (4U 
                                                                              == 
                                                                              (0x00000604U 
                                                                               & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])))) 
                                                                  & (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[5U] 
                                                                         >> 0x0000001dU)))) 
                                                                 | (((IData)(__VdfgRegularize_h6e95ff9d_0_6) 
                                                                     & (vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result 
                                                                        >> 1U)) 
                                                                    | ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status) 
                                                                       >> 2U)))))))) 
                                                 << 1U)) 
                                          | (IData)(
                                                    (2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status))))));
    vlSelfRef.top_tb__DOT__INST2__DOT__interrupt_taken 
        = ((IData)((vlSelfRef.top_tb__DOT__INST2__DOT__mstatus 
                    >> 3U)) & ((vlSelfRef.top_tb__DOT__INST2__DOT__mie 
                                >> 7U) & ((IData)(top_tb__DOT__INST2__DOT____VdfgRegularize_hdb8421e2_0_0) 
                                          & ((~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__trap_active)) 
                                             & ((0U 
                                                 == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status)) 
                                                & ((0U 
                                                    == (IData)(__VdfgRegularize_h6e95ff9d_0_12)) 
                                                   & (0U 
                                                      != 
                                                      (7U 
                                                       & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                          >> 7U)))))))));
    vlSelfRef.top_tb__DOT__dib = 0U;
    top_tb__DOT__INST2__DOT__web_final = 0U;
    if ((((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
           >> 2U) & (0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status))) 
         & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__interrupt_taken)))) {
        if ((0U == (7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                          >> 0x0000000aU)))) {
            vlSelfRef.top_tb__DOT__dib = (((~ ((IData)(0x000000ffU) 
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
                                                                     >> 8U)), 3U)))));
            top_tb__DOT__INST2__DOT__web_final = (0x0000000fU 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                         >> 8U))));
        } else if ((1U == (7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                 >> 0x0000000aU)))) {
            vlSelfRef.top_tb__DOT__dib = (((~ ((IData)(0x0000ffffU) 
                                               << (0x0000001fU 
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
                                                                     >> 8U)), 3U)))));
            top_tb__DOT__INST2__DOT__web_final = (0x0000000fU 
                                                  & ((IData)(3U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                         >> 8U))));
        } else if ((2U == (7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                 >> 0x0000000aU)))) {
            vlSelfRef.top_tb__DOT__dib = top_tb__DOT__INST2__DOT__MEM_rs2_data_final;
            top_tb__DOT__INST2__DOT__web_final = (0x0000000fU 
                                                  & 0x0fU);
        } else {
            vlSelfRef.top_tb__DOT__dib = 0U;
            top_tb__DOT__INST2__DOT__web_final = (0x0000000fU 
                                                  & 0U);
        }
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__trap_entry = 
        (1U & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status) 
               | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__interrupt_taken)));
    if ((0x00007700U <= ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                          << 0x00000018U) | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                             >> 8U)))) {
        vlSelfRef.top_tb__DOT__web = 0U;
        vlSelfRef.top_tb__DOT__INST2__DOT__web_io = top_tb__DOT__INST2__DOT__web_final;
    } else {
        vlSelfRef.top_tb__DOT__web = top_tb__DOT__INST2__DOT__web_final;
        vlSelfRef.top_tb__DOT__INST2__DOT__web_io = 0U;
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__MEM_Flush = 
        ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__trap_entry) 
         | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__critical_error));
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__trap_entry) 
                                                   | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__critical_error));
    vlSelfRef.top_tb__DOT__INST2__DOT__next_pc = ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__critical_error)
                                                   ? vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc
                                                   : 
                                                  ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__trap_entry)
                                                    ? vlSelfRef.top_tb__DOT__INST2__DOT__mtvec
                                                    : 
                                                   (((4U 
                                                      == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc)) 
                                                     & (IData)(
                                                               (0x30000000U 
                                                                == 
                                                                (0xfe007000U 
                                                                 & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))
                                                     ? vlSelfRef.top_tb__DOT__INST2__DOT__mepc
                                                     : 
                                                    (((~ (IData)(top_tb__DOT__INST2__DOT__misaligned_fetch)) 
                                                      & (0U 
                                                         == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status)))
                                                      ? 
                                                     ((8U 
                                                       & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))
                                                        ? 
                                                       ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] 
                                                         << 3U) 
                                                        | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[5U] 
                                                           >> 0x0000001dU))
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))
                                                         ? 
                                                        ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[7U] 
                                                          << 3U) 
                                                         | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] 
                                                            >> 0x0000001dU))
                                                         : __VdfgRegularize_h6e95ff9d_0_11))
                                                       : 
                                                      ((IData)(__VdfgRegularize_h6e95ff9d_0_6)
                                                        ? 
                                                       (0xfffffffeU 
                                                        & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)
                                                        : __VdfgRegularize_h6e95ff9d_0_11))
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc)))));
    top_tb__DOT__INST2__DOT__EX_Flush = (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__trap_entry) 
                                          | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__critical_error)) 
                                         | (IData)(
                                                   ((4U 
                                                     == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc)) 
                                                    & (0x00500000U 
                                                       == 
                                                       (0x01f07000U 
                                                        & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)))));
    if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__critical_error)))) {
        if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__trap_entry)))) {
            if ((IData)(((4U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc)) 
                         & (0x30000000U == (0xfe007000U 
                                            & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
            } else if (((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status)) 
                        & (~ (IData)(top_tb__DOT__INST2__DOT__misaligned_fetch)))) {
                if (((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) 
                       | (IData)(top_tb__DOT__INST2__DOT__ID_Jump)) 
                      & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BTBhit))) 
                     & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall)))) {
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
                    } else if ((1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))) {
                        vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
                    }
                } else if (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                             >> 2U) & (0U != (3U & 
                                              (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                               >> 9U))))) {
                    vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
                }
            }
            if ((1U & (~ (IData)(((4U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc)) 
                                  & (0x30000000U == 
                                     (0xfe007000U & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))))) {
                if (((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status)) 
                     & (~ (IData)(top_tb__DOT__INST2__DOT__misaligned_fetch)))) {
                    if ((8U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])) {
                        if ((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))) {
                            top_tb__DOT__INST2__DOT__EX_Flush = 1U;
                        }
                    } else if (((vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                 >> 2U) & (0U != (3U 
                                                  & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                     >> 9U))))) {
                        top_tb__DOT__INST2__DOT__EX_Flush = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__exception_status_n 
        = (((0x00005000U <= vlSelfRef.top_tb__DOT__INST2__DOT__next_pc) 
            << 3U) | (IData)(__VdfgRegularize_h6e95ff9d_0_12));
    vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[3U] 
        = ((0x00005000U <= vlSelfRef.top_tb__DOT__INST2__DOT__next_pc)
            ? 1U : 0U);
    __Vtemp_5[0U] = (IData)((((QData)((IData)(((0x003e0000U 
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
    __Vtemp_5[1U] = (((IData)((((QData)((IData)((((IData)(top_tb__DOT__INST2__DOT__ID_CSR) 
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : (IData)(
                                                                         (vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3 
                                                                          >> 0x00000020U)))
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : (IData)(
                                                                         (vlSelfRef.top_tb__DOT__INST2__DOT__minstret 
                                                                          >> 0x00000020U))))
                                                             : 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4))))
                                                            : 
                                                           ((0x00200000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3))
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__minstret)))
                                                             : 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(top_tb__DOT__INST2__DOT____VdfgRegularize_hdb8421e2_0_0) 
                                                              << 7U)))
                                                            : 
                                                           ((0x00200000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mtval)
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mcause))
                                                             : 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mepc)
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent4)))
                                                            : 
                                                           ((0x00200000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent3)
                                                              : 0U)
                                                             : 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mcounteren))
                                                             : 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mtvec)
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__misa)
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                      << 0x00000010U) | (IData)(((((QData)((IData)(
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
    __Vtemp_5[2U] = (((IData)((((QData)((IData)((((IData)(top_tb__DOT__INST2__DOT__ID_CSR) 
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : (IData)(
                                                                         (vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3 
                                                                          >> 0x00000020U)))
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : (IData)(
                                                                         (vlSelfRef.top_tb__DOT__INST2__DOT__minstret 
                                                                          >> 0x00000020U))))
                                                             : 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4))))
                                                            : 
                                                           ((0x00200000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3))
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__minstret)))
                                                             : 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(top_tb__DOT__INST2__DOT____VdfgRegularize_hdb8421e2_0_0) 
                                                              << 7U)))
                                                            : 
                                                           ((0x00200000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mtval)
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mcause))
                                                             : 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mepc)
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent4)))
                                                            : 
                                                           ((0x00200000U 
                                                             & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                             ? 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent3)
                                                              : 0U)
                                                             : 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 0U
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mcounteren))
                                                             : 
                                                            ((0x00100000U 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                              ? 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__mtvec)
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                               : vlSelfRef.top_tb__DOT__INST2__DOT__misa)
                                                              : 
                                                             ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                      >> 0x00000010U) | ((IData)(((
                                                   ((QData)((IData)(
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
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(
                                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3 
                                                                                >> 0x00000020U)))
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(
                                                                                (vlSelfRef.top_tb__DOT__INST2__DOT__minstret 
                                                                                >> 0x00000020U))))
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4))))
                                                                                : 
                                                                               ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3))
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__minstret)))
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                                                ((IData)(top_tb__DOT__INST2__DOT____VdfgRegularize_hdb8421e2_0_0) 
                                                                                << 7U)))
                                                                                : 
                                                                               ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mtval)
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mcause))
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mepc)
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent4)))
                                                                                : 
                                                                               ((0x00200000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent3)
                                                                                 : 0U)
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mcounteren))
                                                                                 : 
                                                                                ((0x00100000U 
                                                                                & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)
                                                                                 ? 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__mtvec)
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
                                                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                                                 : vlSelfRef.top_tb__DOT__INST2__DOT__misa)
                                                                                 : 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_7)
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
    __Vtemp_6[4U] = (((((vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
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
    if (((IData)(top_tb__DOT__INST2__DOT__EX_Flush) 
         | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall))) {
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
            = __Vtemp_5[0U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_n[2U] 
            = ((top_tb__DOT__INST2__DOT__ID_imm << 0x0000001dU) 
               | __Vtemp_5[2U]);
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
            = __Vtemp_6[4U];
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

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->top_tb__DOT__wea = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7530027074258884399ull);
    vlSelf->top_tb__DOT__web = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12850016398727385416ull);
    vlSelf->top_tb__DOT__doa = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4519068970579239568ull);
    vlSelf->top_tb__DOT__dob = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2006643162704700292ull);
    vlSelf->top_tb__DOT__dia = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12922144221055099401ull);
    vlSelf->top_tb__DOT__dib = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1547587149590142414ull);
    vlSelf->top_tb__DOT__led = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7365129552782416714ull);
    vlSelf->top_tb__DOT____Vcellinp__INST1__addra = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12466527335744865955ull);
    VL_SCOPED_RAND_RESET_W(8000, vlSelf->top_tb__DOT__program_file, __VscopeHash, 1101078386483316854ull);
    vlSelf->top_tb__DOT__RVMODEL_DATA_BEGIN = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2635610246748856821ull);
    vlSelf->top_tb__DOT__RVMODEL_DATA_END = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9466641019508248057ull);
    vlSelf->top_tb__DOT__tohost = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1030470667926345800ull);
    vlSelf->top_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6651770975129235105ull);
    vlSelf->top_tb__DOT__fd = 0;
    for (int __Vi0 = 0; __Vi0 < 7616; ++__Vi0) {
        vlSelf->top_tb__DOT__INST1__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5830564721699294562ull);
    }
    vlSelf->top_tb__DOT__INST1__DOT____Vlvbound_hca8ea982__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18368128729544676824ull);
    vlSelf->top_tb__DOT__INST1__DOT____Vlvbound_h0f921f73__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16361471289604640504ull);
    vlSelf->top_tb__DOT__INST2__DOT__IF_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14635124202959967813ull);
    vlSelf->top_tb__DOT__INST2__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5113717840451670525ull);
    vlSelf->top_tb__DOT__INST2__DOT__BTBwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7633578093561993661ull);
    vlSelf->top_tb__DOT__INST2__DOT__IF_BHTaddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6429206108483981392ull);
    vlSelf->top_tb__DOT__INST2__DOT__IF_branch_prediction = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17172710703257974611ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6009406694346212344ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_pc_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2458631798706766355ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_BHTaddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9811694161023790023ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_branch_prediction = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5898671896017242705ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_BTBhit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 917072341808703273ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11965244405588051676ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_pc_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3600086023010565866ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_RegSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14870417236464925893ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_Stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14771334881966902701ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_Flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7676161605972120793ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6168863462168853207ull);
    VL_SCOPED_RAND_RESET_W(285, vlSelf->top_tb__DOT__INST2__DOT__EX, __VscopeHash, 8649059502038857112ull);
    VL_SCOPED_RAND_RESET_W(285, vlSelf->top_tb__DOT__INST2__DOT__EX_n, __VscopeHash, 8831786779126423945ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_rs1_data_final = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9657495953999008246ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_rs2_data_final = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 59035115695024191ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_ALU_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6072939614124549545ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_prediction_status = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13497278641024929517ull);
    VL_SCOPED_RAND_RESET_W(264, vlSelf->top_tb__DOT__INST2__DOT__MEM, __VscopeHash, 39336086206960195ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_csr_value_final = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17623476178787112666ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_Flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12615591884765938999ull);
    vlSelf->top_tb__DOT__INST2__DOT__web_io = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7518034945699790882ull);
    VL_SCOPED_RAND_RESET_W(227, vlSelf->top_tb__DOT__INST2__DOT__WB, __VscopeHash, 10324341708631796888ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_rd_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3026663662032268569ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_csr_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13560853529444039317ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_io_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8333188048711166016ull);
    vlSelf->top_tb__DOT__INST2__DOT__mstatus = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10857921852463438427ull);
    vlSelf->top_tb__DOT__INST2__DOT__mcycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3487167792893197456ull);
    vlSelf->top_tb__DOT__INST2__DOT__minstret = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15918319832183886533ull);
    vlSelf->top_tb__DOT__INST2__DOT__mhpmcounter3 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16935365864306835360ull);
    vlSelf->top_tb__DOT__INST2__DOT__mhpmcounter4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17698441129223894643ull);
    vlSelf->top_tb__DOT__INST2__DOT__mtime = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7030037729755057043ull);
    vlSelf->top_tb__DOT__INST2__DOT__mtimecmp = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9293678078927713584ull);
    vlSelf->top_tb__DOT__INST2__DOT__misa = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1459685574871774412ull);
    vlSelf->top_tb__DOT__INST2__DOT__mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10478574466170883697ull);
    vlSelf->top_tb__DOT__INST2__DOT__mie = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16701286298946029510ull);
    vlSelf->top_tb__DOT__INST2__DOT__mcounteren = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4549404065340067301ull);
    vlSelf->top_tb__DOT__INST2__DOT__mcountinhibit = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 765835700464022309ull);
    vlSelf->top_tb__DOT__INST2__DOT__mscratch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2248969320049670028ull);
    vlSelf->top_tb__DOT__INST2__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2379415167095092000ull);
    vlSelf->top_tb__DOT__INST2__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11724808895665193576ull);
    vlSelf->top_tb__DOT__INST2__DOT__mtval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17832327818403430389ull);
    vlSelf->top_tb__DOT__INST2__DOT__mhpmevent3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9685800497334038778ull);
    vlSelf->top_tb__DOT__INST2__DOT__mhpmevent4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9516793038697401641ull);
    vlSelf->top_tb__DOT__INST2__DOT__exception_status = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2737850922755491103ull);
    vlSelf->top_tb__DOT__INST2__DOT__exception_status_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5038814683624524315ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_tb__DOT__INST2__DOT__exception_code[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15091181755857728182ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_tb__DOT__INST2__DOT__exception_code_n[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2372863676072528511ull);
    }
    vlSelf->top_tb__DOT__INST2__DOT__critical_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 69333140404739105ull);
    vlSelf->top_tb__DOT__INST2__DOT__trap_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15363265742622221221ull);
    vlSelf->top_tb__DOT__INST2__DOT__interrupt_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10529281251779142352ull);
    vlSelf->top_tb__DOT__INST2__DOT__trap_entry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11203177224981520170ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top_tb__DOT__INST2__DOT__BHT[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4367021378526316011ull);
    }
    vlSelf->top_tb__DOT__INST2__DOT__gh = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2856939644768388201ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_PostFlush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16833887095700643358ull);
    vlSelf->top_tb__DOT__INST2__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(61, __VscopeHash, 5367536815629279432ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines[__Vi0] = VL_SCOPED_RAND_RESET_Q(61, __VscopeHash, 9182958303385004025ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines[__Vi0] = VL_SCOPED_RAND_RESET_Q(61, __VscopeHash, 13631814128739060141ull);
    }
    vlSelf->top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3842862503439746185ull);
    vlSelf->top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12746479504970131591ull);
    vlSelf->top_tb__DOT__INST2__DOT__INST1__DOT__victim_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11053358048540723421ull);
    vlSelf->top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11626563286566046770ull);
    }
    vlSelf->top_tb__DOT__INST2__DOT__INST4__DOT__intimm1 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6119890184750903250ull);
    vlSelf->top_tb__DOT__INST2__DOT__INST4__DOT__intimm2 = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6019663914949264189ull);
    vlSelf->top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8506999133393847606ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
