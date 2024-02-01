// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__keycode = ((7U & (IData)(vlSelf->top__DOT__keycode)) 
                                 | ((((IData)((0U != 
                                               (0xfU 
                                                & (vlSelf->pb 
                                                   >> 0x10U)))) 
                                      << 1U) | (0U 
                                                != 
                                                (0xffU 
                                                 & (vlSelf->pb 
                                                    >> 8U)))) 
                                    << 3U));
    vlSelf->top__DOT__keycode = ((0x1bU & (IData)(vlSelf->top__DOT__keycode)) 
                                 | ((IData)((0U != 
                                             (0xf0f0U 
                                              & vlSelf->pb))) 
                                    << 2U));
    vlSelf->top__DOT__keycode = ((0x1dU & (IData)(vlSelf->top__DOT__keycode)) 
                                 | ((IData)((0U != 
                                             (0xcccccU 
                                              & vlSelf->pb))) 
                                    << 1U));
    vlSelf->top__DOT__keycode = ((0x1eU & (IData)(vlSelf->top__DOT__keycode)) 
                                 | (IData)((0U != (0xaaaaaU 
                                                   & vlSelf->pb))));
    vlSelf->top__DOT____VdfgTmp_hc00145b2__0 = (IData)(
                                                       (0U 
                                                        == 
                                                        (0xcU 
                                                         & (IData)(vlSelf->top__DOT__keycode))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__top__DOT__prev_bpm_clk;
    __Vdly__top__DOT__prev_bpm_clk = 0;
    CData/*0:0*/ __Vdly__top__DOT__bpm_clk;
    __Vdly__top__DOT__bpm_clk = 0;
    IData/*19:0*/ __Vdly__top__DOT__clk1__DOT__count;
    __Vdly__top__DOT__clk1__DOT__count = 0;
    CData/*0:0*/ __Vdly__top__DOT__sample_clk;
    __Vdly__top__DOT__sample_clk = 0;
    CData/*7:0*/ __Vdly__top__DOT__clk2__DOT__count;
    __Vdly__top__DOT__clk2__DOT__count = 0;
    // Body
    __Vdly__top__DOT__clk2__DOT__count = vlSelf->top__DOT__clk2__DOT__count;
    __Vdly__top__DOT__sample_clk = vlSelf->top__DOT__sample_clk;
    __Vdly__top__DOT__clk1__DOT__count = vlSelf->top__DOT__clk1__DOT__count;
    __Vdly__top__DOT__bpm_clk = vlSelf->top__DOT__bpm_clk;
    vlSelf->__Vdly__top__DOT__enable_ctr = vlSelf->top__DOT__enable_ctr;
    __Vdly__top__DOT__prev_bpm_clk = vlSelf->top__DOT__prev_bpm_clk;
    if (vlSelf->reset) {
        vlSelf->top__DOT__pwm1__DOT__counter = 0U;
        __Vdly__top__DOT__sample_clk = 0U;
        __Vdly__top__DOT__clk2__DOT__count = 0U;
        __Vdly__top__DOT__bpm_clk = 0U;
        __Vdly__top__DOT__clk1__DOT__count = 0U;
        __Vdly__top__DOT__prev_bpm_clk = 0U;
        vlSelf->__Vdly__top__DOT__enable_ctr = 0U;
        vlSelf->top__DOT__seq_out = 0U;
    } else {
        vlSelf->top__DOT__pwm1__DOT__counter = (0x3fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__pwm1__DOT__counter)));
        __Vdly__top__DOT__clk2__DOT__count = (0xffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__clk2__DOT__count)));
        if ((0x7fU == (IData)(vlSelf->top__DOT__clk2__DOT__count))) {
            __Vdly__top__DOT__sample_clk = (1U & (~ (IData)(vlSelf->top__DOT__sample_clk)));
            __Vdly__top__DOT__clk2__DOT__count = 0U;
        }
        __Vdly__top__DOT__clk1__DOT__count = (0xfffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->top__DOT__clk1__DOT__count));
        if ((0x7a11fU == vlSelf->top__DOT__clk1__DOT__count)) {
            __Vdly__top__DOT__bpm_clk = (1U & (~ (IData)(vlSelf->top__DOT__bpm_clk)));
            __Vdly__top__DOT__clk1__DOT__count = 0U;
        }
        if ((1U == (IData)(vlSelf->top__DOT__mode))) {
            if (((~ (IData)(vlSelf->top__DOT__prev_bpm_clk)) 
                 & (IData)(vlSelf->top__DOT__bpm_clk))) {
                vlSelf->__Vdly__top__DOT__enable_ctr = 0U;
                __Vdly__top__DOT__prev_bpm_clk = 1U;
            } else if (((IData)(vlSelf->top__DOT__prev_bpm_clk) 
                        & (~ (IData)(vlSelf->top__DOT__bpm_clk)))) {
                vlSelf->__Vdly__top__DOT__enable_ctr = 0x7a11fU;
                __Vdly__top__DOT__prev_bpm_clk = 0U;
            } else {
                vlSelf->__Vdly__top__DOT__enable_ctr 
                    = ((0xf423fU == vlSelf->top__DOT__enable_ctr)
                        ? 0U : ((IData)(1U) + vlSelf->top__DOT__enable_ctr));
            }
        } else {
            __Vdly__top__DOT__prev_bpm_clk = 0U;
            vlSelf->__Vdly__top__DOT__enable_ctr = 0U;
        }
        if ((0U == (IData)(vlSelf->top__DOT__mode))) {
            vlSelf->top__DOT__seq_out = vlSelf->top__DOT__edit_seq_out;
        } else if ((1U == (IData)(vlSelf->top__DOT__mode))) {
            vlSelf->top__DOT__seq_out = vlSelf->top__DOT__play_seq_out;
        }
    }
    vlSelf->top__DOT__sample_clk = __Vdly__top__DOT__sample_clk;
    vlSelf->top__DOT__clk2__DOT__count = __Vdly__top__DOT__clk2__DOT__count;
    vlSelf->top__DOT__clk1__DOT__count = __Vdly__top__DOT__clk1__DOT__count;
    vlSelf->top__DOT__prev_bpm_clk = __Vdly__top__DOT__prev_bpm_clk;
    vlSelf->top__DOT__bpm_clk = __Vdly__top__DOT__bpm_clk;
    vlSelf->left = ((0xfdU & (IData)(vlSelf->left)) 
                    | (2U & ((IData)(vlSelf->top__DOT__seq_out) 
                             >> 3U)));
    vlSelf->left = ((0xf7U & (IData)(vlSelf->left)) 
                    | (8U & ((IData)(vlSelf->top__DOT__seq_out) 
                             >> 2U)));
    vlSelf->left = ((0xdfU & (IData)(vlSelf->left)) 
                    | (0x20U & ((IData)(vlSelf->top__DOT__seq_out) 
                                >> 1U)));
    vlSelf->left = ((0x7fU & (IData)(vlSelf->left)) 
                    | (0x80U & (IData)(vlSelf->top__DOT__seq_out)));
    vlSelf->right = ((0xf7U & (IData)(vlSelf->right)) 
                     | (8U & ((IData)(vlSelf->top__DOT__seq_out) 
                              << 2U)));
    vlSelf->right = ((0xdfU & (IData)(vlSelf->right)) 
                     | (0x20U & ((IData)(vlSelf->top__DOT__seq_out) 
                                 << 3U)));
    vlSelf->right = ((0x7fU & (IData)(vlSelf->right)) 
                     | (0x80U & ((IData)(vlSelf->top__DOT__seq_out) 
                                 << 4U)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__sk1__DOT__strobe_new = ((IData)(vlSelf->reset)
                                               ? 0U
                                               : (3U 
                                                  & (((IData)(vlSelf->top__DOT__sk1__DOT__strobe_new) 
                                                      << 1U) 
                                                     | (0U 
                                                        != 
                                                        (0xfffffU 
                                                         & vlSelf->pb)))));
    vlSelf->top__DOT__strobe = (1U & ((IData)(vlSelf->top__DOT__sk1__DOT__strobe_new) 
                                      >> 1U));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    SData/*11:0*/ __Vdly__top__DOT__sample_kick__DOT__index;
    __Vdly__top__DOT__sample_kick__DOT__index = 0;
    SData/*11:0*/ __Vdly__top__DOT__sample_clap__DOT__index;
    __Vdly__top__DOT__sample_clap__DOT__index = 0;
    SData/*11:0*/ __Vdly__top__DOT__sample_hihat__DOT__index;
    __Vdly__top__DOT__sample_hihat__DOT__index = 0;
    SData/*11:0*/ __Vdly__top__DOT__sample_snare__DOT__index;
    __Vdly__top__DOT__sample_snare__DOT__index = 0;
    // Body
    __Vdly__top__DOT__sample_snare__DOT__index = vlSelf->top__DOT__sample_snare__DOT__index;
    __Vdly__top__DOT__sample_hihat__DOT__index = vlSelf->top__DOT__sample_hihat__DOT__index;
    __Vdly__top__DOT__sample_clap__DOT__index = vlSelf->top__DOT__sample_clap__DOT__index;
    __Vdly__top__DOT__sample_kick__DOT__index = vlSelf->top__DOT__sample_kick__DOT__index;
    if (vlSelf->reset) {
        __Vdly__top__DOT__sample_snare__DOT__index = 0U;
        vlSelf->top__DOT____Vcellout__sample_snare__out = 0U;
        __Vdly__top__DOT__sample_hihat__DOT__index = 0U;
        vlSelf->top__DOT____Vcellout__sample_hihat__out = 0U;
        __Vdly__top__DOT__sample_clap__DOT__index = 0U;
        vlSelf->top__DOT____Vcellout__sample_clap__out = 0U;
        __Vdly__top__DOT__sample_kick__DOT__index = 0U;
        vlSelf->top__DOT____Vcellout__sample_kick__out = 0U;
    } else {
        vlSelf->top__DOT____Vcellout__sample_snare__out 
            = vlSelf->top__DOT__sample_snare__DOT__audio_mem
            [vlSelf->top__DOT__sample_snare__DOT__index];
        __Vdly__top__DOT__sample_snare__DOT__index 
            = (0xfffU & (((IData)(vlSelf->top__DOT__sample_snare__DOT__prev_en) 
                          & (IData)(vlSelf->top__DOT__play_smpl))
                          ? ((0xfa0U <= (IData)(vlSelf->top__DOT__sample_snare__DOT__index))
                              ? 0U : ((IData)(1U) + (IData)(vlSelf->top__DOT__sample_snare__DOT__index)))
                          : (((IData)(vlSelf->top__DOT__sample_snare__DOT__prev_en) 
                              & (~ (IData)(vlSelf->top__DOT__play_smpl)))
                              ? 0U : (IData)(vlSelf->top__DOT__sample_snare__DOT__index))));
        vlSelf->top__DOT____Vcellout__sample_hihat__out 
            = vlSelf->top__DOT__sample_hihat__DOT__audio_mem
            [vlSelf->top__DOT__sample_hihat__DOT__index];
        __Vdly__top__DOT__sample_hihat__DOT__index 
            = (0xfffU & (((IData)(vlSelf->top__DOT__sample_hihat__DOT__prev_en) 
                          & ((IData)(vlSelf->top__DOT__play_smpl) 
                             >> 1U)) ? ((0xfa0U <= (IData)(vlSelf->top__DOT__sample_hihat__DOT__index))
                                         ? 0U : ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__sample_hihat__DOT__index)))
                          : (((IData)(vlSelf->top__DOT__sample_hihat__DOT__prev_en) 
                              & (~ ((IData)(vlSelf->top__DOT__play_smpl) 
                                    >> 1U))) ? 0U : (IData)(vlSelf->top__DOT__sample_hihat__DOT__index))));
        vlSelf->top__DOT____Vcellout__sample_clap__out 
            = vlSelf->top__DOT__sample_clap__DOT__audio_mem
            [vlSelf->top__DOT__sample_clap__DOT__index];
        __Vdly__top__DOT__sample_clap__DOT__index = 
            (0xfffU & (((IData)(vlSelf->top__DOT__sample_clap__DOT__prev_en) 
                        & ((IData)(vlSelf->top__DOT__play_smpl) 
                           >> 2U)) ? ((0xfa0U <= (IData)(vlSelf->top__DOT__sample_clap__DOT__index))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sample_clap__DOT__index)))
                        : (((IData)(vlSelf->top__DOT__sample_clap__DOT__prev_en) 
                            & (~ ((IData)(vlSelf->top__DOT__play_smpl) 
                                  >> 2U))) ? 0U : (IData)(vlSelf->top__DOT__sample_clap__DOT__index))));
        vlSelf->top__DOT____Vcellout__sample_kick__out 
            = vlSelf->top__DOT__sample_kick__DOT__audio_mem
            [vlSelf->top__DOT__sample_kick__DOT__index];
        __Vdly__top__DOT__sample_kick__DOT__index = 
            (0xfffU & (((IData)(vlSelf->top__DOT__sample_kick__DOT__prev_en) 
                        & ((IData)(vlSelf->top__DOT__play_smpl) 
                           >> 3U)) ? ((0xfa0U <= (IData)(vlSelf->top__DOT__sample_kick__DOT__index))
                                       ? 0U : ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__sample_kick__DOT__index)))
                        : (((IData)(vlSelf->top__DOT__sample_kick__DOT__prev_en) 
                            & (~ ((IData)(vlSelf->top__DOT__play_smpl) 
                                  >> 3U))) ? 0U : (IData)(vlSelf->top__DOT__sample_kick__DOT__index))));
    }
    vlSelf->top__DOT__sample_snare__DOT__index = __Vdly__top__DOT__sample_snare__DOT__index;
    vlSelf->top__DOT__sample_hihat__DOT__index = __Vdly__top__DOT__sample_hihat__DOT__index;
    vlSelf->top__DOT__sample_clap__DOT__index = __Vdly__top__DOT__sample_clap__DOT__index;
    vlSelf->top__DOT__sample_kick__DOT__index = __Vdly__top__DOT__sample_kick__DOT__index;
    vlSelf->top__DOT__sample_data[3U] = vlSelf->top__DOT____Vcellout__sample_snare__out;
    vlSelf->top__DOT__sample_snare__DOT__prev_en = 
        (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top__DOT__play_smpl)));
    vlSelf->top__DOT__sample_data[2U] = vlSelf->top__DOT____Vcellout__sample_hihat__out;
    vlSelf->top__DOT__sample_hihat__DOT__prev_en = 
        (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->top__DOT__play_smpl) 
                                             >> 1U)));
    vlSelf->top__DOT__sample_data[1U] = vlSelf->top__DOT____Vcellout__sample_clap__out;
    vlSelf->top__DOT__sample_clap__DOT__prev_en = (1U 
                                                   & ((~ (IData)(vlSelf->reset)) 
                                                      & ((IData)(vlSelf->top__DOT__play_smpl) 
                                                         >> 2U)));
    vlSelf->top__DOT__sample_data[0U] = vlSelf->top__DOT____Vcellout__sample_kick__out;
    vlSelf->top__DOT__sample_kick__DOT__prev_en = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & ((IData)(vlSelf->top__DOT__play_smpl) 
                                                      >> 3U));
    vlSelf->top__DOT__kick_clap_sum = (0xffU & (vlSelf->top__DOT__sample_data
                                                [0U] 
                                                + vlSelf->top__DOT__sample_data
                                                [1U]));
    vlSelf->top__DOT__hihat_snare_sum = (0xffU & (vlSelf->top__DOT__sample_data
                                                  [2U] 
                                                  + 
                                                  vlSelf->top__DOT__sample_data
                                                  [3U]));
    if ((1U & (((vlSelf->top__DOT__sample_data[0U] 
                 & vlSelf->top__DOT__sample_data[1U]) 
                >> 7U) & (~ ((IData)(vlSelf->top__DOT__kick_clap_sum) 
                             >> 7U))))) {
        vlSelf->top__DOT__kick_clap_sum = 0x80U;
    } else if ((IData)((((IData)(vlSelf->top__DOT__kick_clap_sum) 
                         >> 7U) & ((~ (vlSelf->top__DOT__sample_data
                                       [0U] >> 7U)) 
                                   & (~ (vlSelf->top__DOT__sample_data
                                         [1U] >> 7U)))))) {
        vlSelf->top__DOT__kick_clap_sum = 0x7fU;
    }
    if ((1U & (((vlSelf->top__DOT__sample_data[2U] 
                 & vlSelf->top__DOT__sample_data[3U]) 
                >> 7U) & (~ ((IData)(vlSelf->top__DOT__hihat_snare_sum) 
                             >> 7U))))) {
        vlSelf->top__DOT__hihat_snare_sum = 0x80U;
    } else if ((IData)((((IData)(vlSelf->top__DOT__hihat_snare_sum) 
                         >> 7U) & ((~ (vlSelf->top__DOT__sample_data
                                       [2U] >> 7U)) 
                                   & (~ (vlSelf->top__DOT__sample_data
                                         [3U] >> 7U)))))) {
        vlSelf->top__DOT__hihat_snare_sum = 0x7fU;
    }
    vlSelf->top__DOT__total_signal = (0xffU & ((IData)(vlSelf->top__DOT__kick_clap_sum) 
                                               + (IData)(vlSelf->top__DOT__hihat_snare_sum)));
    if ((1U & ((((IData)(vlSelf->top__DOT__kick_clap_sum) 
                 & (IData)(vlSelf->top__DOT__hihat_snare_sum)) 
                >> 7U) & (~ ((IData)(vlSelf->top__DOT__total_signal) 
                             >> 7U))))) {
        vlSelf->top__DOT__total_signal = 0x80U;
    } else if ((IData)((((~ ((IData)(vlSelf->top__DOT__kick_clap_sum) 
                             >> 7U)) & (~ ((IData)(vlSelf->top__DOT__hihat_snare_sum) 
                                           >> 7U))) 
                        & ((IData)(vlSelf->top__DOT__total_signal) 
                           >> 7U)))) {
        vlSelf->top__DOT__total_signal = 0x7fU;
    }
    vlSelf->top__DOT__total_signal = (0x80U ^ (IData)(vlSelf->top__DOT__total_signal));
    vlSelf->top__DOT__total_signal = (0xffU & ((IData)(vlSelf->top__DOT__total_signal) 
                                               >> 2U));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->top__DOT____Vcellout__se1__seq_smpl_8 = 0U;
        vlSelf->top__DOT____Vcellout__se1__seq_smpl_7 = 0U;
        vlSelf->top__DOT____Vcellout__se1__seq_smpl_6 = 0U;
        vlSelf->top__DOT____Vcellout__se1__seq_smpl_5 = 0U;
        vlSelf->top__DOT____Vcellout__se1__seq_smpl_4 = 0U;
        vlSelf->top__DOT____Vcellout__se1__seq_smpl_3 = 0U;
        vlSelf->top__DOT____Vcellout__se1__seq_smpl_2 = 0U;
        vlSelf->top__DOT____Vcellout__se1__seq_smpl_1 = 0U;
        vlSelf->top__DOT__sq1__DOT__seq = 0x80U;
    } else {
        if ((0U == (IData)(vlSelf->top__DOT__mode))) {
            if (((((((((0U == (IData)(vlSelf->top__DOT__seq_sel)) 
                       | (1U == (IData)(vlSelf->top__DOT__seq_sel))) 
                      | (2U == (IData)(vlSelf->top__DOT__seq_sel))) 
                     | (3U == (IData)(vlSelf->top__DOT__seq_sel))) 
                    | (4U == (IData)(vlSelf->top__DOT__seq_sel))) 
                   | (5U == (IData)(vlSelf->top__DOT__seq_sel))) 
                  | (6U == (IData)(vlSelf->top__DOT__seq_sel))) 
                 | (7U == (IData)(vlSelf->top__DOT__seq_sel)))) {
                if ((0U != (IData)(vlSelf->top__DOT__seq_sel))) {
                    if ((1U != (IData)(vlSelf->top__DOT__seq_sel))) {
                        if ((2U != (IData)(vlSelf->top__DOT__seq_sel))) {
                            if ((3U != (IData)(vlSelf->top__DOT__seq_sel))) {
                                if ((4U != (IData)(vlSelf->top__DOT__seq_sel))) {
                                    if ((5U != (IData)(vlSelf->top__DOT__seq_sel))) {
                                        if ((6U != (IData)(vlSelf->top__DOT__seq_sel))) {
                                            vlSelf->top__DOT____Vcellout__se1__seq_smpl_8 
                                                = (0xfU 
                                                   & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_8) 
                                                      ^ vlSelf->pb));
                                        }
                                        if ((6U == (IData)(vlSelf->top__DOT__seq_sel))) {
                                            vlSelf->top__DOT____Vcellout__se1__seq_smpl_7 
                                                = (0xfU 
                                                   & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_7) 
                                                      ^ vlSelf->pb));
                                        }
                                    }
                                    if ((5U == (IData)(vlSelf->top__DOT__seq_sel))) {
                                        vlSelf->top__DOT____Vcellout__se1__seq_smpl_6 
                                            = (0xfU 
                                               & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_6) 
                                                  ^ vlSelf->pb));
                                    }
                                }
                                if ((4U == (IData)(vlSelf->top__DOT__seq_sel))) {
                                    vlSelf->top__DOT____Vcellout__se1__seq_smpl_5 
                                        = (0xfU & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_5) 
                                                   ^ vlSelf->pb));
                                }
                            }
                            if ((3U == (IData)(vlSelf->top__DOT__seq_sel))) {
                                vlSelf->top__DOT____Vcellout__se1__seq_smpl_4 
                                    = (0xfU & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_4) 
                                               ^ vlSelf->pb));
                            }
                        }
                        if ((2U == (IData)(vlSelf->top__DOT__seq_sel))) {
                            vlSelf->top__DOT____Vcellout__se1__seq_smpl_3 
                                = (0xfU & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_3) 
                                           ^ vlSelf->pb));
                        }
                    }
                    if ((1U == (IData)(vlSelf->top__DOT__seq_sel))) {
                        vlSelf->top__DOT____Vcellout__se1__seq_smpl_2 
                            = (0xfU & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_2) 
                                       ^ vlSelf->pb));
                    }
                }
                if ((0U == (IData)(vlSelf->top__DOT__seq_sel))) {
                    vlSelf->top__DOT____Vcellout__se1__seq_smpl_1 
                        = (0xfU & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_1) 
                                   ^ vlSelf->pb));
                }
            }
        }
        vlSelf->top__DOT__sq1__DOT__seq = ((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->top__DOT__mode)))
                                            ? 0x80U
                                            : ((0x100U 
                                                & vlSelf->pb)
                                                ? (
                                                   (0x80U 
                                                    & ((IData)(vlSelf->top__DOT__sq1__DOT__seq) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & ((IData)(vlSelf->top__DOT__sq1__DOT__seq) 
                                                         >> 1U)))
                                                : (
                                                   (0x800U 
                                                    & vlSelf->pb)
                                                    ? 
                                                   ((0xfeU 
                                                     & ((IData)(vlSelf->top__DOT__sq1__DOT__seq) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->top__DOT__sq1__DOT__seq) 
                                                          >> 7U)))
                                                    : (IData)(vlSelf->top__DOT__sq1__DOT__seq))));
    }
    vlSelf->ss7 = ((0xf9U & (IData)(vlSelf->ss7)) | 
                   ((4U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_8) 
                           << 2U)) | (2U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_8) 
                                            >> 1U))));
    vlSelf->ss7 = ((0xcfU & (IData)(vlSelf->ss7)) | 
                   ((0x20U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_8) 
                              << 2U)) | (0x10U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_8) 
                                                  << 3U))));
    vlSelf->ss6 = ((0xf9U & (IData)(vlSelf->ss6)) | 
                   ((4U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_7) 
                           << 2U)) | (2U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_7) 
                                            >> 1U))));
    vlSelf->ss6 = ((0xcfU & (IData)(vlSelf->ss6)) | 
                   ((0x20U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_7) 
                              << 2U)) | (0x10U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_7) 
                                                  << 3U))));
    vlSelf->ss5 = ((0xf9U & (IData)(vlSelf->ss5)) | 
                   ((4U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_6) 
                           << 2U)) | (2U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_6) 
                                            >> 1U))));
    vlSelf->ss5 = ((0xcfU & (IData)(vlSelf->ss5)) | 
                   ((0x20U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_6) 
                              << 2U)) | (0x10U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_6) 
                                                  << 3U))));
    vlSelf->ss4 = ((0xf9U & (IData)(vlSelf->ss4)) | 
                   ((4U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_5) 
                           << 2U)) | (2U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_5) 
                                            >> 1U))));
    vlSelf->ss4 = ((0xcfU & (IData)(vlSelf->ss4)) | 
                   ((0x20U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_5) 
                              << 2U)) | (0x10U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_5) 
                                                  << 3U))));
    vlSelf->ss3 = ((0xf9U & (IData)(vlSelf->ss3)) | 
                   ((4U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_4) 
                           << 2U)) | (2U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_4) 
                                            >> 1U))));
    vlSelf->ss3 = ((0xcfU & (IData)(vlSelf->ss3)) | 
                   ((0x20U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_4) 
                              << 2U)) | (0x10U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_4) 
                                                  << 3U))));
    vlSelf->ss2 = ((0xf9U & (IData)(vlSelf->ss2)) | 
                   ((4U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_3) 
                           << 2U)) | (2U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_3) 
                                            >> 1U))));
    vlSelf->ss2 = ((0xcfU & (IData)(vlSelf->ss2)) | 
                   ((0x20U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_3) 
                              << 2U)) | (0x10U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_3) 
                                                  << 3U))));
    vlSelf->ss1 = ((0xf9U & (IData)(vlSelf->ss1)) | 
                   ((4U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_2) 
                           << 2U)) | (2U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_2) 
                                            >> 1U))));
    vlSelf->ss1 = ((0xcfU & (IData)(vlSelf->ss1)) | 
                   ((0x20U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_2) 
                              << 2U)) | (0x10U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_2) 
                                                  << 3U))));
    vlSelf->ss0 = ((0xf9U & (IData)(vlSelf->ss0)) | 
                   ((4U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_1) 
                           << 2U)) | (2U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_1) 
                                            >> 1U))));
    vlSelf->ss0 = ((0xcfU & (IData)(vlSelf->ss0)) | 
                   ((0x20U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_1) 
                              << 2U)) | (0x10U & ((IData)(vlSelf->top__DOT____Vcellout__se1__seq_smpl_1) 
                                                  << 3U))));
    vlSelf->top__DOT__edit_seq_out = vlSelf->top__DOT__sq1__DOT__seq;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__sq2__DOT__seq = ((IData)(vlSelf->reset)
                                        ? 0x80U : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__mode))
                                                    ? 
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->top__DOT__sq2__DOT__seq) 
                                                        << 7U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSelf->top__DOT__sq2__DOT__seq) 
                                                          >> 1U)))
                                                    : 0x80U));
    vlSelf->top__DOT__play_seq_out = vlSelf->top__DOT__sq2__DOT__seq;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->top__DOT__play_smpl = 0U;
    } else if ((0U == (IData)(vlSelf->top__DOT__mode))) {
        vlSelf->top__DOT__play_smpl = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__mode))) {
        vlSelf->top__DOT__play_smpl = (0xfU & (((0xdbba0U 
                                                 >= vlSelf->top__DOT__enable_ctr)
                                                 ? 
                                                vlSelf->top__DOT__edit_play_smpl
                                                [vlSelf->top__DOT__seq_sel]
                                                 : 0U) 
                                               | vlSelf->pb));
    } else if ((2U == (IData)(vlSelf->top__DOT__mode))) {
        vlSelf->top__DOT__play_smpl = (0xfU & vlSelf->pb);
    }
    vlSelf->top__DOT__enable_ctr = vlSelf->__Vdly__top__DOT__enable_ctr;
    vlSelf->top__DOT__seq_sel = ((0x80U & (IData)(vlSelf->top__DOT__seq_out))
                                  ? 7U : ((0x40U & (IData)(vlSelf->top__DOT__seq_out))
                                           ? 6U : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->top__DOT__seq_out))
                                                    ? 5U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->top__DOT__seq_out))
                                                     ? 4U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->top__DOT__seq_out))
                                                      ? 3U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->top__DOT__seq_out))
                                                       ? 2U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->top__DOT__seq_out))
                                                        ? 1U
                                                        : 0U)))))));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT____Vcellout__pwm1__pwm_out = ((IData)(vlSelf->top__DOT__pwm1__DOT__counter) 
                                                   <= 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__total_signal)));
    if (((0x3fU & (IData)(vlSelf->top__DOT__total_signal)) 
         == (IData)(vlSelf->top__DOT__pwm1__DOT__limit))) {
        vlSelf->top__DOT____Vcellout__pwm1__pwm_out = 1U;
    } else if ((0U == (0x3fU & (IData)(vlSelf->top__DOT__total_signal)))) {
        vlSelf->top__DOT____Vcellout__pwm1__pwm_out = 0U;
    }
    vlSelf->right = ((0xfcU & (IData)(vlSelf->right)) 
                     | ((2U & ((IData)(vlSelf->top__DOT__seq_out) 
                               << 1U)) | (IData)(vlSelf->top__DOT____Vcellout__pwm1__pwm_out)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__edit_play_smpl[7U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_8;
    vlSelf->top__DOT__edit_play_smpl[6U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_7;
    vlSelf->top__DOT__edit_play_smpl[5U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_6;
    vlSelf->top__DOT__edit_play_smpl[4U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_5;
    vlSelf->top__DOT__edit_play_smpl[3U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_4;
    vlSelf->top__DOT__edit_play_smpl[2U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_3;
    vlSelf->top__DOT__edit_play_smpl[1U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_2;
    vlSelf->top__DOT__edit_play_smpl[0U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_1;
    if (vlSelf->reset) {
        vlSelf->top__DOT__mode = 0U;
    } else if ((IData)(((0x13U == (0x13U & (IData)(vlSelf->top__DOT__keycode))) 
                        & (IData)(vlSelf->top__DOT____VdfgTmp_hc00145b2__0)))) {
        vlSelf->top__DOT__mode = 0U;
    } else if ((IData)((0x12U == (IData)(vlSelf->top__DOT__keycode)))) {
        vlSelf->top__DOT__mode = 1U;
    } else if ((IData)(((0x10U == (0x13U & (IData)(vlSelf->top__DOT__keycode))) 
                        & (IData)(vlSelf->top__DOT____VdfgTmp_hc00145b2__0)))) {
        vlSelf->top__DOT__mode = 2U;
    }
    vlSelf->red = (2U == (IData)(vlSelf->top__DOT__mode));
    vlSelf->green = (1U == (IData)(vlSelf->top__DOT__mode));
    vlSelf->blue = (0U == (IData)(vlSelf->top__DOT__mode));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(4U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<5> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->hz2m & 0xfeU))) {
        Verilated::overWidthError("hz2m");}
    if (VL_UNLIKELY((vlSelf->hz100 & 0xfeU))) {
        Verilated::overWidthError("hz100");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->pb & 0xffe00000U))) {
        Verilated::overWidthError("pb");}
    if (VL_UNLIKELY((vlSelf->txready & 0xfeU))) {
        Verilated::overWidthError("txready");}
    if (VL_UNLIKELY((vlSelf->rxready & 0xfeU))) {
        Verilated::overWidthError("rxready");}
}
#endif  // VL_DEBUG
