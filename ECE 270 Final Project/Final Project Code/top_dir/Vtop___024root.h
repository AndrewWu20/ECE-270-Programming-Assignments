// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(hz2m,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ top__DOT__strobe;
        CData/*0:0*/ top__DOT__bpm_clk;
        CData/*0:0*/ top__DOT__sample_clk;
        VL_IN8(hz100,0,0);
        VL_OUT8(left,7,0);
        VL_OUT8(right,7,0);
        VL_OUT8(ss7,7,0);
        VL_OUT8(ss6,7,0);
        VL_OUT8(ss5,7,0);
        VL_OUT8(ss4,7,0);
        VL_OUT8(ss3,7,0);
        VL_OUT8(ss2,7,0);
        VL_OUT8(ss1,7,0);
        VL_OUT8(ss0,7,0);
        VL_OUT8(red,0,0);
        VL_OUT8(green,0,0);
        VL_OUT8(blue,0,0);
        VL_OUT8(txdata,7,0);
        VL_IN8(rxdata,7,0);
        VL_OUT8(txclk,0,0);
        VL_OUT8(rxclk,0,0);
        VL_IN8(txready,0,0);
        VL_IN8(rxready,0,0);
        CData/*0:0*/ top__DOT__prev_bpm_clk;
        CData/*4:0*/ top__DOT__keycode;
        CData/*1:0*/ top__DOT__mode;
        CData/*7:0*/ top__DOT__edit_seq_out;
        CData/*7:0*/ top__DOT__play_seq_out;
        CData/*7:0*/ top__DOT__seq_out;
        CData/*2:0*/ top__DOT__seq_sel;
        CData/*3:0*/ top__DOT__play_smpl;
        CData/*7:0*/ top__DOT__kick_clap_sum;
        CData/*7:0*/ top__DOT__hihat_snare_sum;
        CData/*7:0*/ top__DOT__total_signal;
        CData/*3:0*/ top__DOT____Vcellout__se1__seq_smpl_8;
        CData/*3:0*/ top__DOT____Vcellout__se1__seq_smpl_7;
        CData/*3:0*/ top__DOT____Vcellout__se1__seq_smpl_6;
        CData/*3:0*/ top__DOT____Vcellout__se1__seq_smpl_5;
        CData/*3:0*/ top__DOT____Vcellout__se1__seq_smpl_4;
        CData/*3:0*/ top__DOT____Vcellout__se1__seq_smpl_3;
        CData/*3:0*/ top__DOT____Vcellout__se1__seq_smpl_2;
        CData/*3:0*/ top__DOT____Vcellout__se1__seq_smpl_1;
        CData/*7:0*/ top__DOT____Vcellout__sample_kick__out;
        CData/*7:0*/ top__DOT____Vcellout__sample_clap__out;
        CData/*7:0*/ top__DOT____Vcellout__sample_hihat__out;
        CData/*7:0*/ top__DOT____Vcellout__sample_snare__out;
        CData/*0:0*/ top__DOT____Vcellout__pwm1__pwm_out;
        CData/*0:0*/ top__DOT____VdfgTmp_hc00145b2__0;
        CData/*1:0*/ top__DOT__sk1__DOT__strobe_new;
        CData/*7:0*/ top__DOT__sq1__DOT__seq;
        CData/*7:0*/ top__DOT__sq2__DOT__seq;
        CData/*7:0*/ top__DOT__clk2__DOT__count;
        CData/*0:0*/ top__DOT__sample_kick__DOT__prev_en;
        CData/*0:0*/ top__DOT__sample_clap__DOT__prev_en;
        CData/*0:0*/ top__DOT__sample_hihat__DOT__prev_en;
        CData/*0:0*/ top__DOT__sample_snare__DOT__prev_en;
        CData/*5:0*/ top__DOT__pwm1__DOT__counter;
        CData/*5:0*/ top__DOT__pwm1__DOT__limit;
        CData/*0:0*/ __Vtrigrprev__TOP__hz2m;
        CData/*0:0*/ __Vtrigrprev__TOP__reset;
        CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__strobe;
        CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__bpm_clk;
    };
    struct {
        CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__sample_clk;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ top__DOT__sample_kick__DOT__index;
        SData/*11:0*/ top__DOT__sample_clap__DOT__index;
        SData/*11:0*/ top__DOT__sample_hihat__DOT__index;
        SData/*11:0*/ top__DOT__sample_snare__DOT__index;
        VL_IN(pb,20,0);
        IData/*31:0*/ top__DOT__enable_ctr;
        IData/*19:0*/ top__DOT__clk1__DOT__count;
        IData/*31:0*/ __Vdly__top__DOT__enable_ctr;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*3:0*/, 8> top__DOT__edit_play_smpl;
        VlUnpacked<CData/*7:0*/, 5> top__DOT__sample_data;
        VlUnpacked<CData/*7:0*/, 4096> top__DOT__sample_kick__DOT__audio_mem;
        VlUnpacked<CData/*7:0*/, 4096> top__DOT__sample_clap__DOT__audio_mem;
        VlUnpacked<CData/*7:0*/, 4096> top__DOT__sample_hihat__DOT__audio_mem;
        VlUnpacked<CData/*7:0*/, 4096> top__DOT__sample_snare__DOT__audio_mem;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
