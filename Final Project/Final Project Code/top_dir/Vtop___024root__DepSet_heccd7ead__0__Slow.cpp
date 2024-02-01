// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__hz2m = vlSelf->hz2m;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
    vlSelf->__Vtrigrprev__TOP__top__DOT__strobe = vlSelf->top__DOT__strobe;
    vlSelf->__Vtrigrprev__TOP__top__DOT__bpm_clk = vlSelf->top__DOT__bpm_clk;
    vlSelf->__Vtrigrprev__TOP__top__DOT__sample_clk 
        = vlSelf->top__DOT__sample_clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h87dd4852__0;
    VlWide<5>/*159:0*/ __Vtemp_h994d34ce__0;
    VlWide<5>/*159:0*/ __Vtemp_h6435efe6__0;
    VlWide<5>/*159:0*/ __Vtemp_hdd2950f0__0;
    // Body
    __Vtemp_h87dd4852__0[0U] = 0x2e6d656dU;
    __Vtemp_h87dd4852__0[1U] = 0x6b69636bU;
    __Vtemp_h87dd4852__0[2U] = 0x64696f2fU;
    __Vtemp_h87dd4852__0[3U] = 0x2e2f6175U;
    __Vtemp_h87dd4852__0[4U] = 0x2eU;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h87dd4852__0)
                 ,  &(vlSelf->top__DOT__sample_kick__DOT__audio_mem)
                 , 0U, 0xfa0U);
    __Vtemp_h994d34ce__0[0U] = 0x2e6d656dU;
    __Vtemp_h994d34ce__0[1U] = 0x636c6170U;
    __Vtemp_h994d34ce__0[2U] = 0x64696f2fU;
    __Vtemp_h994d34ce__0[3U] = 0x2e2f6175U;
    __Vtemp_h994d34ce__0[4U] = 0x2eU;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h994d34ce__0)
                 ,  &(vlSelf->top__DOT__sample_clap__DOT__audio_mem)
                 , 0U, 0xfa0U);
    __Vtemp_h6435efe6__0[0U] = 0x2e6d656dU;
    __Vtemp_h6435efe6__0[1U] = 0x69686174U;
    __Vtemp_h6435efe6__0[2U] = 0x696f2f68U;
    __Vtemp_h6435efe6__0[3U] = 0x2f617564U;
    __Vtemp_h6435efe6__0[4U] = 0x2e2eU;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h6435efe6__0)
                 ,  &(vlSelf->top__DOT__sample_hihat__DOT__audio_mem)
                 , 0U, 0xfa0U);
    __Vtemp_hdd2950f0__0[0U] = 0x2e6d656dU;
    __Vtemp_hdd2950f0__0[1U] = 0x6e617265U;
    __Vtemp_hdd2950f0__0[2U] = 0x696f2f73U;
    __Vtemp_hdd2950f0__0[3U] = 0x2f617564U;
    __Vtemp_hdd2950f0__0[4U] = 0x2e2eU;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_hdd2950f0__0)
                 ,  &(vlSelf->top__DOT__sample_snare__DOT__audio_mem)
                 , 0U, 0xfa0U);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->red = (2U == (IData)(vlSelf->top__DOT__mode));
    vlSelf->green = (1U == (IData)(vlSelf->top__DOT__mode));
    vlSelf->blue = (0U == (IData)(vlSelf->top__DOT__mode));
    vlSelf->top__DOT__strobe = (1U & ((IData)(vlSelf->top__DOT__sk1__DOT__strobe_new) 
                                      >> 1U));
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
    vlSelf->top__DOT__edit_play_smpl[7U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_8;
    vlSelf->top__DOT__edit_play_smpl[6U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_7;
    vlSelf->top__DOT__edit_play_smpl[5U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_6;
    vlSelf->top__DOT__edit_play_smpl[4U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_5;
    vlSelf->top__DOT__edit_play_smpl[3U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_4;
    vlSelf->top__DOT__edit_play_smpl[2U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_3;
    vlSelf->top__DOT__edit_play_smpl[1U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_2;
    vlSelf->top__DOT__edit_play_smpl[0U] = vlSelf->top__DOT____Vcellout__se1__seq_smpl_1;
    vlSelf->top__DOT__sample_data[0U] = vlSelf->top__DOT____Vcellout__sample_kick__out;
    vlSelf->top__DOT__sample_data[1U] = vlSelf->top__DOT____Vcellout__sample_clap__out;
    vlSelf->top__DOT__sample_data[2U] = vlSelf->top__DOT____Vcellout__sample_hihat__out;
    vlSelf->top__DOT__sample_data[3U] = vlSelf->top__DOT____Vcellout__sample_snare__out;
    vlSelf->top__DOT____VdfgTmp_hc00145b2__0 = (IData)(
                                                       (0U 
                                                        == 
                                                        (0xcU 
                                                         & (IData)(vlSelf->top__DOT__keycode))));
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge hz2m or posedge reset)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge hz2m)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge reset or posedge top.strobe)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge reset or posedge top.bpm_clk)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge reset or posedge top.sample_clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge hz2m or posedge reset)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge hz2m)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge reset or posedge top.strobe)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge reset or posedge top.bpm_clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge reset or posedge top.sample_clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->hz2m = 0;
    vlSelf->hz100 = 0;
    vlSelf->reset = 0;
    vlSelf->pb = 0;
    vlSelf->left = 0;
    vlSelf->right = 0;
    vlSelf->ss7 = 0;
    vlSelf->ss6 = 0;
    vlSelf->ss5 = 0;
    vlSelf->ss4 = 0;
    vlSelf->ss3 = 0;
    vlSelf->ss2 = 0;
    vlSelf->ss1 = 0;
    vlSelf->ss0 = 0;
    vlSelf->red = 0;
    vlSelf->green = 0;
    vlSelf->blue = 0;
    vlSelf->txdata = 0;
    vlSelf->rxdata = 0;
    vlSelf->txclk = 0;
    vlSelf->rxclk = 0;
    vlSelf->txready = 0;
    vlSelf->rxready = 0;
    vlSelf->top__DOT__strobe = 0;
    vlSelf->top__DOT__bpm_clk = 0;
    vlSelf->top__DOT__prev_bpm_clk = 0;
    vlSelf->top__DOT__sample_clk = 0;
    vlSelf->top__DOT__keycode = 0;
    vlSelf->top__DOT__mode = 0;
    vlSelf->top__DOT__edit_seq_out = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__edit_play_smpl[__Vi0] = 0;
    }
    vlSelf->top__DOT__play_seq_out = 0;
    vlSelf->top__DOT__seq_out = 0;
    vlSelf->top__DOT__seq_sel = 0;
    vlSelf->top__DOT__play_smpl = 0;
    vlSelf->top__DOT__enable_ctr = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__sample_data[__Vi0] = 0;
    }
    vlSelf->top__DOT__kick_clap_sum = 0;
    vlSelf->top__DOT__hihat_snare_sum = 0;
    vlSelf->top__DOT__total_signal = 0;
    vlSelf->top__DOT____Vcellout__se1__seq_smpl_8 = 0;
    vlSelf->top__DOT____Vcellout__se1__seq_smpl_7 = 0;
    vlSelf->top__DOT____Vcellout__se1__seq_smpl_6 = 0;
    vlSelf->top__DOT____Vcellout__se1__seq_smpl_5 = 0;
    vlSelf->top__DOT____Vcellout__se1__seq_smpl_4 = 0;
    vlSelf->top__DOT____Vcellout__se1__seq_smpl_3 = 0;
    vlSelf->top__DOT____Vcellout__se1__seq_smpl_2 = 0;
    vlSelf->top__DOT____Vcellout__se1__seq_smpl_1 = 0;
    vlSelf->top__DOT____Vcellout__sample_kick__out = 0;
    vlSelf->top__DOT____Vcellout__sample_clap__out = 0;
    vlSelf->top__DOT____Vcellout__sample_hihat__out = 0;
    vlSelf->top__DOT____Vcellout__sample_snare__out = 0;
    vlSelf->top__DOT____Vcellout__pwm1__pwm_out = 0;
    vlSelf->top__DOT____VdfgTmp_hc00145b2__0 = 0;
    vlSelf->top__DOT__sk1__DOT__strobe_new = 0;
    vlSelf->top__DOT__sq1__DOT__seq = 0;
    vlSelf->top__DOT__clk1__DOT__count = 0;
    vlSelf->top__DOT__sq2__DOT__seq = 0;
    vlSelf->top__DOT__clk2__DOT__count = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__sample_kick__DOT__audio_mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__sample_kick__DOT__index = 0;
    vlSelf->top__DOT__sample_kick__DOT__prev_en = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__sample_clap__DOT__audio_mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__sample_clap__DOT__index = 0;
    vlSelf->top__DOT__sample_clap__DOT__prev_en = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__sample_hihat__DOT__audio_mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__sample_hihat__DOT__index = 0;
    vlSelf->top__DOT__sample_hihat__DOT__prev_en = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__sample_snare__DOT__audio_mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__sample_snare__DOT__index = 0;
    vlSelf->top__DOT__sample_snare__DOT__prev_en = 0;
    vlSelf->top__DOT__pwm1__DOT__counter = 0;
    vlSelf->top__DOT__pwm1__DOT__limit = 0;
    vlSelf->__Vdly__top__DOT__enable_ctr = 0;
    vlSelf->__Vtrigrprev__TOP__hz2m = 0;
    vlSelf->__Vtrigrprev__TOP__reset = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__strobe = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__bpm_clk = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__sample_clk = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
