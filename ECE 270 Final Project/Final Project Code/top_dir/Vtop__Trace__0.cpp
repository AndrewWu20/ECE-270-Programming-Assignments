// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((IData)(((0x13U == (0x13U 
                                                 & (IData)(vlSelf->top__DOT__keycode))) 
                                      & (IData)(vlSelf->top__DOT____VdfgTmp_hc00145b2__0)))));
        bufp->chgBit(oldp+1,((IData)((0x12U == (IData)(vlSelf->top__DOT__keycode)))));
        bufp->chgBit(oldp+2,((IData)(((0x10U == (0x13U 
                                                 & (IData)(vlSelf->top__DOT__keycode))) 
                                      & (IData)(vlSelf->top__DOT____VdfgTmp_hc00145b2__0)))));
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__keycode),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__bpm_clk));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__prev_bpm_clk));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__sample_clk));
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__seq_out),8);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__clk1__DOT__count),20);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__clk2__DOT__count),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__pwm1__DOT__counter),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__sample_data[0]),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__sample_data[1]),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__sample_data[2]),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__sample_data[3]),8);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__sample_data[4]),8);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__kick_clap_sum),8);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__hihat_snare_sum),8);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__total_signal),8);
        bufp->chgCData(oldp+19,((0x3fU & (IData)(vlSelf->top__DOT__total_signal))),6);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT____Vcellout__sample_clap__out),8);
        bufp->chgSData(oldp+21,(vlSelf->top__DOT__sample_clap__DOT__index),12);
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__sample_clap__DOT__prev_en));
        bufp->chgCData(oldp+23,(vlSelf->top__DOT____Vcellout__sample_hihat__out),8);
        bufp->chgSData(oldp+24,(vlSelf->top__DOT__sample_hihat__DOT__index),12);
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__sample_hihat__DOT__prev_en));
        bufp->chgCData(oldp+26,(vlSelf->top__DOT____Vcellout__sample_kick__out),8);
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__sample_kick__DOT__index),12);
        bufp->chgBit(oldp+28,(vlSelf->top__DOT__sample_kick__DOT__prev_en));
        bufp->chgCData(oldp+29,(vlSelf->top__DOT____Vcellout__sample_snare__out),8);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__sample_snare__DOT__index),12);
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__sample_snare__DOT__prev_en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__edit_seq_out),8);
        bufp->chgCData(oldp+33,(((0x80U & (IData)(vlSelf->top__DOT__edit_seq_out))
                                  ? 7U : ((0x40U & (IData)(vlSelf->top__DOT__edit_seq_out))
                                           ? 6U : (
                                                   (0x20U 
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
        bufp->chgCData(oldp+34,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_1),4);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_2),4);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_3),4);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_4),4);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_5),4);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_6),4);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_7),4);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT____Vcellout__se1__seq_smpl_8),4);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__sq1__DOT__seq),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__seq_sel),3);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__play_smpl),4);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__enable_ctr),32);
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelf->top__DOT__play_smpl) 
                                     >> 2U))));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelf->top__DOT__play_smpl) 
                                     >> 1U))));
        bufp->chgBit(oldp+48,((1U & ((IData)(vlSelf->top__DOT__play_smpl) 
                                     >> 3U))));
        bufp->chgBit(oldp+49,((1U & (IData)(vlSelf->top__DOT__play_smpl))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__mode),2);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__edit_play_smpl[0]),4);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__edit_play_smpl[1]),4);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__edit_play_smpl[2]),4);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__edit_play_smpl[3]),4);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__edit_play_smpl[4]),4);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__edit_play_smpl[5]),4);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__edit_play_smpl[6]),4);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__edit_play_smpl[7]),4);
        bufp->chgBit(oldp+59,((IData)((0U != (IData)(vlSelf->top__DOT__mode)))));
        bufp->chgBit(oldp+60,((1U & (~ (IData)(vlSelf->top__DOT__mode)))));
    }
    bufp->chgBit(oldp+61,(vlSelf->hz2m));
    bufp->chgBit(oldp+62,(vlSelf->hz100));
    bufp->chgBit(oldp+63,(vlSelf->reset));
    bufp->chgIData(oldp+64,(vlSelf->pb),21);
    bufp->chgCData(oldp+65,(vlSelf->left),8);
    bufp->chgCData(oldp+66,(vlSelf->right),8);
    bufp->chgCData(oldp+67,(vlSelf->ss7),8);
    bufp->chgCData(oldp+68,(vlSelf->ss6),8);
    bufp->chgCData(oldp+69,(vlSelf->ss5),8);
    bufp->chgCData(oldp+70,(vlSelf->ss4),8);
    bufp->chgCData(oldp+71,(vlSelf->ss3),8);
    bufp->chgCData(oldp+72,(vlSelf->ss2),8);
    bufp->chgCData(oldp+73,(vlSelf->ss1),8);
    bufp->chgCData(oldp+74,(vlSelf->ss0),8);
    bufp->chgBit(oldp+75,(vlSelf->red));
    bufp->chgBit(oldp+76,(vlSelf->green));
    bufp->chgBit(oldp+77,(vlSelf->blue));
    bufp->chgCData(oldp+78,(vlSelf->txdata),8);
    bufp->chgCData(oldp+79,(vlSelf->rxdata),8);
    bufp->chgBit(oldp+80,(vlSelf->txclk));
    bufp->chgBit(oldp+81,(vlSelf->rxclk));
    bufp->chgBit(oldp+82,(vlSelf->txready));
    bufp->chgBit(oldp+83,(vlSelf->rxready));
    bufp->chgBit(oldp+84,(vlSelf->top__DOT__strobe));
    bufp->chgCData(oldp+85,(vlSelf->top__DOT__play_seq_out),8);
    bufp->chgCData(oldp+86,((0xfU & vlSelf->pb)),4);
    bufp->chgBit(oldp+87,(vlSelf->top__DOT____Vcellout__pwm1__pwm_out));
    bufp->chgIData(oldp+88,((0xfffffU & vlSelf->pb)),20);
    bufp->chgCData(oldp+89,(vlSelf->top__DOT__sk1__DOT__strobe_new),2);
    bufp->chgBit(oldp+90,((0U != (0xfffffU & vlSelf->pb))));
    bufp->chgBit(oldp+91,((1U & (vlSelf->pb >> 0xbU))));
    bufp->chgBit(oldp+92,((1U & (vlSelf->pb >> 8U))));
    bufp->chgCData(oldp+93,(vlSelf->top__DOT__sq2__DOT__seq),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
