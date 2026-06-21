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
        VL_FINISH_MT("packages/../tb/system/top_tb.sv", 56, "");
    }
    VL_WRITEF_NX("Loading program from %s\n",0,8000,
                 vlSelfRef.top_tb__DOT__program_file.data());
    VL_READMEM_N(true, 32, 606208, 0, VL_CVT_PACK_STR_NW(250, vlSelfRef.top_tb__DOT__program_file)
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
extern const VlUnpacked<CData/*2:0*/, 128> Vtop_tb__ConstPool__TABLE_h225d1e3e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop_tb__ConstPool__TABLE_hb235b974_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vtop_tb__ConstPool__TABLE_hdb653689_0;

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
    CData/*0:0*/ top_tb__DOT__INST2__DOT__EX_overflow;
    top_tb__DOT__INST2__DOT__EX_overflow = 0;
    CData/*0:0*/ top_tb__DOT__INST2__DOT__EX_carry;
    top_tb__DOT__INST2__DOT__EX_carry = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_op1;
    top_tb__DOT__INST2__DOT__EX_op1 = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_op2;
    top_tb__DOT__INST2__DOT__EX_op2 = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_rs1_fwd_data;
    top_tb__DOT__INST2__DOT__EX_rs1_fwd_data = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__EX_rs2_fwd_data;
    top_tb__DOT__INST2__DOT__EX_rs2_fwd_data = 0;
    IData/*31:0*/ top_tb__DOT__INST2__DOT__MEM_rs2_data_final;
    top_tb__DOT__INST2__DOT__MEM_rs2_data_final = 0;
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
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    // Body
    vlSelfRef.top_tb__DOT__web = 0U;
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
        = (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rs2) 
            == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd)) 
           & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write) 
              | ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_MemWrite) 
                 & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_MemRead) 
                    & (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ValidReg) 
                        >> 2U) & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_ValidReg))))));
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
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
        = ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_PostFlush)
            ? 0U : vlSelfRef.top_tb__DOT__doa);
    top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__dob, 
                        VL_SHIFTL_III(32,32,32, (3U 
                                                 & vlSelfRef.top_tb__DOT__INST2__DOT__WB_ALU_result), 3U));
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd 
        = (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2) 
            == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd)) 
           & (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ValidReg) 
               >> 2U) & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_ValidReg)));
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd 
        = (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1) 
            == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd)) 
           & (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ValidReg) 
               >> 1U) & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_ValidReg)));
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd 
        = (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2) 
            == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rd)) 
           & ((~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_MemRead)) 
              & (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ValidReg) 
                  >> 2U) & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ValidReg))));
    top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd 
        = (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1) 
            == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rd)) 
           & ((~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_MemRead)) 
              & (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ValidReg) 
                  >> 1U) & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ValidReg))));
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
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_imm = ((0x00000040U 
                                                  & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                  ? 
                                                 ((0x00000020U 
                                                   & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                    ? top_tb__DOT__INST2__DOT__INST4__DOT__imm1
                                                    : 
                                                   ((8U 
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
                                                  : 
                                                 ((0x00000010U 
                                                   & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(top_tb__DOT__INST2__DOT__INST4__DOT__opcode))
                                                    ? top_tb__DOT__INST2__DOT__INST4__DOT__imm1
                                                    : 
                                                   ((4U 
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
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_ALUOp = Vtop_tb__ConstPool__TABLE_h4ae872a6_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc = 
        Vtop_tb__ConstPool__TABLE_h173db05d_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_ALUSrc = 
        Vtop_tb__ConstPool__TABLE_h360848ef_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegWrite 
        = Vtop_tb__ConstPool__TABLE_h67a4a39b_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_MemRead = 
        Vtop_tb__ConstPool__TABLE_h07b8af5e_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_MemWrite 
        = Vtop_tb__ConstPool__TABLE_hc64fce2b_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch = 
        Vtop_tb__ConstPool__TABLE_hf4dbd913_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_Jump = Vtop_tb__ConstPool__TABLE_haff683e6_0
        [__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_ValidReg 
        = Vtop_tb__ConstPool__TABLE_h225d1e3e_0[__Vtableidx1];
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_CSR = Vtop_tb__ConstPool__TABLE_hb235b974_0
        [__Vtableidx1];
    top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_result 
        = ((4U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
            ? ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
                ? 0U : ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
                         ? (0x0000ffffU & top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word)
                         : (0x000000ffU & top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word)))
            : ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
                ? ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
                    ? 0U : top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word)
                : ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
                    ? (((- (IData)((1U & (top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word 
                                          >> 0x0000000fU)))) 
                        << 0x00000010U) | (0x0000ffffU 
                                           & top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word))
                    : (((- (IData)((1U & (top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word 
                                          >> 7U)))) 
                        << 8U) | (0x000000ffU & top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word)))));
    vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data 
        = ((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_RegSrc))
            ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_ALU_result
            : ((1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_RegSrc))
                ? top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_result
                : ((2U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_RegSrc))
                    ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_pc_imm
                    : ((3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_RegSrc))
                        ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_pc_4
                        : ((4U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_RegSrc))
                            ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_value
                            : 0U)))));
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_imm = 
        (vlSelfRef.top_tb__DOT__INST2__DOT__ID_imm 
         + vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc);
    __Vtableidx2 = ((((0x0000000eU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                      >> 0x0000000bU)) 
                      | (1U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                               >> 0x0000001eU))) << 3U) 
                    | ((4U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                              >> 3U)) | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ALUOp)));
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_field = Vtop_tb__ConstPool__TABLE_hdb653689_0
        [__Vtableidx2];
    __VdfgRegularize_h6e95ff9d_0_2 = (((0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rd)) 
                                       & (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rd) 
                                           == (0x0000001fU 
                                               & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                  >> 0x0000000fU))) 
                                          & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ValidReg) 
                                             >> 1U))) 
                                      | (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rd) 
                                          == (0x0000001fU 
                                              & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                 >> 0x00000014U))) 
                                         & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ValidReg) 
                                            >> 2U)));
    if (vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write) {
        vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data 
            = ((4U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
                ? ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
                    ? ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
                        ? (vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_value 
                           & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rs1)))
                        : (vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_value 
                           | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rs1)))
                    : ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
                        ? (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rs1)
                        : 0U)) : ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
                                   ? ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
                                       ? (vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_value 
                                          & (~ vlSelfRef.top_tb__DOT__INST2__DOT__WB_rs1_data))
                                       : (vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_value 
                                          | vlSelfRef.top_tb__DOT__INST2__DOT__WB_rs1_data))
                                   : ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3))
                                       ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rs1_data
                                       : 0U)));
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_csr_value 
        = (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_CSR) 
            & (IData)((0x00001000U != (0x00003f80U 
                                       & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))
            ? ((0x0b00U == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                            >> 0x00000014U)) ? (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_addr) 
                                                 == 
                                                 (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                  >> 0x00000014U))
                                                 ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                                 : (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__mcycle))
                : ((0x0b02U == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                >> 0x00000014U)) ? 
                   (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_addr) 
                     == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                         >> 0x00000014U)) ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                     : vlSelfRef.top_tb__DOT__INST2__DOT__minstret)
                    : ((0x0b03U == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                    >> 0x00000014U))
                        ? (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_addr) 
                            == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                >> 0x00000014U)) ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                            : vlSelfRef.top_tb__DOT__INST2__DOT__correct_predictions)
                        : ((0x0b04U == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                        >> 0x00000014U))
                            ? (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_addr) 
                                == (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                    >> 0x00000014U))
                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                : vlSelfRef.top_tb__DOT__INST2__DOT__total_predictions)
                            : 0U)))) : 0U);
    vlSelfRef.top_tb__DOT__INST2__DOT__BTBwrite = ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) 
                                                   | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Jump));
    top_tb__DOT__INST2__DOT__MEM_rs2_data_final = (
                                                   ((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd) 
                                                    & (0U 
                                                       != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rs2)))
                                                    ? 
                                                   ((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd)
                                                     ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                                                     : 0U)
                                                    : vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rs2_data);
    top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data 
        = ((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_RegSrc))
            ? vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ALU_result
            : ((2U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_RegSrc))
                ? vlSelfRef.top_tb__DOT__INST2__DOT__MEM_pc_imm
                : ((3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_RegSrc))
                    ? vlSelfRef.top_tb__DOT__INST2__DOT__MEM_pc_4
                    : ((4U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_RegSrc))
                        ? vlSelfRef.top_tb__DOT__INST2__DOT__MEM_csr_value
                        : 0U))));
    top_tb__DOT__INST2__DOT__EX_rs1_fwd_data = ((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd)
                                                 ? top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data
                                                 : 0U);
    if (top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd) {
        top_tb__DOT__INST2__DOT__EX_rs1_fwd_data = 
            ((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd)
              ? (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rd) 
                  != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd))
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
              ? (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rd) 
                  != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd))
                  ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                  : top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data)
              : vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data);
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall = (
                                                   ((~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_MemWrite)) 
                                                    & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_MemRead))
                                                    ? (IData)(__VdfgRegularize_h6e95ff9d_0_2)
                                                    : 
                                                   ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_CSR) 
                                                    & ((~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_MemWrite)) 
                                                       & (IData)(__VdfgRegularize_h6e95ff9d_0_2))));
    top_tb__DOT__INST2__DOT__INST1__DOT__way_found = 0U;
    vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__victim_idx = 0U;
    if (vlSelfRef.top_tb__DOT__INST2__DOT__MEM_MemWrite) {
        vlSelfRef.top_tb__DOT__web = (0x0000000fU & 
                                      ((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_funct3))
                                        ? ((IData)(1U) 
                                           << (3U & vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ALU_result))
                                        : ((1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_funct3))
                                            ? ((IData)(3U) 
                                               << (3U 
                                                   & vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ALU_result))
                                            : ((2U 
                                                == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_funct3))
                                                ? 0x0fU
                                                : 0U))));
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
    vlSelfRef.top_tb__DOT__dib = 0U;
    if (vlSelfRef.top_tb__DOT__INST2__DOT__MEM_MemWrite) {
        vlSelfRef.top_tb__DOT__dib = ((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_funct3))
                                       ? (((~ ((IData)(0x000000ffU) 
                                               << (0x0000001fU 
                                                   & VL_SHIFTL_III(5,32,32, 
                                                                   (3U 
                                                                    & vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ALU_result), 3U)))) 
                                           & vlSelfRef.top_tb__DOT__dib) 
                                          | (0x00000000ffffffffULL 
                                             & ((0x000000ffU 
                                                 & top_tb__DOT__INST2__DOT__MEM_rs2_data_final) 
                                                << 
                                                (0x0000001fU 
                                                 & VL_SHIFTL_III(5,32,32, 
                                                                 (3U 
                                                                  & vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ALU_result), 3U)))))
                                       : ((1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_funct3))
                                           ? (((~ ((IData)(0x0000ffffU) 
                                                   << 
                                                   (0x0000001fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (3U 
                                                                     & vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ALU_result), 3U)))) 
                                               & vlSelfRef.top_tb__DOT__dib) 
                                              | (0x00000000ffffffffULL 
                                                 & ((0x0000ffffU 
                                                     & top_tb__DOT__INST2__DOT__MEM_rs2_data_final) 
                                                    << 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (3U 
                                                                      & vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ALU_result), 3U)))))
                                           : ((2U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_funct3))
                                               ? top_tb__DOT__INST2__DOT__MEM_rs2_data_final
                                               : 0U)));
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_data_final 
        = ((((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd) 
             | (IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd)) 
            & (0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2)))
            ? top_tb__DOT__INST2__DOT__EX_rs2_fwd_data
            : vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_data);
    vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_data_final 
        = ((((IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd) 
             | (IData)(top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd)) 
            & (0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1)))
            ? top_tb__DOT__INST2__DOT__EX_rs1_fwd_data
            : vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_data);
    vlSelfRef.top_tb__DOT____Vcellinp__INST1__addra 
        = (0x000fffffU & (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall)
                            ? vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc
                            : vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc) 
                          >> 2U));
    top_tb__DOT__INST2__DOT__EX_op2 = ((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALUSrc))
                                        ? vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_data_final
                                        : ((1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALUSrc))
                                            ? vlSelfRef.top_tb__DOT__INST2__DOT__EX_imm
                                            : vlSelfRef.top_tb__DOT__INST2__DOT__EX_csr_value));
    top_tb__DOT__INST2__DOT__EX_op1 = (((1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALUOp)) 
                                        & ((1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALUSrc)) 
                                           & ((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_RegSrc)) 
                                              & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_RegWrite))))
                                        ? 0U : vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_data_final);
    top_tb__DOT__INST2__DOT__EX_carry = 0U;
    if ((8U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field)))) {
                    top_tb__DOT__INST2__DOT__EX_carry 
                        = (1U & (IData)((1ULL & (((QData)((IData)(top_tb__DOT__INST2__DOT__EX_op1)) 
                                                  - (QData)((IData)(top_tb__DOT__INST2__DOT__EX_op2))) 
                                                 >> 0x00000020U))));
                }
            }
        }
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result 
            = ((4U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))
                ? ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))
                    ? 0U : ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))
                             ? VL_SHIFTRS_III(32,32,5, top_tb__DOT__INST2__DOT__EX_op1, 
                                              (0x0000001fU 
                                               & top_tb__DOT__INST2__DOT__EX_op2))
                             : 0U)) : ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))
                                                 ? 0U
                                                 : 
                                                (top_tb__DOT__INST2__DOT__EX_op1 
                                                 - top_tb__DOT__INST2__DOT__EX_op2))));
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field)))) {
                    top_tb__DOT__INST2__DOT__EX_carry 
                        = (1U & (IData)((1ULL & (((QData)((IData)(top_tb__DOT__INST2__DOT__EX_op1)) 
                                                  + (QData)((IData)(top_tb__DOT__INST2__DOT__EX_op2))) 
                                                 >> 0x00000020U))));
                }
            }
        }
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result 
            = ((4U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))
                ? ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))
                    ? ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))
                        ? (top_tb__DOT__INST2__DOT__EX_op1 
                           & top_tb__DOT__INST2__DOT__EX_op2)
                        : (top_tb__DOT__INST2__DOT__EX_op1 
                           | top_tb__DOT__INST2__DOT__EX_op2))
                    : ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))
                        ? (top_tb__DOT__INST2__DOT__EX_op1 
                           >> (0x0000001fU & top_tb__DOT__INST2__DOT__EX_op2))
                        : (top_tb__DOT__INST2__DOT__EX_op1 
                           ^ top_tb__DOT__INST2__DOT__EX_op2)))
                : ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))
                    ? ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))
                        ? (top_tb__DOT__INST2__DOT__EX_op1 
                           < top_tb__DOT__INST2__DOT__EX_op2)
                        : VL_LTS_III(32, top_tb__DOT__INST2__DOT__EX_op1, top_tb__DOT__INST2__DOT__EX_op2))
                    : ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field))
                        ? (top_tb__DOT__INST2__DOT__EX_op1 
                           << (0x0000001fU & top_tb__DOT__INST2__DOT__EX_op2))
                        : (top_tb__DOT__INST2__DOT__EX_op1 
                           + top_tb__DOT__INST2__DOT__EX_op2))));
    }
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
    vlSelfRef.top_tb__DOT__INST2__DOT__EX_Flush = 0U;
    vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 0U;
    if ((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) 
          | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Jump)) 
         & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BTBhit)))) {
        if (vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) {
            if (((2U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction)) 
                 | (3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction)))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
            }
        } else if (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Jump) 
                    & (0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ALUSrc)))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
        }
    }
    vlSelfRef.top_tb__DOT__INST2__DOT__next_pc = ((IData)(4U) 
                                                  + vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc);
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
          | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Jump)) 
         & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BTBhit)))) {
        if (vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch) {
            if (((2U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction)) 
                 | (3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction)))) {
                vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
                    = vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_imm;
            }
        } else if (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Jump) 
                    & (0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ALUSrc)))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
                = vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_imm;
        }
    }
    if (vlSelfRef.top_tb__DOT__INST2__DOT__EX_Branch) {
        vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter 
            = (1U & ((4U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_funct3))
                      ? ((2U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_funct3))
                          ? ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_funct3))
                              ? (~ (IData)(top_tb__DOT__INST2__DOT__EX_carry))
                              : (IData)(top_tb__DOT__INST2__DOT__EX_carry))
                          : ((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_funct3))
                              ? (~ (VL_GTS_III(32, 0U, vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result) 
                                    ^ (IData)(top_tb__DOT__INST2__DOT__EX_overflow)))
                              : (VL_GTS_III(32, 0U, vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result) 
                                 ^ (IData)(top_tb__DOT__INST2__DOT__EX_overflow))))
                      : ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_funct3) 
                                   >> 1U))) && ((1U 
                                                 & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_funct3))
                                                 ? 
                                                (0U 
                                                 != vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)
                                                 : 
                                                (0U 
                                                 == vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)))));
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status 
            = ((((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_branch_prediction)) 
                 | (1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_branch_prediction))) 
                & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter))
                ? 0U : ((((2U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_branch_prediction)) 
                          | (3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_branch_prediction))) 
                         & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter)))
                         ? 1U : ((((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_branch_prediction)) 
                                   | (1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_branch_prediction))) 
                                  & (~ (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter)))
                                  ? 2U : ((((2U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_branch_prediction)) 
                                            | (3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_branch_prediction))) 
                                           & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter))
                                           ? 3U : 0U))));
        if ((0U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__EX_Flush = 1U;
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
            vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
                = vlSelfRef.top_tb__DOT__INST2__DOT__EX_pc_imm;
        } else if ((1U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status))) {
            vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
            vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
                = vlSelfRef.top_tb__DOT__INST2__DOT__EX_pc_4;
        }
    } else if (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_Jump) 
                & (0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALUSrc)))) {
        vlSelfRef.top_tb__DOT__INST2__DOT__EX_Flush = 1U;
        vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush = 1U;
        vlSelfRef.top_tb__DOT__INST2__DOT__next_pc 
            = (0xfffffffeU & vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result);
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
    vlSelf->top_tb__DOT____Vcellinp__INST1__addra = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 12466527335744865955ull);
    VL_SCOPED_RAND_RESET_W(8000, vlSelf->top_tb__DOT__program_file, __VscopeHash, 1101078386483316854ull);
    vlSelf->top_tb__DOT__RVMODEL_DATA_BEGIN = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2635610246748856821ull);
    vlSelf->top_tb__DOT__RVMODEL_DATA_END = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9466641019508248057ull);
    vlSelf->top_tb__DOT__tohost = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1030470667926345800ull);
    vlSelf->top_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6651770975129235105ull);
    vlSelf->top_tb__DOT__fd = 0;
    for (int __Vi0 = 0; __Vi0 < 606208; ++__Vi0) {
        vlSelf->top_tb__DOT__INST1__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5830564721699294562ull);
    }
    vlSelf->top_tb__DOT__INST1__DOT____Vlvbound_h67f57f0a__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14005672768346208907ull);
    vlSelf->top_tb__DOT__INST1__DOT____Vlvbound_hfa028462__0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15970971304031839011ull);
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
    vlSelf->top_tb__DOT__INST2__DOT__ID_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 184210554482181590ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_pc_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3600086023010565866ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_csr_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 272724397726021458ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_Stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14771334881966902701ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_Flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7676161605972120793ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 997106796088091166ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 448416769295364246ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638948605754537156ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6168863462168853207ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7141157834282927677ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_CSR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 792764119188206245ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_ValidReg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9749203086578221837ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_RegSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14870417236464925893ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13384588700930832542ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_ALUSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8434559523358453258ull);
    vlSelf->top_tb__DOT__INST2__DOT__ID_field = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3255668023821340352ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_field = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9652333433850329063ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_ValidReg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1871408203527306107ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10749182701827452859ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_RegSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9355709900029358753ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6989843849344744456ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_branch_prediction = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10952287492000793021ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_ALUSrc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17469896753531884295ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 409306054517219438ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12768175939171147321ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13639120525659188158ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10567509680114894173ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8237789066768127158ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_csr_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13956603227831516861ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_CSR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17937335925123890653ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_pc_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5678446672882582805ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2564230886710498393ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6293314584464705059ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8204724098542481773ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_pc_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1355317966857919280ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_csr_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10998477549224785079ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2797782353037937921ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8263607715686733942ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1623411104541393317ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_BHTaddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4438748195450248180ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7297357123141248057ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_Flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7278166293561406462ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_rs1_data_final = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9657495953999008246ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_rs2_data_final = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 59035115695024191ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_ALU_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6072939614124549545ull);
    vlSelf->top_tb__DOT__INST2__DOT__EX_prediction_status = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13497278641024929517ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_pc_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12727402355530937731ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16035835729724196963ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_ValidReg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9947924420280892201ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_RegSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15613292434111045643ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7271856673460300558ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13907567179457496344ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14483220542677329960ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_csr_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6230581156210145441ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_pc_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2892759394599482470ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_ALU_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7451722442051818836ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15542800513718682259ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_csr_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2587762601081871537ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17157979659749434778ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12203283192706861590ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3865891516634908503ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1595506754293896307ull);
    vlSelf->top_tb__DOT__INST2__DOT__MEM_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11636719112865076950ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_pc_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15040881362909455392ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_pc_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17627745986207388951ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_ALU_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13076884545968884657ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_csr_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12717924258179708550ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16734128547363762297ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2578098202404565276ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_ValidReg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 429194044011360491ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_RegSrc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4959726504186806961ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12868508909493389051ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8258345096064223812ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_csr_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9038636732288631098ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8375662145693157606ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14371594665423170060ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15324957977014302999ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_rd_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3026663662032268569ull);
    vlSelf->top_tb__DOT__INST2__DOT__WB_csr_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13560853529444039317ull);
    vlSelf->top_tb__DOT__INST2__DOT__mcycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3487167792893197456ull);
    vlSelf->top_tb__DOT__INST2__DOT__minstret = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15918319832183886533ull);
    vlSelf->top_tb__DOT__INST2__DOT__correct_predictions = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13898661779202527256ull);
    vlSelf->top_tb__DOT__INST2__DOT__total_predictions = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4225180747994058959ull);
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
