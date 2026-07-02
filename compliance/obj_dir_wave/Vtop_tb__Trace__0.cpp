// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top_tb__DOT__RVMODEL_DATA_END),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top_tb__DOT__tohost),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+3,(vlSelfRef.top_tb__DOT__INST2__DOT__web),4);
        bufp->chgSData(oldp+4,(vlSelfRef.top_tb__DOT__INST2__DOT__addra),15);
        bufp->chgSData(oldp+5,((0x00007fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                               >> 8U))),15);
        bufp->chgIData(oldp+6,(vlSelfRef.top_tb__DOT__doa),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top_tb__DOT__dob),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top_tb__DOT__dib),32);
        bufp->chgSData(oldp+9,(vlSelfRef.top_tb__DOT__led),16);
        bufp->chgSData(oldp+10,((0x00007fffU & VL_SHIFTR_III(15,15,32, (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__addra), 2U))),15);
        bufp->chgSData(oldp+11,((0x00007fffU & VL_SHIFTR_III(15,15,32, 
                                                             (0x00007fffU 
                                                              & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                                 >> 8U)), 2U))),15);
        bufp->chgIData(oldp+12,(vlSelfRef.top_tb__DOT__i),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top_tb__DOT__fd),32);
        bufp->chgSData(oldp+14,((0x00001fffU & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__addra) 
                                                >> 2U))),13);
        bufp->chgSData(oldp+15,((0x00001fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                >> 0x0000000aU))),13);
        bufp->chgIData(oldp+16,(vlSelfRef.top_tb__DOT__INST1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top_tb__DOT__INST1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top_tb__DOT__INST2__DOT__next_pc),32);
        bufp->chgIData(oldp+20,(((IData)(4U) + vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc)),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc_imm),32);
        bufp->chgBit(oldp+22,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_Branch));
        bufp->chgBit(oldp+23,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_Jump));
        bufp->chgBit(oldp+24,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__write));
        bufp->chgBit(oldp+25,((0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit))));
        bufp->chgCData(oldp+26,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_BHTaddr),8);
        bufp->chgCData(oldp+27,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_branch_prediction),2);
        bufp->chgIData(oldp+28,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_4),32);
        bufp->chgCData(oldp+30,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BHTaddr),8);
        bufp->chgCData(oldp+31,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction),2);
        bufp->chgBit(oldp+32,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BTBhit));
        bufp->chgIData(oldp+33,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_imm),32);
        bufp->chgIData(oldp+35,((((vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
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
                                                  >> 0x0000000fU))])),32);
        bufp->chgIData(oldp+36,((((vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                   >> 2U) & (((0x0000001fU 
                                               & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                  >> 0x00000019U)) 
                                              == (0x0000001fU 
                                                  & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                     >> 0x00000014U))) 
                                             & (0U 
                                                != 
                                                (0x0000001fU 
                                                 & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                    >> 0x00000014U)))))
                                  ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                                  : vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file
                                 [(0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                  >> 0x00000014U))])),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__pc_imm_in),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_csr_value),32);
        bufp->chgCData(oldp+39,((0x0000007fU & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)),7);
        bufp->chgCData(oldp+40,((vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                 >> 0x00000019U)),7);
        bufp->chgCData(oldp+41,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                >> 7U))),5);
        bufp->chgCData(oldp+42,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+43,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+44,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+45,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ValidReg),3);
        bufp->chgCData(oldp+46,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc),3);
        bufp->chgSData(oldp+47,((vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                 >> 0x00000014U)),12);
        bufp->chgCData(oldp+48,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_field),4);
        bufp->chgCData(oldp+49,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ALUOp),2);
        bufp->chgCData(oldp+50,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ALUSrc),2);
        bufp->chgBit(oldp+51,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall));
        bufp->chgBit(oldp+52,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush));
        bufp->chgBit(oldp+53,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegWrite));
        bufp->chgBit(oldp+54,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_MemRead));
        bufp->chgBit(oldp+55,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_MemWrite));
        bufp->chgBit(oldp+56,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Valid));
        bufp->chgBit(oldp+57,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch));
        bufp->chgBit(oldp+58,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Jump));
        bufp->chgBit(oldp+59,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_CSR));
        bufp->chgBit(oldp+60,(((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_CSR) 
                               & (IData)((0x00002000U 
                                          != (0x000fa000U 
                                              & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))));
        bufp->chgWData(oldp+61,(vlSelfRef.top_tb__DOT__INST2__DOT__EX),285);
        bufp->chgWData(oldp+70,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_n),285);
        bufp->chgIData(oldp+79,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_op1),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_op2),32);
        bufp->chgIData(oldp+81,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_fwd_data),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_fwd_data),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_data_final),32);
        bufp->chgIData(oldp+84,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_data_final),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result),32);
        bufp->chgIData(oldp+86,((((0x00000fffU & ((
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                   << 6U) 
                                                  | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                     >> 0x0000001aU))) 
                                  == (0x00000fffU & 
                                      (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                       >> 0x0000000dU)))
                                  ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                  : ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[2U] 
                                      << 3U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                >> 0x0000001dU)))),32);
        bufp->chgCData(oldp+87,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status),2);
        bufp->chgBit(oldp+88,((0U == vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)));
        bufp->chgBit(oldp+89,(VL_GTS_III(32, 0U, vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)));
        bufp->chgBit(oldp+90,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_overflow));
        bufp->chgBit(oldp+91,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_carry));
        bufp->chgBit(oldp+92,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_Flush));
        bufp->chgBit(oldp+93,(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter));
        bufp->chgBit(oldp+94,((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd) 
                                | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd)) 
                               & (0U != (0x0000001fU 
                                         & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                            >> 0x00000010U))))));
        bufp->chgBit(oldp+95,((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd) 
                                | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd)) 
                               & (0U != (0x0000001fU 
                                         & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                            >> 0x0000000bU))))));
        bufp->chgBit(oldp+96,(((0x00000fffU & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                << 6U) 
                                               | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                  >> 0x0000001aU))) 
                               == (0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                  >> 0x0000000dU)))));
        bufp->chgWData(oldp+97,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM),264);
        bufp->chgIData(oldp+106,(((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd)
                                   ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                                   : 0U)),32);
        bufp->chgIData(oldp+107,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rs2_data_final),32);
        bufp->chgIData(oldp+108,((((0x00000fffU & (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                   >> 0x0000000dU)) 
                                   == (0x00000fffU 
                                       & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                          >> 0x0000000dU)))
                                   ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                   : ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[3U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[2U] 
                                         >> 8U)))),32);
        bufp->chgBit(oldp+109,(((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd) 
                                & (0U != (0x0000001fU 
                                          & ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[1U] 
                                              << 2U) 
                                             | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                >> 0x0000001eU)))))));
        bufp->chgBit(oldp+110,(((0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                >> 0x0000000dU)) 
                                == (0x00000fffU & (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                   >> 0x0000000dU)))));
        bufp->chgBit(oldp+111,((0x00007700U <= ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                                 << 0x00000018U) 
                                                | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                   >> 8U)))));
        bufp->chgBit(oldp+112,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_Flush));
        bufp->chgCData(oldp+113,(vlSelfRef.top_tb__DOT__INST2__DOT__web_io),4);
        bufp->chgCData(oldp+114,(vlSelfRef.top_tb__DOT__INST2__DOT__web_final),4);
        bufp->chgWData(oldp+115,(vlSelfRef.top_tb__DOT__INST2__DOT__WB),227);
        bufp->chgIData(oldp+123,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data),32);
        bufp->chgIData(oldp+124,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data),32);
        bufp->chgIData(oldp+125,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_io_data),32);
        bufp->chgIData(oldp+126,(((1U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                                   ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_io_data
                                   : vlSelfRef.top_tb__DOT__dob)),32);
        bufp->chgQData(oldp+127,(vlSelfRef.top_tb__DOT__INST2__DOT__mstatus),64);
        bufp->chgQData(oldp+129,(vlSelfRef.top_tb__DOT__INST2__DOT__mcycle),64);
        bufp->chgQData(oldp+131,(vlSelfRef.top_tb__DOT__INST2__DOT__minstret),64);
        bufp->chgQData(oldp+133,(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3),64);
        bufp->chgQData(oldp+135,(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4),64);
        bufp->chgQData(oldp+137,(vlSelfRef.top_tb__DOT__INST2__DOT__menvcfg),64);
        bufp->chgQData(oldp+139,(vlSelfRef.top_tb__DOT__INST2__DOT__mtime),64);
        bufp->chgQData(oldp+141,(vlSelfRef.top_tb__DOT__INST2__DOT__mtimecmp),64);
        bufp->chgIData(oldp+143,(vlSelfRef.top_tb__DOT__INST2__DOT__misa),32);
        bufp->chgIData(oldp+144,(vlSelfRef.top_tb__DOT__INST2__DOT__mvendorid),32);
        bufp->chgIData(oldp+145,(vlSelfRef.top_tb__DOT__INST2__DOT__marchid),32);
        bufp->chgIData(oldp+146,(vlSelfRef.top_tb__DOT__INST2__DOT__mimpid),32);
        bufp->chgIData(oldp+147,(vlSelfRef.top_tb__DOT__INST2__DOT__mhartid),32);
        bufp->chgIData(oldp+148,(vlSelfRef.top_tb__DOT__INST2__DOT__mtvec),32);
        bufp->chgIData(oldp+149,(((IData)(vlSelfRef.top_tb__DOT__INST2__DOT____VdfgRegularize_hdb8421e2_0_0) 
                                  << 7U)),32);
        bufp->chgIData(oldp+150,(vlSelfRef.top_tb__DOT__INST2__DOT__mie),32);
        bufp->chgIData(oldp+151,(vlSelfRef.top_tb__DOT__INST2__DOT__mcounteren),32);
        bufp->chgIData(oldp+152,(vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit),32);
        bufp->chgIData(oldp+153,(vlSelfRef.top_tb__DOT__INST2__DOT__mscratch),32);
        bufp->chgIData(oldp+154,(vlSelfRef.top_tb__DOT__INST2__DOT__mepc),32);
        bufp->chgIData(oldp+155,(vlSelfRef.top_tb__DOT__INST2__DOT__mcause),32);
        bufp->chgIData(oldp+156,(vlSelfRef.top_tb__DOT__INST2__DOT__mtval),32);
        bufp->chgIData(oldp+157,(vlSelfRef.top_tb__DOT__INST2__DOT__mconfigptr),32);
        bufp->chgIData(oldp+158,(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent3),32);
        bufp->chgIData(oldp+159,(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent4),32);
        bufp->chgCData(oldp+160,(vlSelfRef.top_tb__DOT__INST2__DOT__priv),2);
        bufp->chgCData(oldp+161,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status),4);
        bufp->chgCData(oldp+162,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status_n),4);
        bufp->chgCData(oldp+163,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[0]),6);
        bufp->chgCData(oldp+164,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[1]),6);
        bufp->chgCData(oldp+165,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[2]),6);
        bufp->chgCData(oldp+166,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[3]),6);
        bufp->chgCData(oldp+167,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[0]),6);
        bufp->chgCData(oldp+168,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[1]),6);
        bufp->chgCData(oldp+169,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[2]),6);
        bufp->chgCData(oldp+170,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[3]),6);
        bufp->chgBit(oldp+171,(vlSelfRef.top_tb__DOT__INST2__DOT__critical_error));
        bufp->chgBit(oldp+172,(vlSelfRef.top_tb__DOT__INST2__DOT__misaligned_fetch));
        bufp->chgBit(oldp+173,(vlSelfRef.top_tb__DOT__INST2__DOT__trap_active));
        bufp->chgBit(oldp+174,(vlSelfRef.top_tb__DOT__INST2__DOT__interrupt_taken));
        bufp->chgBit(oldp+175,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__trap_entry));
        bufp->chgCData(oldp+176,(vlSelfRef.top_tb__DOT__INST2__DOT__gh),8);
        bufp->chgBit(oldp+177,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_PostFlush));
        bufp->chgIData(oldp+178,((vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                                  >> 2U)),30);
        bufp->chgIData(oldp+179,((vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                  >> 2U)),30);
        bufp->chgQData(oldp+180,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0U][0U]),61);
        bufp->chgQData(oldp+182,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0U][1U]),61);
        bufp->chgQData(oldp+184,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [1U][0U]),61);
        bufp->chgQData(oldp+186,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [1U][1U]),61);
        bufp->chgQData(oldp+188,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [2U][0U]),61);
        bufp->chgQData(oldp+190,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [2U][1U]),61);
        bufp->chgQData(oldp+192,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [3U][0U]),61);
        bufp->chgQData(oldp+194,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [3U][1U]),61);
        bufp->chgQData(oldp+196,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [4U][0U]),61);
        bufp->chgQData(oldp+198,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [4U][1U]),61);
        bufp->chgQData(oldp+200,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [5U][0U]),61);
        bufp->chgQData(oldp+202,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [5U][1U]),61);
        bufp->chgQData(oldp+204,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [6U][0U]),61);
        bufp->chgQData(oldp+206,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [6U][1U]),61);
        bufp->chgQData(oldp+208,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [7U][0U]),61);
        bufp->chgQData(oldp+210,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [7U][1U]),61);
        bufp->chgQData(oldp+212,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [8U][0U]),61);
        bufp->chgQData(oldp+214,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [8U][1U]),61);
        bufp->chgQData(oldp+216,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [9U][0U]),61);
        bufp->chgQData(oldp+218,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [9U][1U]),61);
        bufp->chgQData(oldp+220,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000aU][0U]),61);
        bufp->chgQData(oldp+222,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000aU][1U]),61);
        bufp->chgQData(oldp+224,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000bU][0U]),61);
        bufp->chgQData(oldp+226,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000bU][1U]),61);
        bufp->chgQData(oldp+228,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000cU][0U]),61);
        bufp->chgQData(oldp+230,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000cU][1U]),61);
        bufp->chgQData(oldp+232,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000dU][0U]),61);
        bufp->chgQData(oldp+234,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000dU][1U]),61);
        bufp->chgQData(oldp+236,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000eU][0U]),61);
        bufp->chgQData(oldp+238,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000eU][1U]),61);
        bufp->chgQData(oldp+240,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000fU][0U]),61);
        bufp->chgQData(oldp+242,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000fU][1U]),61);
        bufp->chgIData(oldp+244,((vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                                  >> 6U)),26);
        bufp->chgIData(oldp+245,((vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                  >> 6U)),26);
        bufp->chgCData(oldp+246,((0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                                                 >> 2U))),4);
        bufp->chgCData(oldp+247,((0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                                 >> 2U))),4);
        bufp->chgQData(oldp+248,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines
                                 [0U]),61);
        bufp->chgQData(oldp+250,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines
                                 [1U]),61);
        bufp->chgQData(oldp+252,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines
                                 [0U]),61);
        bufp->chgQData(oldp+254,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines
                                 [1U]),61);
        bufp->chgCData(oldp+256,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit),2);
        bufp->chgCData(oldp+257,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid),2);
        bufp->chgBit(oldp+258,((3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid))));
        bufp->chgBit(oldp+259,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__way_found));
        bufp->chgBit(oldp+260,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__victim_idx));
        bufp->chgIData(oldp+261,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+262,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+263,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
        bufp->chgIData(oldp+264,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+265,(((vlSelfRef.top_tb__DOT__INST2__DOT__WB[4U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                     >> 3U))),32);
        bufp->chgIData(oldp+266,(((vlSelfRef.top_tb__DOT__INST2__DOT__WB[5U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[4U] 
                                     >> 3U))),32);
        bufp->chgIData(oldp+267,(((vlSelfRef.top_tb__DOT__INST2__DOT__WB[6U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[5U] 
                                     >> 3U))),32);
        bufp->chgIData(oldp+268,(((vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                                     >> 3U))),32);
        bufp->chgCData(oldp+269,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                        >> 0x0000000aU))),3);
        bufp->chgCData(oldp+270,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                        >> 4U))),3);
        bufp->chgCData(oldp+271,((3U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                        >> 3U))),2);
        bufp->chgIData(oldp+272,(vlSelfRef.top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word),32);
        bufp->chgIData(oldp+273,(vlSelfRef.top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_result),32);
        bufp->chgCData(oldp+274,((3U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                        >> 9U))),2);
        bufp->chgBit(oldp+275,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+276,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                      >> 2U))));
        bufp->chgIData(oldp+277,(((vlSelfRef.top_tb__DOT__INST2__DOT__EX[7U] 
                                   << 3U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] 
                                             >> 0x0000001dU))),32);
        bufp->chgIData(oldp+278,(((vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] 
                                   << 3U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[5U] 
                                             >> 0x0000001dU))),32);
        bufp->chgIData(oldp+279,(((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+280,(((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[7U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[6U] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+281,(((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[6U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                     >> 8U))),32);
        bufp->chgIData(oldp+282,(((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[3U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[2U] 
                                     >> 8U))),32);
        bufp->chgCData(oldp+283,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                        >> 4U))),3);
        bufp->chgCData(oldp+284,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                 >> 0x00000010U))),5);
        bufp->chgCData(oldp+285,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                 >> 0x0000000bU))),5);
        bufp->chgCData(oldp+286,((0x0000001fU & ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[1U] 
                                                  << 2U) 
                                                 | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                    >> 0x0000001eU)))),5);
        bufp->chgCData(oldp+287,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                 >> 0x00000019U))),5);
        bufp->chgCData(oldp+288,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                 >> 0x00000019U))),5);
        bufp->chgBit(oldp+289,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                      >> 0x00000011U))));
        bufp->chgBit(oldp+290,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                      >> 0x00000012U))));
        bufp->chgBit(oldp+291,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+292,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+293,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+294,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+295,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+296,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+297,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                      >> 1U))));
        bufp->chgSData(oldp+298,((0x00000fffU & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                  << 6U) 
                                                 | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                    >> 0x0000001aU)))),12);
        bufp->chgSData(oldp+299,((0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                 >> 0x0000000dU))),12);
        bufp->chgSData(oldp+300,((0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                 >> 0x0000000dU))),12);
        bufp->chgBit(oldp+301,(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd));
        bufp->chgBit(oldp+302,(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd));
        bufp->chgBit(oldp+303,(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd));
        bufp->chgBit(oldp+304,(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd));
        bufp->chgBit(oldp+305,(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd));
        bufp->chgIData(oldp+306,(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data),32);
        bufp->chgBit(oldp+307,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                      >> 5U))));
        bufp->chgBit(oldp+308,((1U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])));
        bufp->chgCData(oldp+309,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                 >> 6U))),5);
        bufp->chgBit(oldp+310,((1U & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ValidReg) 
                                      >> 1U))));
        bufp->chgBit(oldp+311,((1U & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ValidReg) 
                                      >> 2U))));
        bufp->chgBit(oldp+312,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                      >> 2U))));
        bufp->chgIData(oldp+313,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+314,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+315,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+316,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+317,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+318,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+319,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+320,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+321,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+322,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+323,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+324,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+325,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+326,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+327,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+328,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+329,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+330,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+331,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+332,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+333,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+334,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+335,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+336,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+337,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+338,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+339,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+340,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+341,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+342,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+343,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+344,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[31]),32);
        bufp->chgIData(oldp+345,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+346,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__opcode),7);
        bufp->chgCData(oldp+347,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__funct3),3);
        bufp->chgSData(oldp+348,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1),12);
        bufp->chgIData(oldp+349,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2),20);
        bufp->chgIData(oldp+350,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__imm1),32);
        bufp->chgIData(oldp+351,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__imm2),32);
        bufp->chgIData(oldp+352,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__imm3),32);
        bufp->chgIData(oldp+353,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__imm4),32);
        bufp->chgBit(oldp+354,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+355,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                      >> 5U))));
        bufp->chgCData(oldp+356,((0x0000001fU & ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] 
                                                  << 2U) 
                                                 | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                    >> 0x0000001eU)))),5);
        bufp->chgIData(oldp+357,(((vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                                   << 0x0000001dU) 
                                  | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] 
                                     >> 3U))),32);
        bufp->chgCData(oldp+358,((0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                 >> 0x00000016U))),4);
        bufp->chgCData(oldp+359,((3U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                        >> 7U))),2);
        bufp->chgCData(oldp+360,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                        >> 0x00000013U))),3);
        bufp->chgCData(oldp+361,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                        >> 0x0000000aU))),3);
        bufp->chgCData(oldp+362,((3U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                        >> 8U))),2);
        bufp->chgIData(oldp+363,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+364,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+365,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+366,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+367,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+368,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+369,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+370,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk8__DOT__i),32);
    }
    bufp->chgBit(oldp+371,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+372,(vlSelfRef.clk));
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
