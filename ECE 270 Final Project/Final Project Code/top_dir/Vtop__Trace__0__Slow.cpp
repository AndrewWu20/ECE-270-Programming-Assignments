// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+62,"hz2m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"hz100",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"pb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 20,0);
    tracep->declBus(c+66,"left",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+67,"right",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+68,"ss7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+69,"ss6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+70,"ss5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+71,"ss4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+72,"ss3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+73,"ss2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+74,"ss1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+75,"ss0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+76,"red",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"green",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"blue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+79,"txdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+80,"rxdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+81,"txclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"rxclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"txready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"rxready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+62,"hz2m",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"hz100",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"pb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 20,0);
    tracep->declBus(c+66,"left",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+67,"right",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+68,"ss7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+69,"ss6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+70,"ss5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+71,"ss4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+72,"ss3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+73,"ss2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+74,"ss1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+75,"ss0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+76,"red",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"green",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"blue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+79,"txdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+80,"rxdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+81,"txclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"rxclk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"txready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"rxready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1,"set_edit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"set_play",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"set_raw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5,"bpm_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+6,"prev_bpm_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"sample_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+4,"keycode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+51,"mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,"edit_seq_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,"edit_seq_out_enc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+52+i*1,"edit_play_smpl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 3,0);
    }
    tracep->declBus(c+86,"play_seq_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,"seq_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,"seq_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+87,"raw_play_smpl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,"play_smpl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,"enable_ctr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+12+i*1,"sample_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+17,"kick_clap_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,"hihat_snare_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,"total_signal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,"final_signal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->pushNamePrefix("c1 ");
    tracep->declBit(c+85,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"set_edit",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"set_play",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"set_raw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+51,"mode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clk1 ");
    tracep->declBus(c+95,"BITLEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+62,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+96,"lim",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBit(c+5,"hzX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clk2 ");
    tracep->declBus(c+97,"BITLEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+62,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"lim",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+7,"hzX",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("p1 ");
    tracep->declBus(c+33,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+34,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("p2 ");
    tracep->declBus(c+8,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+44,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pwm1 ");
    tracep->declBus(c+99,"CTRVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+100,"CTRLEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+62,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"duty_cycle",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBus(c+11,"counter",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 5,0);
    tracep->declBit(c+88,"pwm_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"limit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sample_clap ");
    tracep->declArray(c+103,"SAMPLE_FILE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 135,0);
    tracep->declBus(c+108,"SAMPLE_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+7,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+22,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBit(c+23,"prev_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sample_hihat ");
    tracep->declArray(c+109,"SAMPLE_FILE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 143,0);
    tracep->declBus(c+108,"SAMPLE_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+7,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+25,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBit(c+26,"prev_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sample_kick ");
    tracep->declArray(c+114,"SAMPLE_FILE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 135,0);
    tracep->declBus(c+108,"SAMPLE_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+7,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+28,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBit(c+29,"prev_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sample_snare ");
    tracep->declArray(c+119,"SAMPLE_FILE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 143,0);
    tracep->declBus(c+108,"SAMPLE_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+7,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+31,"index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBit(c+32,"prev_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("se1 ");
    tracep->declBit(c+85,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+51,"mode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+44,"set_time_idx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+87,"tgl_play_smpl",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+35,"seq_smpl_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+36,"seq_smpl_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+37,"seq_smpl_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+38,"seq_smpl_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+39,"seq_smpl_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+40,"seq_smpl_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+41,"seq_smpl_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+42,"seq_smpl_8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sk1 ");
    tracep->declBit(c+62,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+89,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+4,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+85,"strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+90,"strobe_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+91,"strobe_input",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sq1 ");
    tracep->declBit(c+85,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"srst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"go_left",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"go_right",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"seq_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+43,"seq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sq2 ");
    tracep->declBit(c+5,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"srst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"go_left",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"go_right",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+86,"seq_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+94,"seq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h994d34ce__0;
    VlWide<5>/*159:0*/ __Vtemp_h6435efe6__0;
    VlWide<5>/*159:0*/ __Vtemp_h87dd4852__0;
    VlWide<5>/*159:0*/ __Vtemp_hdd2950f0__0;
    // Body
    bufp->fullBit(oldp+1,((IData)(((0x13U == (0x13U 
                                              & (IData)(vlSelf->top__DOT__keycode))) 
                                   & (IData)(vlSelf->top__DOT____VdfgTmp_hc00145b2__0)))));
    bufp->fullBit(oldp+2,((IData)((0x12U == (IData)(vlSelf->top__DOT__keycode)))));
    bufp->fullBit(oldp+3,((IData)(((0x10U == (0x13U 
                                              & (IData)(vlSelf->top__DOT__keycode))) 
                                   & (IData)(vlSelf->top__DOT____VdfgTmp_hc00145b2__0)))));
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__keycode),5);
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__bpm_clk));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__prev_bpm_clk));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__sample_clk));
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__seq_out),8);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__clk1__DOT__count),20);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__clk2__DOT__count),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__pwm1__DOT__counter),6);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__sample_data[0]),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__sample_data[1]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__sample_data[2]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__sample_data[3]),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__sample_data[4]),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__kick_clap_sum),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__hihat_snare_sum),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__total_signal),8);
    bufp->fullCData(oldp+20,((0x3fU & (IData)(vlSelf->top__DOT__total_signal))),6);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT____Vcellout__sample_clap__out),8);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__sample_clap__DOT__index),12);
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__sample_clap__DOT__prev_en));
    bufp->fullCData(oldp+24,(vlSelf->top__DOT____Vcellout__sample_hihat__out),8);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__sample_hihat__DOT__index),12);
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__sample_hihat__DOT__prev_en));
    bufp->fullCData(oldp+27,(vlSelf->top__DOT____Vcellout__sample_kick__out),8);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__sample_kick__DOT__index),12);
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__sample_kick__DOT__prev_en));
    bufp->fullCData(oldp+30,(vlSelf->top__DOT____Vcellout__sample_snare__out),8);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__sample_snare__DOT__index),12);
    bufp->fullBit(oldp+32,(vlSelf->top__DOT__sample_snare__DOT__prev_en));
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__edit_seq_out),8);
    bufp->fullCData(oldp+34,(((0x80U & (IData)(vlSelf->top__DOT__edit_seq_out))
                               ? 7U : ((0x40U & (IData)(vlSelf->top__DOT__edit_seq_out))
                                        ? 6U : ((0x20U 
                                                 & (IData)(vlSelf->top__DOT__edit_seq_out))
                                                 ? 5U
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->top__DOT__edit_seq_out))
                                                  ? 4U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->top__DOT__edit_seq_out))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__edit_seq_out))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__edit_seq_out))
                                                     ? 1U
                                                     : 0U)))))))),3);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_1),4);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_2),4);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_3),4);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_4),4);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_5),4);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_6),4);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_7),4);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_8),4);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__sq1__DOT__seq),8);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__seq_sel),3);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__play_smpl),4);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__enable_ctr),32);
    bufp->fullBit(oldp+47,((1U & ((IData)(vlSelf->top__DOT__play_smpl) 
                                  >> 2U))));
    bufp->fullBit(oldp+48,((1U & ((IData)(vlSelf->top__DOT__play_smpl) 
                                  >> 1U))));
    bufp->fullBit(oldp+49,((1U & ((IData)(vlSelf->top__DOT__play_smpl) 
                                  >> 3U))));
    bufp->fullBit(oldp+50,((1U & (IData)(vlSelf->top__DOT__play_smpl))));
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__mode),2);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__edit_play_smpl[0]),4);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__edit_play_smpl[1]),4);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__edit_play_smpl[2]),4);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__edit_play_smpl[3]),4);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__edit_play_smpl[4]),4);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__edit_play_smpl[5]),4);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__edit_play_smpl[6]),4);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__edit_play_smpl[7]),4);
    bufp->fullBit(oldp+60,((IData)((0U != (IData)(vlSelf->top__DOT__mode)))));
    bufp->fullBit(oldp+61,((1U & (~ (IData)(vlSelf->top__DOT__mode)))));
    bufp->fullBit(oldp+62,(vlSelf->hz2m));
    bufp->fullBit(oldp+63,(vlSelf->hz100));
    bufp->fullBit(oldp+64,(vlSelf->reset));
    bufp->fullIData(oldp+65,(vlSelf->pb),21);
    bufp->fullCData(oldp+66,(vlSelf->left),8);
    bufp->fullCData(oldp+67,(vlSelf->right),8);
    bufp->fullCData(oldp+68,(vlSelf->ss7),8);
    bufp->fullCData(oldp+69,(vlSelf->ss6),8);
    bufp->fullCData(oldp+70,(vlSelf->ss5),8);
    bufp->fullCData(oldp+71,(vlSelf->ss4),8);
    bufp->fullCData(oldp+72,(vlSelf->ss3),8);
    bufp->fullCData(oldp+73,(vlSelf->ss2),8);
    bufp->fullCData(oldp+74,(vlSelf->ss1),8);
    bufp->fullCData(oldp+75,(vlSelf->ss0),8);
    bufp->fullBit(oldp+76,(vlSelf->red));
    bufp->fullBit(oldp+77,(vlSelf->green));
    bufp->fullBit(oldp+78,(vlSelf->blue));
    bufp->fullCData(oldp+79,(vlSelf->txdata),8);
    bufp->fullCData(oldp+80,(vlSelf->rxdata),8);
    bufp->fullBit(oldp+81,(vlSelf->txclk));
    bufp->fullBit(oldp+82,(vlSelf->rxclk));
    bufp->fullBit(oldp+83,(vlSelf->txready));
    bufp->fullBit(oldp+84,(vlSelf->rxready));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__strobe));
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__play_seq_out),8);
    bufp->fullCData(oldp+87,((0xfU & vlSelf->pb)),4);
    bufp->fullBit(oldp+88,(vlSelf->top__DOT____Vcellout__pwm1__pwm_out));
    bufp->fullIData(oldp+89,((0xfffffU & vlSelf->pb)),20);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__sk1__DOT__strobe_new),2);
    bufp->fullBit(oldp+91,((0U != (0xfffffU & vlSelf->pb))));
    bufp->fullBit(oldp+92,((1U & (vlSelf->pb >> 0xbU))));
    bufp->fullBit(oldp+93,((1U & (vlSelf->pb >> 8U))));
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__sq2__DOT__seq),8);
    bufp->fullIData(oldp+95,(0x14U),32);
    bufp->fullIData(oldp+96,(0x7a11fU),20);
    bufp->fullIData(oldp+97,(8U),32);
    bufp->fullCData(oldp+98,(0x7fU),8);
    bufp->fullIData(oldp+99,(0x40U),32);
    bufp->fullIData(oldp+100,(6U),32);
    bufp->fullBit(oldp+101,(1U));
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__pwm1__DOT__limit),6);
    __Vtemp_h994d34ce__0[0U] = 0x2e6d656dU;
    __Vtemp_h994d34ce__0[1U] = 0x636c6170U;
    __Vtemp_h994d34ce__0[2U] = 0x64696f2fU;
    __Vtemp_h994d34ce__0[3U] = 0x2e2f6175U;
    __Vtemp_h994d34ce__0[4U] = 0x2eU;
    bufp->fullWData(oldp+103,(__Vtemp_h994d34ce__0),136);
    bufp->fullIData(oldp+108,(0xfa0U),32);
    __Vtemp_h6435efe6__0[0U] = 0x2e6d656dU;
    __Vtemp_h6435efe6__0[1U] = 0x69686174U;
    __Vtemp_h6435efe6__0[2U] = 0x696f2f68U;
    __Vtemp_h6435efe6__0[3U] = 0x2f617564U;
    __Vtemp_h6435efe6__0[4U] = 0x2e2eU;
    bufp->fullWData(oldp+109,(__Vtemp_h6435efe6__0),144);
    __Vtemp_h87dd4852__0[0U] = 0x2e6d656dU;
    __Vtemp_h87dd4852__0[1U] = 0x6b69636bU;
    __Vtemp_h87dd4852__0[2U] = 0x64696f2fU;
    __Vtemp_h87dd4852__0[3U] = 0x2e2f6175U;
    __Vtemp_h87dd4852__0[4U] = 0x2eU;
    bufp->fullWData(oldp+114,(__Vtemp_h87dd4852__0),136);
    __Vtemp_hdd2950f0__0[0U] = 0x2e6d656dU;
    __Vtemp_hdd2950f0__0[1U] = 0x6e617265U;
    __Vtemp_hdd2950f0__0[2U] = 0x696f2f73U;
    __Vtemp_hdd2950f0__0[3U] = 0x2f617564U;
    __Vtemp_hdd2950f0__0[4U] = 0x2e2eU;
    bufp->fullWData(oldp+119,(__Vtemp_hdd2950f0__0),144);
    bufp->fullBit(oldp+124,(0U));
}
