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
        bufp->chgIData(oldp+3,(vlSelfRef.top_tb__DOT__INST1__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+4,(vlSelfRef.top_tb__DOT__web),4);
        bufp->chgIData(oldp+5,(vlSelfRef.top_tb__DOT__INST2__DOT__addra),22);
        bufp->chgIData(oldp+6,((0x003fffffU & vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ALU_result)),22);
        bufp->chgIData(oldp+7,(vlSelfRef.top_tb__DOT__doa),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top_tb__DOT__dob),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top_tb__DOT__dib),32);
        bufp->chgIData(oldp+10,((0x003fffffU & VL_SHIFTR_III(22,22,32, vlSelfRef.top_tb__DOT__INST2__DOT__addra, 2U))),22);
        bufp->chgIData(oldp+11,((0x003fffffU & VL_SHIFTR_III(22,22,32, 
                                                             (0x003fffffU 
                                                              & vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ALU_result), 2U))),22);
        bufp->chgIData(oldp+12,(vlSelfRef.top_tb__DOT__i),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top_tb__DOT__fd),32);
        bufp->chgIData(oldp+14,((0x000fffffU & (vlSelfRef.top_tb__DOT__INST2__DOT__addra 
                                                >> 2U))),20);
        bufp->chgIData(oldp+15,((0x000fffffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ALU_result 
                                                >> 2U))),20);
        bufp->chgIData(oldp+16,(vlSelfRef.top_tb__DOT__INST1__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top_tb__DOT__INST1__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top_tb__DOT__INST2__DOT__next_pc),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_4),32);
        bufp->chgCData(oldp+22,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BHTaddr),8);
        bufp->chgCData(oldp+23,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction),2);
        bufp->chgBit(oldp+24,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BTBhit));
        bufp->chgCData(oldp+25,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_field),4);
        bufp->chgCData(oldp+26,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ValidReg),3);
        bufp->chgCData(oldp+27,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_funct3),3);
        bufp->chgCData(oldp+28,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALUOp),2);
        bufp->chgCData(oldp+29,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_RegSrc),2);
        bufp->chgCData(oldp+30,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_branch_prediction),2);
        bufp->chgBit(oldp+31,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALUSrc));
        bufp->chgBit(oldp+32,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_RegWrite));
        bufp->chgBit(oldp+33,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_MemRead));
        bufp->chgBit(oldp+34,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_MemWrite));
        bufp->chgBit(oldp+35,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_Branch));
        bufp->chgBit(oldp+36,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_Jump));
        bufp->chgIData(oldp+37,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_pc_4),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_data),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_data),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_imm),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_pc_imm),32);
        bufp->chgCData(oldp+42,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1),5);
        bufp->chgCData(oldp+43,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2),5);
        bufp->chgCData(oldp+44,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rd),5);
        bufp->chgCData(oldp+45,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_BHTaddr),8);
        bufp->chgIData(oldp+46,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_pc_4),32);
        bufp->chgCData(oldp+47,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_funct3),3);
        bufp->chgCData(oldp+48,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ValidReg),3);
        bufp->chgCData(oldp+49,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_RegSrc),2);
        bufp->chgBit(oldp+50,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_MemRead));
        bufp->chgBit(oldp+51,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_MemWrite));
        bufp->chgBit(oldp+52,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_RegWrite));
        bufp->chgIData(oldp+53,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_pc_imm),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ALU_result),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rs2_data),32);
        bufp->chgCData(oldp+56,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rs2),5);
        bufp->chgCData(oldp+57,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rd),5);
        bufp->chgIData(oldp+58,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_pc_imm),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_pc_4),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_ALU_result),32);
        bufp->chgCData(oldp+61,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_funct3),3);
        bufp->chgCData(oldp+62,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_ValidReg),3);
        bufp->chgCData(oldp+63,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_RegSrc),2);
        bufp->chgBit(oldp+64,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_MemRead));
        bufp->chgBit(oldp+65,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_RegWrite));
        bufp->chgCData(oldp+66,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd),5);
        bufp->chgIData(oldp+67,(((IData)(4U) + vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc)),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc_imm),32);
        bufp->chgBit(oldp+69,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_Branch));
        bufp->chgBit(oldp+70,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_Jump));
        bufp->chgBit(oldp+71,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__write));
        bufp->chgBit(oldp+72,((0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit))));
        bufp->chgCData(oldp+73,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_BHTaddr),8);
        bufp->chgCData(oldp+74,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_branch_prediction),2);
        bufp->chgIData(oldp+75,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction),32);
        bufp->chgIData(oldp+76,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_imm),32);
        bufp->chgIData(oldp+77,((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_RegWrite) 
                                  & (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd) 
                                      == (0x0000001fU 
                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                             >> 0x0000000fU))) 
                                     & (0U != (0x0000001fU 
                                               & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                  >> 0x0000000fU)))))
                                  ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                                  : vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file
                                 [(0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                  >> 0x0000000fU))])),32);
        bufp->chgIData(oldp+78,((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_RegWrite) 
                                  & (((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd) 
                                      == (0x0000001fU 
                                          & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                             >> 0x00000014U))) 
                                     & (0U != (0x0000001fU 
                                               & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                  >> 0x00000014U)))))
                                  ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                                  : vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file
                                 [(0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                  >> 0x00000014U))])),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__pc_imm_in),32);
        bufp->chgCData(oldp+80,((0x0000007fU & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)),7);
        bufp->chgCData(oldp+81,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                >> 7U))),5);
        bufp->chgCData(oldp+82,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+83,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+84,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+85,((vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                 >> 0x00000019U)),7);
        bufp->chgBit(oldp+86,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall));
        bufp->chgBit(oldp+87,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush));
        bufp->chgBit(oldp+88,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ALUSrc));
        bufp->chgBit(oldp+89,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegWrite));
        bufp->chgBit(oldp+90,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_MemRead));
        bufp->chgBit(oldp+91,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_MemWrite));
        bufp->chgBit(oldp+92,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Valid));
        bufp->chgBit(oldp+93,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch));
        bufp->chgBit(oldp+94,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Jump));
        bufp->chgCData(oldp+95,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ValidReg),3);
        bufp->chgCData(oldp+96,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ALUOp),2);
        bufp->chgCData(oldp+97,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc),2);
        bufp->chgCData(oldp+98,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_field),4);
        bufp->chgBit(oldp+99,((0U == vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)));
        bufp->chgBit(oldp+100,(VL_GTS_III(32, 0U, vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)));
        bufp->chgBit(oldp+101,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_overflow));
        bufp->chgBit(oldp+102,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_carry));
        bufp->chgBit(oldp+103,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_Flush));
        bufp->chgBit(oldp+104,(vlSelfRef.top_tb__DOT__INST2__DOT__INST7__DOT__branch_taken_inter));
        bufp->chgBit(oldp+105,((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__EX_rs1_MEM_fwd) 
                                 | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__EX_rs1_WB_fwd)) 
                                & (0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1)))));
        bufp->chgBit(oldp+106,((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__EX_rs2_MEM_fwd) 
                                 | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__EX_rs2_WB_fwd)) 
                                & (0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2)))));
        bufp->chgIData(oldp+107,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_op1),32);
        bufp->chgIData(oldp+108,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_op2),32);
        bufp->chgIData(oldp+109,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_fwd_data),32);
        bufp->chgIData(oldp+110,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_fwd_data),32);
        bufp->chgIData(oldp+111,(((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__EX_rs1_MEM_fwd) 
                                    | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__EX_rs1_WB_fwd)) 
                                   & (0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1)))
                                   ? vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_fwd_data
                                   : vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_data)),32);
        bufp->chgIData(oldp+112,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_data_final),32);
        bufp->chgIData(oldp+113,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result),32);
        bufp->chgCData(oldp+114,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status),2);
        bufp->chgIData(oldp+115,(((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__MEM_rs2_WB_fwd)
                                   ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                                   : 0U)),32);
        bufp->chgIData(oldp+116,((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__MEM_rs2_WB_fwd) 
                                   & (0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rs2)))
                                   ? ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__MEM_rs2_WB_fwd)
                                       ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                                       : 0U) : vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rs2_data)),32);
        bufp->chgBit(oldp+117,(((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__MEM_rs2_WB_fwd) 
                                & (0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rs2)))));
        bufp->chgIData(oldp+118,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data),32);
        bufp->chgIData(oldp+119,(vlSelfRef.top_tb__DOT__INST2__DOT__clk_cycles),32);
        bufp->chgIData(oldp+120,(vlSelfRef.top_tb__DOT__INST2__DOT__invalid_clk_cycles),32);
        bufp->chgIData(oldp+121,(vlSelfRef.top_tb__DOT__INST2__DOT__retired_instructions),32);
        bufp->chgIData(oldp+122,(vlSelfRef.top_tb__DOT__INST2__DOT__correct_predictions),32);
        bufp->chgIData(oldp+123,(vlSelfRef.top_tb__DOT__INST2__DOT__total_predictions),32);
        bufp->chgCData(oldp+124,(vlSelfRef.top_tb__DOT__INST2__DOT__gh),8);
        bufp->chgBit(oldp+125,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_PostFlush));
        bufp->chgIData(oldp+126,(vlSelfRef.top_tb__DOT__INST2__DOT__i),32);
        bufp->chgIData(oldp+127,((vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                                  >> 2U)),30);
        bufp->chgIData(oldp+128,((vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                  >> 2U)),30);
        bufp->chgQData(oldp+129,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0U][0U]),61);
        bufp->chgQData(oldp+131,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0U][1U]),61);
        bufp->chgQData(oldp+133,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [1U][0U]),61);
        bufp->chgQData(oldp+135,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [1U][1U]),61);
        bufp->chgQData(oldp+137,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [2U][0U]),61);
        bufp->chgQData(oldp+139,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [2U][1U]),61);
        bufp->chgQData(oldp+141,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [3U][0U]),61);
        bufp->chgQData(oldp+143,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [3U][1U]),61);
        bufp->chgQData(oldp+145,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [4U][0U]),61);
        bufp->chgQData(oldp+147,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [4U][1U]),61);
        bufp->chgQData(oldp+149,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [5U][0U]),61);
        bufp->chgQData(oldp+151,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [5U][1U]),61);
        bufp->chgQData(oldp+153,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [6U][0U]),61);
        bufp->chgQData(oldp+155,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [6U][1U]),61);
        bufp->chgQData(oldp+157,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [7U][0U]),61);
        bufp->chgQData(oldp+159,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [7U][1U]),61);
        bufp->chgQData(oldp+161,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [8U][0U]),61);
        bufp->chgQData(oldp+163,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [8U][1U]),61);
        bufp->chgQData(oldp+165,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [9U][0U]),61);
        bufp->chgQData(oldp+167,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [9U][1U]),61);
        bufp->chgQData(oldp+169,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000aU][0U]),61);
        bufp->chgQData(oldp+171,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000aU][1U]),61);
        bufp->chgQData(oldp+173,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000bU][0U]),61);
        bufp->chgQData(oldp+175,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000bU][1U]),61);
        bufp->chgQData(oldp+177,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000cU][0U]),61);
        bufp->chgQData(oldp+179,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000cU][1U]),61);
        bufp->chgQData(oldp+181,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000dU][0U]),61);
        bufp->chgQData(oldp+183,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000dU][1U]),61);
        bufp->chgQData(oldp+185,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000eU][0U]),61);
        bufp->chgQData(oldp+187,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000eU][1U]),61);
        bufp->chgQData(oldp+189,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000fU][0U]),61);
        bufp->chgQData(oldp+191,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                                 [0x0000000fU][1U]),61);
        bufp->chgIData(oldp+193,((vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                                  >> 6U)),26);
        bufp->chgIData(oldp+194,((vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                  >> 6U)),26);
        bufp->chgCData(oldp+195,((0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                                                 >> 2U))),4);
        bufp->chgCData(oldp+196,((0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                                 >> 2U))),4);
        bufp->chgQData(oldp+197,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines
                                 [0U]),61);
        bufp->chgQData(oldp+199,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines
                                 [1U]),61);
        bufp->chgQData(oldp+201,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines
                                 [0U]),61);
        bufp->chgQData(oldp+203,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines
                                 [1U]),61);
        bufp->chgCData(oldp+205,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit),2);
        bufp->chgCData(oldp+206,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid),2);
        bufp->chgBit(oldp+207,((3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid))));
        bufp->chgBit(oldp+208,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__way_found));
        bufp->chgBit(oldp+209,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__victim_idx));
        bufp->chgIData(oldp+210,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+211,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+212,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
        bufp->chgIData(oldp+213,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk6__DOT__i),32);
        bufp->chgBit(oldp+214,((1U & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ValidReg) 
                                      >> 1U))));
        bufp->chgBit(oldp+215,((1U & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ValidReg) 
                                      >> 2U))));
        bufp->chgBit(oldp+216,((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ValidReg))));
        bufp->chgBit(oldp+217,((1U & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ValidReg) 
                                      >> 2U))));
        bufp->chgBit(oldp+218,((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__WB_ValidReg))));
        bufp->chgBit(oldp+219,(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__EX_rs1_MEM_fwd));
        bufp->chgBit(oldp+220,(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__EX_rs2_MEM_fwd));
        bufp->chgBit(oldp+221,(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__EX_rs1_WB_fwd));
        bufp->chgBit(oldp+222,(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__EX_rs2_WB_fwd));
        bufp->chgBit(oldp+223,(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__MEM_rs2_WB_fwd));
        bufp->chgIData(oldp+224,(vlSelfRef.top_tb__DOT__INST2__DOT__INST11__DOT__MEM_rd_write_data),32);
        bufp->chgBit(oldp+225,((1U & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ValidReg) 
                                      >> 1U))));
        bufp->chgBit(oldp+226,((1U & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ValidReg) 
                                      >> 2U))));
        bufp->chgIData(oldp+227,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+230,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+231,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+232,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+233,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+234,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+235,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+236,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+237,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+239,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+240,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+243,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+244,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+245,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+246,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+247,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+248,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+249,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+250,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+251,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+252,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+253,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+254,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+255,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+256,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+257,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+258,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[31]),32);
        bufp->chgIData(oldp+259,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+260,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__opcode),7);
        bufp->chgCData(oldp+261,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__funct3),3);
        bufp->chgSData(oldp+262,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1),12);
        bufp->chgIData(oldp+263,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2),20);
        bufp->chgIData(oldp+264,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__imm1),32);
        bufp->chgIData(oldp+265,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__imm2),32);
        bufp->chgIData(oldp+266,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__imm3),32);
        bufp->chgIData(oldp+267,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__imm4),32);
        bufp->chgBit(oldp+268,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+269,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                      >> 5U))));
        bufp->chgCData(oldp+270,((3U & vlSelfRef.top_tb__DOT__INST2__DOT__MEM_ALU_result)),2);
        bufp->chgIData(oldp+271,(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__final_data),32);
        bufp->chgCData(oldp+272,((3U & vlSelfRef.top_tb__DOT__INST2__DOT__WB_ALU_result)),2);
        bufp->chgIData(oldp+273,(vlSelfRef.top_tb__DOT__INST2__DOT__INST9__DOT__DMEM_shifted_word),32);
        bufp->chgIData(oldp+274,(vlSelfRef.top_tb__DOT__INST2__DOT__INST9__DOT__DMEM_result),32);
    }
    bufp->chgBit(oldp+275,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+276,(vlSelfRef.clk));
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
