// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->hz2m) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__hz2m))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->hz2m) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__hz2m)));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->reset) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))) 
                                      | ((IData)(vlSelf->top__DOT__strobe) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__strobe))));
    vlSelf->__VactTriggered.at(3U) = (((IData)(vlSelf->reset) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))) 
                                      | ((IData)(vlSelf->top__DOT__bpm_clk) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__bpm_clk))));
    vlSelf->__VactTriggered.at(4U) = (((IData)(vlSelf->reset) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))) 
                                      | ((IData)(vlSelf->top__DOT__sample_clk) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__sample_clk))));
    vlSelf->__Vtrigrprev__TOP__hz2m = vlSelf->hz2m;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
    vlSelf->__Vtrigrprev__TOP__top__DOT__strobe = vlSelf->top__DOT__strobe;
    vlSelf->__Vtrigrprev__TOP__top__DOT__bpm_clk = vlSelf->top__DOT__bpm_clk;
    vlSelf->__Vtrigrprev__TOP__top__DOT__sample_clk 
        = vlSelf->top__DOT__sample_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
