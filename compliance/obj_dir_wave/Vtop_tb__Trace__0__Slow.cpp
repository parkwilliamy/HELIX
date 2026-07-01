// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_constants__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__mem_constants__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__branch_constants__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+372,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("top_constants", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__top_constants__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("mem_constants", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__mem_constants__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("branch_constants", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__branch_constants__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+372,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"wea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"web",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+375,0,"addra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+376,0,"addrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+5,0,"addra_cpu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+6,0,"addrb_cpu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+7,0,"doa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"dob",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"dia",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"dib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"led",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"row_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+12,0,"row_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+1,0,"RVMODEL_DATA_BEGIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"RVMODEL_DATA_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"tohost",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+14,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("INST1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+373,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"wea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"web",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"addra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+16,0,"addrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+377,0,"dia",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"dib",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"doa",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"dob",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("INST2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+372,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"doa",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"dob",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"addra",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+6,0,"addrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+4,0,"web",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"dib",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"led",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"IF_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"IF_pc_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"IF_pc_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"IF_Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"IF_Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"BTBwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"IF_BTBhit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"IF_BHTaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"IF_branch_prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"ID_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"ID_pc_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"ID_BHTaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"ID_branch_prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+33,0,"ID_BTBhit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"ID_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"ID_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"ID_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"ID_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"ID_pc_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"ID_csr_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"ID_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"ID_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"ID_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"ID_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"ID_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+45,0,"ID_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"ID_ValidReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+47,0,"ID_RegSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"ID_csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+49,0,"ID_field",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"ID_ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"ID_ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+52,0,"ID_Stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"ID_Flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"ID_RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"ID_MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"ID_MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"ID_Valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ID_Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"ID_Jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"ID_CSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"ID_csr_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+62,0,"EX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 284,0);
    tracep->declArray(c+71,0,"EX_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 284,0);
    tracep->declBus(c+80,0,"EX_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"EX_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"EX_rs1_fwd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"EX_rs2_fwd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"EX_rs1_data_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"EX_rs2_data_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"EX_ALU_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"EX_csr_value_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"EX_prediction_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+89,0,"EX_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"EX_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"EX_overflow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"EX_carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"EX_Flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"EX_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"EX_rs1_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"EX_rs2_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"EX_csr_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+98,0,"MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 263,0);
    tracep->declBus(c+107,0,"MEM_rs2_fwd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"MEM_rs2_data_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"MEM_csr_value_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+110,0,"MEM_rs2_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"MEM_csr_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"MEM_io",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"MEM_Flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"web_io",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+115,0,"web_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+116,0,"WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 226,0);
    tracep->declBus(c+124,0,"WB_rd_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"WB_csr_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"WB_io_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"DMEM_word_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"WB_Flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+128,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+130,0,"mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+132,0,"minstret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+134,0,"mhpmcounter3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+136,0,"mhpmcounter4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+138,0,"menvcfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+140,0,"mtime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+142,0,"mtimecmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+144,0,"misa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"mvendorid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"marchid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"mimpid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"mhartid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"mcounteren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"mcountinhibit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"mscratch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"mtval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"mconfigptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"mhpmevent3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"mhpmevent4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"priv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+162,0,"exception_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+163,0,"exception_status_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("exception_code", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+164+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("exception_code_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+168+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+172,0,"interrupt_code",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+173,0,"critical_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"misaligned_fetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"TrapTaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"gh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+177,0,"ID_PostFlush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("INST1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+373,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ID_Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"IF_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,2);
    tracep->declBus(c+179,0,"ID_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,2);
    tracep->declBus(c+38,0,"pc_imm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"pc_imm_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"IF_BTBhit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"IF_Branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"IF_Jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("branch_target_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+180,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+182,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+184,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+186,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+188,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+190,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+192,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+194,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+196,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+198,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+200,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+202,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+204,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+206,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+208,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+210,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+212,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+214,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+216,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+218,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+220,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+222,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+224,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+226,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+228,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+230,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+232,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+234,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+236,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+238,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+240,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+242,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+244,0,"IF_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+245,0,"ID_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+246,0,"IF_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+247,0,"ID_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("IF_lines", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+248,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+250,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->pushPrefix("ID_lines", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+252,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->declQuad(c+254,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 60,0);
    tracep->popPrefix();
    tracep->declBus(c+256,0,"IF_lines_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+257,0,"ID_lines_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+258,0,"set_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"way_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"victim_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+378,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+378,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+263,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+264,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("INST10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+265,0,"ALU_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"pc_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"csr_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+270,0,"RegSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+127,0,"DMEM_word",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"rd_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"byte_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+272,0,"DMEM_shifted_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"DMEM_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"IF_branch_prediction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,0,"ID_branch_prediction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+88,0,"prediction_status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"ID_ALUSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+274,0,"EX_ALUSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+26,0,"IF_BTBhit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"ID_BTBhit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"IF_Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"IF_Jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ID_Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"EX_Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"ID_Jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"EX_Jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"critical_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"ID_Stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"misaligned_fetch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"exception_status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"ID_RegSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+45,0,"ID_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"ID_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"IF_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"IF_pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"EX_pc_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"ID_pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"EX_pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"rs1_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"mtvec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"mepc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ID_funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+21,0,"IF_pc_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"ID_Flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"EX_Flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"MEM_Flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"WB_Flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+279,0,"MEM_ALU_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"MEM_pc_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"MEM_pc_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"MEM_csr_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"WB_rd_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"MEM_RegSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+284,0,"EX_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+285,0,"EX_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+286,0,"MEM_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+287,0,"MEM_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+288,0,"WB_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+289,0,"EX_rs1_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"EX_rd_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"MEM_rs2_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"MEM_rd_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"WB_rs2_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"MEM_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"MEM_MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"WB_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"WB_csr_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+298,0,"EX_csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+299,0,"MEM_csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+300,0,"WB_csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+95,0,"EX_rs1_fwd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"EX_rs2_fwd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"MEM_rs2_fwd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"EX_rs1_fwd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"EX_rs2_fwd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"MEM_rs2_fwd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+97,0,"EX_csr_fwd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"MEM_csr_fwd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"EX_rs1_MEM_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"EX_rs2_MEM_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"EX_rs1_WB_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"EX_rs2_WB_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"MEM_rs2_WB_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+306,0,"MEM_rd_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+307,0,"EX_MemRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"ID_MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"EX_CSR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+309,0,"EX_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+43,0,"ID_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"ID_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+310,0,"ID_rs1_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"ID_rd_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"Stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+46,0,"ValidReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+47,0,"RegSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"ALUOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+54,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"Branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"Jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"Valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"CSR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+373,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"exception_pending",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+44,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+288,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"rd_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+314+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+346,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("INST4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+348,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+349,0,"intimm1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+350,0,"intimm2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+351,0,"imm1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"imm2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"imm3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+354,0,"imm4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+355,0,"sub_bit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"ALUOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+356,0,"regbit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"field",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"CSR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"WB_csr_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"ID_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+269,0,"WB_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"ID_csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+300,0,"WB_csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+43,0,"ID_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"ID_rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+357,0,"WB_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+358,0,"WB_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"WB_csr_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"ID_csr_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"WB_csr_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("INST7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+80,0,"op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+359,0,"field",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+86,0,"ALU_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+89,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+360,0,"EX_branch_prediction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+275,0,"EX_Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"overflow",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"carry",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+361,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+94,0,"branch_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"prediction_status",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+94,0,"branch_taken_inter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("INST9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+295,0,"MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"exception_status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+279,0,"addrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+362,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+115,0,"web_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"dib",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+363,0,"byte_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+364,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+365,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+366,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+367,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+368,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+369,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+370,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+371,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__mem_constants__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__mem_constants__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+379,0,"mem_large",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+380,0,"IMEM_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+381,0,"IMEM_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+381,0,"DMEM_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+382,0,"DMEM_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+383,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"MTIME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+385,0,"MTIMECMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"LEDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__branch_constants__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__branch_constants__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+387,0,"LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"SETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"INDEX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+391,0,"TAG_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+392,0,"LRU_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+393,0,"BHTsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+394,0,"ghsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_constants__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_constants__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+395,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_top\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_register\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+374,(vlSelfRef.top_tb__DOT__wea),4);
    bufp->fullSData(oldp+375,(vlSelfRef.top_tb__DOT__addra),15);
    bufp->fullSData(oldp+376,(vlSelfRef.top_tb__DOT__addrb),15);
    bufp->fullIData(oldp+377,(vlSelfRef.top_tb__DOT__dia),32);
    bufp->fullIData(oldp+378,(2U),32);
    bufp->fullBit(oldp+379,(0U));
    bufp->fullIData(oldp+380,(0U),32);
    bufp->fullIData(oldp+381,(0x00005000U),32);
    bufp->fullIData(oldp+382,(0x00007700U),32);
    bufp->fullIData(oldp+383,(0x0000000fU),32);
    bufp->fullIData(oldp+384,(0x00007750U),32);
    bufp->fullIData(oldp+385,(0x00007758U),32);
    bufp->fullIData(oldp+386,(0x00007800U),32);
    bufp->fullIData(oldp+387,(0x00000020U),32);
    bufp->fullIData(oldp+388,(2U),32);
    bufp->fullIData(oldp+389,(0x00000010U),32);
    bufp->fullIData(oldp+390,(4U),32);
    bufp->fullIData(oldp+391,(0x0000001aU),32);
    bufp->fullIData(oldp+392,(1U),32);
    bufp->fullIData(oldp+393,(0x00000100U),32);
    bufp->fullIData(oldp+394,(8U),32);
    bufp->fullIData(oldp+395,(0x00000020U),32);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0\n"); );
    // Body
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.top_tb__DOT__RVMODEL_DATA_BEGIN),32);
    bufp->fullIData(oldp+2,(vlSelfRef.top_tb__DOT__RVMODEL_DATA_END),32);
    bufp->fullIData(oldp+3,(vlSelfRef.top_tb__DOT__tohost),32);
    bufp->fullCData(oldp+4,(vlSelfRef.top_tb__DOT__INST2__DOT__web),4);
    bufp->fullSData(oldp+5,(vlSelfRef.top_tb__DOT__INST2__DOT__addra),15);
    bufp->fullSData(oldp+6,((0x00007fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                            >> 8U))),15);
    bufp->fullIData(oldp+7,(vlSelfRef.top_tb__DOT__doa),32);
    bufp->fullIData(oldp+8,(vlSelfRef.top_tb__DOT__dob),32);
    bufp->fullIData(oldp+9,(vlSelfRef.top_tb__DOT__dib),32);
    bufp->fullSData(oldp+10,(vlSelfRef.top_tb__DOT__led),16);
    bufp->fullSData(oldp+11,((0x00007fffU & VL_SHIFTR_III(15,15,32, (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__addra), 2U))),15);
    bufp->fullSData(oldp+12,((0x00007fffU & VL_SHIFTR_III(15,15,32, 
                                                          (0x00007fffU 
                                                           & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                              >> 8U)), 2U))),15);
    bufp->fullIData(oldp+13,(vlSelfRef.top_tb__DOT__i),32);
    bufp->fullIData(oldp+14,(vlSelfRef.top_tb__DOT__fd),32);
    bufp->fullSData(oldp+15,((0x00001fffU & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__addra) 
                                             >> 2U))),13);
    bufp->fullSData(oldp+16,((0x00001fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                             >> 0x0000000aU))),13);
    bufp->fullIData(oldp+17,(vlSelfRef.top_tb__DOT__INST1__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+18,(vlSelfRef.top_tb__DOT__INST1__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+19,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc),32);
    bufp->fullIData(oldp+20,(vlSelfRef.top_tb__DOT__INST2__DOT__next_pc),32);
    bufp->fullIData(oldp+21,(((IData)(4U) + vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc)),32);
    bufp->fullIData(oldp+22,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc_imm),32);
    bufp->fullBit(oldp+23,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_Branch));
    bufp->fullBit(oldp+24,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_Jump));
    bufp->fullBit(oldp+25,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__write));
    bufp->fullBit(oldp+26,((0U != (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit))));
    bufp->fullCData(oldp+27,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_BHTaddr),8);
    bufp->fullCData(oldp+28,(vlSelfRef.top_tb__DOT__INST2__DOT__IF_branch_prediction),2);
    bufp->fullIData(oldp+29,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc),32);
    bufp->fullIData(oldp+30,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc_4),32);
    bufp->fullCData(oldp+31,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BHTaddr),8);
    bufp->fullCData(oldp+32,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_branch_prediction),2);
    bufp->fullBit(oldp+33,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_BTBhit));
    bufp->fullIData(oldp+34,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction),32);
    bufp->fullIData(oldp+35,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_imm),32);
    bufp->fullIData(oldp+36,((((vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                >> 2U) & (((0x0000001fU 
                                            & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                               >> 0x00000019U)) 
                                           == (0x0000001fU 
                                               & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                  >> 0x0000000fU))) 
                                          & (0U != 
                                             (0x0000001fU 
                                              & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                 >> 0x0000000fU)))))
                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                               : vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file
                              [(0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                               >> 0x0000000fU))])),32);
    bufp->fullIData(oldp+37,((((vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                >> 2U) & (((0x0000001fU 
                                            & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                               >> 0x00000019U)) 
                                           == (0x0000001fU 
                                               & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                  >> 0x00000014U))) 
                                          & (0U != 
                                             (0x0000001fU 
                                              & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                                 >> 0x00000014U)))))
                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                               : vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file
                              [(0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                               >> 0x00000014U))])),32);
    bufp->fullIData(oldp+38,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__pc_imm_in),32);
    bufp->fullIData(oldp+39,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_csr_value),32);
    bufp->fullCData(oldp+40,((0x0000007fU & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction)),7);
    bufp->fullCData(oldp+41,((vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                              >> 0x00000019U)),7);
    bufp->fullCData(oldp+42,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                             >> 7U))),5);
    bufp->fullCData(oldp+43,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+44,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                             >> 0x00000014U))),5);
    bufp->fullCData(oldp+45,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                    >> 0x0000000cU))),3);
    bufp->fullCData(oldp+46,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ValidReg),3);
    bufp->fullCData(oldp+47,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegSrc),3);
    bufp->fullSData(oldp+48,((vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                              >> 0x00000014U)),12);
    bufp->fullCData(oldp+49,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_field),4);
    bufp->fullCData(oldp+50,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ALUOp),2);
    bufp->fullCData(oldp+51,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ALUSrc),2);
    bufp->fullBit(oldp+52,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Stall));
    bufp->fullBit(oldp+53,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Flush));
    bufp->fullBit(oldp+54,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_RegWrite));
    bufp->fullBit(oldp+55,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_MemRead));
    bufp->fullBit(oldp+56,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_MemWrite));
    bufp->fullBit(oldp+57,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Valid));
    bufp->fullBit(oldp+58,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Branch));
    bufp->fullBit(oldp+59,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_Jump));
    bufp->fullBit(oldp+60,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_CSR));
    bufp->fullBit(oldp+61,(((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_CSR) 
                            & (IData)((0x00002000U 
                                       != (0x000fa000U 
                                           & vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction))))));
    bufp->fullWData(oldp+62,(vlSelfRef.top_tb__DOT__INST2__DOT__EX),285);
    bufp->fullWData(oldp+71,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_n),285);
    bufp->fullIData(oldp+80,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_op1),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_op2),32);
    bufp->fullIData(oldp+82,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_fwd_data),32);
    bufp->fullIData(oldp+83,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_fwd_data),32);
    bufp->fullIData(oldp+84,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs1_data_final),32);
    bufp->fullIData(oldp+85,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_rs2_data_final),32);
    bufp->fullIData(oldp+86,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result),32);
    bufp->fullIData(oldp+87,((((0x00000fffU & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                                << 6U) 
                                               | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                  >> 0x0000001aU))) 
                               == (0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                  >> 0x0000000dU)))
                               ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                               : ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[2U] 
                                   << 3U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                             >> 0x0000001dU)))),32);
    bufp->fullCData(oldp+88,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_prediction_status),2);
    bufp->fullBit(oldp+89,((0U == vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)));
    bufp->fullBit(oldp+90,(VL_GTS_III(32, 0U, vlSelfRef.top_tb__DOT__INST2__DOT__EX_ALU_result)));
    bufp->fullBit(oldp+91,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_overflow));
    bufp->fullBit(oldp+92,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_carry));
    bufp->fullBit(oldp+93,(vlSelfRef.top_tb__DOT__INST2__DOT__EX_Flush));
    bufp->fullBit(oldp+94,(vlSelfRef.top_tb__DOT__INST2__DOT__INST8__DOT__branch_taken_inter));
    bufp->fullBit(oldp+95,((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd) 
                             | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd)) 
                            & (0U != (0x0000001fU & 
                                      (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                       >> 0x00000010U))))));
    bufp->fullBit(oldp+96,((((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd) 
                             | (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd)) 
                            & (0U != (0x0000001fU & 
                                      (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                       >> 0x0000000bU))))));
    bufp->fullBit(oldp+97,(((0x00000fffU & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                             << 6U) 
                                            | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                               >> 0x0000001aU))) 
                            == (0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                               >> 0x0000000dU)))));
    bufp->fullWData(oldp+98,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM),264);
    bufp->fullIData(oldp+107,(((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd)
                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data
                                : 0U)),32);
    bufp->fullIData(oldp+108,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_rs2_data_final),32);
    bufp->fullIData(oldp+109,((((0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                >> 0x0000000dU)) 
                                == (0x00000fffU & (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                   >> 0x0000000dU)))
                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data
                                : ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[3U] 
                                    << 0x00000018U) 
                                   | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[2U] 
                                      >> 8U)))),32);
    bufp->fullBit(oldp+110,(((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd) 
                             & (0U != (0x0000001fU 
                                       & ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[1U] 
                                           << 2U) | 
                                          (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                           >> 0x0000001eU)))))));
    bufp->fullBit(oldp+111,(((0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                             >> 0x0000000dU)) 
                             == (0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                >> 0x0000000dU)))));
    bufp->fullBit(oldp+112,((0x00007700U <= ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                              << 0x00000018U) 
                                             | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                >> 8U)))));
    bufp->fullBit(oldp+113,(vlSelfRef.top_tb__DOT__INST2__DOT__MEM_Flush));
    bufp->fullCData(oldp+114,(vlSelfRef.top_tb__DOT__INST2__DOT__web_io),4);
    bufp->fullCData(oldp+115,(vlSelfRef.top_tb__DOT__INST2__DOT__web_final),4);
    bufp->fullWData(oldp+116,(vlSelfRef.top_tb__DOT__INST2__DOT__WB),227);
    bufp->fullIData(oldp+124,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_rd_write_data),32);
    bufp->fullIData(oldp+125,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_csr_write_data),32);
    bufp->fullIData(oldp+126,(vlSelfRef.top_tb__DOT__INST2__DOT__WB_io_data),32);
    bufp->fullIData(oldp+127,(((1U & vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U])
                                ? vlSelfRef.top_tb__DOT__INST2__DOT__WB_io_data
                                : vlSelfRef.top_tb__DOT__dob)),32);
    bufp->fullQData(oldp+128,(vlSelfRef.top_tb__DOT__INST2__DOT__mstatus),64);
    bufp->fullQData(oldp+130,(vlSelfRef.top_tb__DOT__INST2__DOT__mcycle),64);
    bufp->fullQData(oldp+132,(vlSelfRef.top_tb__DOT__INST2__DOT__minstret),64);
    bufp->fullQData(oldp+134,(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter3),64);
    bufp->fullQData(oldp+136,(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmcounter4),64);
    bufp->fullQData(oldp+138,(vlSelfRef.top_tb__DOT__INST2__DOT__menvcfg),64);
    bufp->fullQData(oldp+140,(vlSelfRef.top_tb__DOT__INST2__DOT__mtime),64);
    bufp->fullQData(oldp+142,(vlSelfRef.top_tb__DOT__INST2__DOT__mtimecmp),64);
    bufp->fullIData(oldp+144,(vlSelfRef.top_tb__DOT__INST2__DOT__misa),32);
    bufp->fullIData(oldp+145,(vlSelfRef.top_tb__DOT__INST2__DOT__mvendorid),32);
    bufp->fullIData(oldp+146,(vlSelfRef.top_tb__DOT__INST2__DOT__marchid),32);
    bufp->fullIData(oldp+147,(vlSelfRef.top_tb__DOT__INST2__DOT__mimpid),32);
    bufp->fullIData(oldp+148,(vlSelfRef.top_tb__DOT__INST2__DOT__mhartid),32);
    bufp->fullIData(oldp+149,(vlSelfRef.top_tb__DOT__INST2__DOT__mtvec),32);
    bufp->fullIData(oldp+150,(vlSelfRef.top_tb__DOT__INST2__DOT__mip),32);
    bufp->fullIData(oldp+151,(vlSelfRef.top_tb__DOT__INST2__DOT__mie),32);
    bufp->fullIData(oldp+152,(vlSelfRef.top_tb__DOT__INST2__DOT__mcounteren),32);
    bufp->fullIData(oldp+153,(vlSelfRef.top_tb__DOT__INST2__DOT__mcountinhibit),32);
    bufp->fullIData(oldp+154,(vlSelfRef.top_tb__DOT__INST2__DOT__mscratch),32);
    bufp->fullIData(oldp+155,(vlSelfRef.top_tb__DOT__INST2__DOT__mepc),32);
    bufp->fullIData(oldp+156,(vlSelfRef.top_tb__DOT__INST2__DOT__mcause),32);
    bufp->fullIData(oldp+157,(vlSelfRef.top_tb__DOT__INST2__DOT__mtval),32);
    bufp->fullIData(oldp+158,(vlSelfRef.top_tb__DOT__INST2__DOT__mconfigptr),32);
    bufp->fullIData(oldp+159,(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent3),32);
    bufp->fullIData(oldp+160,(vlSelfRef.top_tb__DOT__INST2__DOT__mhpmevent4),32);
    bufp->fullCData(oldp+161,(vlSelfRef.top_tb__DOT__INST2__DOT__priv),2);
    bufp->fullCData(oldp+162,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status),4);
    bufp->fullCData(oldp+163,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status_n),4);
    bufp->fullCData(oldp+164,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[0]),6);
    bufp->fullCData(oldp+165,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[1]),6);
    bufp->fullCData(oldp+166,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[2]),6);
    bufp->fullCData(oldp+167,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code[3]),6);
    bufp->fullCData(oldp+168,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[0]),6);
    bufp->fullCData(oldp+169,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[1]),6);
    bufp->fullCData(oldp+170,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[2]),6);
    bufp->fullCData(oldp+171,(vlSelfRef.top_tb__DOT__INST2__DOT__exception_code_n[3]),6);
    bufp->fullCData(oldp+172,(vlSelfRef.top_tb__DOT__INST2__DOT__interrupt_code),4);
    bufp->fullBit(oldp+173,(vlSelfRef.top_tb__DOT__INST2__DOT__critical_error));
    bufp->fullBit(oldp+174,(vlSelfRef.top_tb__DOT__INST2__DOT__misaligned_fetch));
    bufp->fullBit(oldp+175,(vlSelfRef.top_tb__DOT__INST2__DOT__TrapTaken));
    bufp->fullCData(oldp+176,(vlSelfRef.top_tb__DOT__INST2__DOT__gh),8);
    bufp->fullBit(oldp+177,(vlSelfRef.top_tb__DOT__INST2__DOT__ID_PostFlush));
    bufp->fullIData(oldp+178,((vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                               >> 2U)),30);
    bufp->fullIData(oldp+179,((vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                               >> 2U)),30);
    bufp->fullQData(oldp+180,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0U][0U]),61);
    bufp->fullQData(oldp+182,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0U][1U]),61);
    bufp->fullQData(oldp+184,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [1U][0U]),61);
    bufp->fullQData(oldp+186,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [1U][1U]),61);
    bufp->fullQData(oldp+188,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [2U][0U]),61);
    bufp->fullQData(oldp+190,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [2U][1U]),61);
    bufp->fullQData(oldp+192,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [3U][0U]),61);
    bufp->fullQData(oldp+194,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [3U][1U]),61);
    bufp->fullQData(oldp+196,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [4U][0U]),61);
    bufp->fullQData(oldp+198,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [4U][1U]),61);
    bufp->fullQData(oldp+200,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [5U][0U]),61);
    bufp->fullQData(oldp+202,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [5U][1U]),61);
    bufp->fullQData(oldp+204,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [6U][0U]),61);
    bufp->fullQData(oldp+206,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [6U][1U]),61);
    bufp->fullQData(oldp+208,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [7U][0U]),61);
    bufp->fullQData(oldp+210,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [7U][1U]),61);
    bufp->fullQData(oldp+212,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [8U][0U]),61);
    bufp->fullQData(oldp+214,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [8U][1U]),61);
    bufp->fullQData(oldp+216,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [9U][0U]),61);
    bufp->fullQData(oldp+218,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [9U][1U]),61);
    bufp->fullQData(oldp+220,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0x0000000aU][0U]),61);
    bufp->fullQData(oldp+222,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0x0000000aU][1U]),61);
    bufp->fullQData(oldp+224,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0x0000000bU][0U]),61);
    bufp->fullQData(oldp+226,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0x0000000bU][1U]),61);
    bufp->fullQData(oldp+228,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0x0000000cU][0U]),61);
    bufp->fullQData(oldp+230,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0x0000000cU][1U]),61);
    bufp->fullQData(oldp+232,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0x0000000dU][0U]),61);
    bufp->fullQData(oldp+234,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0x0000000dU][1U]),61);
    bufp->fullQData(oldp+236,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0x0000000eU][0U]),61);
    bufp->fullQData(oldp+238,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0x0000000eU][1U]),61);
    bufp->fullQData(oldp+240,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0x0000000fU][0U]),61);
    bufp->fullQData(oldp+242,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__branch_target_buffer
                              [0x0000000fU][1U]),61);
    bufp->fullIData(oldp+244,((vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                               >> 6U)),26);
    bufp->fullIData(oldp+245,((vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                               >> 6U)),26);
    bufp->fullCData(oldp+246,((0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__IF_pc 
                                              >> 2U))),4);
    bufp->fullCData(oldp+247,((0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_pc 
                                              >> 2U))),4);
    bufp->fullQData(oldp+248,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines
                              [0U]),61);
    bufp->fullQData(oldp+250,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines
                              [1U]),61);
    bufp->fullQData(oldp+252,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines
                              [0U]),61);
    bufp->fullQData(oldp+254,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines
                              [1U]),61);
    bufp->fullCData(oldp+256,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__IF_lines_hit),2);
    bufp->fullCData(oldp+257,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid),2);
    bufp->fullBit(oldp+258,((3U == (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__ID_lines_valid))));
    bufp->fullBit(oldp+259,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__way_found));
    bufp->fullBit(oldp+260,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__victim_idx));
    bufp->fullIData(oldp+261,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+262,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+263,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+264,(vlSelfRef.top_tb__DOT__INST2__DOT__INST1__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+265,(((vlSelfRef.top_tb__DOT__INST2__DOT__WB[4U] 
                                << 0x0000001dU) | (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                                   >> 3U))),32);
    bufp->fullIData(oldp+266,(((vlSelfRef.top_tb__DOT__INST2__DOT__WB[5U] 
                                << 0x0000001dU) | (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__WB[4U] 
                                                   >> 3U))),32);
    bufp->fullIData(oldp+267,(((vlSelfRef.top_tb__DOT__INST2__DOT__WB[6U] 
                                << 0x0000001dU) | (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__WB[5U] 
                                                   >> 3U))),32);
    bufp->fullIData(oldp+268,(((vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                << 0x0000001dU) | (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                                                   >> 3U))),32);
    bufp->fullCData(oldp+269,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                     >> 0x0000000aU))),3);
    bufp->fullCData(oldp+270,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                     >> 4U))),3);
    bufp->fullCData(oldp+271,((3U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[3U] 
                                     >> 3U))),2);
    bufp->fullIData(oldp+272,(vlSelfRef.top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_shifted_word),32);
    bufp->fullIData(oldp+273,(vlSelfRef.top_tb__DOT__INST2__DOT__INST10__DOT__DMEM_result),32);
    bufp->fullCData(oldp+274,((3U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                     >> 9U))),2);
    bufp->fullBit(oldp+275,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+276,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                   >> 2U))));
    bufp->fullIData(oldp+277,(((vlSelfRef.top_tb__DOT__INST2__DOT__EX[7U] 
                                << 3U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] 
                                          >> 0x0000001dU))),32);
    bufp->fullIData(oldp+278,(((vlSelfRef.top_tb__DOT__INST2__DOT__EX[6U] 
                                << 3U) | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[5U] 
                                          >> 0x0000001dU))),32);
    bufp->fullIData(oldp+279,(((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                << 0x00000018U) | (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                                   >> 8U))),32);
    bufp->fullIData(oldp+280,(((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[7U] 
                                << 0x00000018U) | (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__MEM[6U] 
                                                   >> 8U))),32);
    bufp->fullIData(oldp+281,(((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[6U] 
                                << 0x00000018U) | (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__MEM[5U] 
                                                   >> 8U))),32);
    bufp->fullIData(oldp+282,(((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[3U] 
                                << 0x00000018U) | (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__MEM[2U] 
                                                   >> 8U))),32);
    bufp->fullCData(oldp+283,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                     >> 4U))),3);
    bufp->fullCData(oldp+284,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                              >> 0x00000010U))),5);
    bufp->fullCData(oldp+285,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                              >> 0x0000000bU))),5);
    bufp->fullCData(oldp+286,((0x0000001fU & ((vlSelfRef.top_tb__DOT__INST2__DOT__MEM[1U] 
                                               << 2U) 
                                              | (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                                 >> 0x0000001eU)))),5);
    bufp->fullCData(oldp+287,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                              >> 0x00000019U))),5);
    bufp->fullCData(oldp+288,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                              >> 0x00000019U))),5);
    bufp->fullBit(oldp+289,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                   >> 0x00000011U))));
    bufp->fullBit(oldp+290,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                   >> 0x00000012U))));
    bufp->fullBit(oldp+291,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+292,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+293,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+294,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+295,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+296,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+297,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                   >> 1U))));
    bufp->fullSData(oldp+298,((0x00000fffU & ((vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                               << 6U) 
                                              | (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                                 >> 0x0000001aU)))),12);
    bufp->fullSData(oldp+299,((0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                              >> 0x0000000dU))),12);
    bufp->fullSData(oldp+300,((0x00000fffU & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                              >> 0x0000000dU))),12);
    bufp->fullBit(oldp+301,(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_MEM_fwd));
    bufp->fullBit(oldp+302,(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_MEM_fwd));
    bufp->fullBit(oldp+303,(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs1_WB_fwd));
    bufp->fullBit(oldp+304,(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__EX_rs2_WB_fwd));
    bufp->fullBit(oldp+305,(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rs2_WB_fwd));
    bufp->fullIData(oldp+306,(vlSelfRef.top_tb__DOT__INST2__DOT__INST12__DOT__MEM_rd_write_data),32);
    bufp->fullBit(oldp+307,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+308,((1U & vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U])));
    bufp->fullCData(oldp+309,((0x0000001fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[1U] 
                                              >> 6U))),5);
    bufp->fullBit(oldp+310,((1U & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ValidReg) 
                                   >> 1U))));
    bufp->fullBit(oldp+311,((1U & ((IData)(vlSelfRef.top_tb__DOT__INST2__DOT__ID_ValidReg) 
                                   >> 2U))));
    bufp->fullBit(oldp+312,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+313,((1U & (IData)(vlSelfRef.top_tb__DOT__INST2__DOT__exception_status))));
    bufp->fullIData(oldp+314,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+315,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+316,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+317,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+318,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+319,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+320,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+321,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+322,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+323,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+324,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+325,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+326,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+327,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+328,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+329,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+330,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+331,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+332,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+333,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+334,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+335,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+336,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+337,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+338,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+339,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+340,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+341,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+342,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+343,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+344,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+345,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+346,(vlSelfRef.top_tb__DOT__INST2__DOT__INST3__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+347,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__opcode),7);
    bufp->fullCData(oldp+348,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__funct3),3);
    bufp->fullSData(oldp+349,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm1),12);
    bufp->fullIData(oldp+350,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__intimm2),20);
    bufp->fullIData(oldp+351,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__imm1),32);
    bufp->fullIData(oldp+352,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__imm2),32);
    bufp->fullIData(oldp+353,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__imm3),32);
    bufp->fullIData(oldp+354,(vlSelfRef.top_tb__DOT__INST2__DOT__INST4__DOT__imm4),32);
    bufp->fullBit(oldp+355,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                   >> 0x0000001eU))));
    bufp->fullBit(oldp+356,((1U & (vlSelfRef.top_tb__DOT__INST2__DOT__ID_instruction 
                                   >> 5U))));
    bufp->fullCData(oldp+357,((0x0000001fU & ((vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] 
                                               << 2U) 
                                              | (vlSelfRef.top_tb__DOT__INST2__DOT__WB[0U] 
                                                 >> 0x0000001eU)))),5);
    bufp->fullIData(oldp+358,(((vlSelfRef.top_tb__DOT__INST2__DOT__WB[2U] 
                                << 0x0000001dU) | (
                                                   vlSelfRef.top_tb__DOT__INST2__DOT__WB[1U] 
                                                   >> 3U))),32);
    bufp->fullCData(oldp+359,((0x0000000fU & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                              >> 0x00000016U))),4);
    bufp->fullCData(oldp+360,((3U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                     >> 7U))),2);
    bufp->fullCData(oldp+361,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__EX[0U] 
                                     >> 0x00000013U))),3);
    bufp->fullCData(oldp+362,((7U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[0U] 
                                     >> 0x0000000aU))),3);
    bufp->fullCData(oldp+363,((3U & (vlSelfRef.top_tb__DOT__INST2__DOT__MEM[4U] 
                                     >> 8U))),2);
    bufp->fullIData(oldp+364,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+365,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+366,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+367,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+368,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+369,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+370,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+371,(vlSelfRef.top_tb__DOT__INST2__DOT__unnamedblk8__DOT__i),32);
    bufp->fullBit(oldp+372,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+373,(vlSelfRef.clk));
}
