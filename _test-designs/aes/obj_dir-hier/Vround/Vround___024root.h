// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vround.h for the primary calling header

#ifndef VERILATED_VROUND___024ROOT_H_
#define VERILATED_VROUND___024ROOT_H_  // guard

#include "verilated.h"
class Vround_sbox;


class Vround__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vround___024root final : public VerilatedModule {
  public:
    // CELLS
    Vround_sbox* __PVT__round__DOT__a1__DOT__q0;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q1;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q2;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q3;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q4;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q5;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q6;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q7;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q8;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q9;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q10;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q11;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q12;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q13;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q14;
    Vround_sbox* __PVT__round__DOT__a1__DOT__q15;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_INW(data_in,127,0,4);
        VL_INW(key_in,127,0,4);
        VL_OUTW(data_out,127,0,4);
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__0__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__0__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__1__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__1__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__2__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__2__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__3__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__3__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__4__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__4__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__5__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__5__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__6__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__6__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__7__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__7__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__8__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__8__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__9__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__9__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__10__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__10__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__11__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__11__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__12__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__12__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__13__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__13__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__14__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__14__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__15__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__15__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__16__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__16__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__17__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__17__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__18__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__18__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__19__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__19__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__20__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__20__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__21__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__21__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__22__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__22__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__23__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__23__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__24__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__24__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__25__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__25__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__26__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__26__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__27__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__27__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__28__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__28__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__29__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__29__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__30__Vfuncout;
    };
    struct {
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__30__i;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__31__Vfuncout;
        CData/*7:0*/ __Vfunc_round__DOT__m0__DOT__xtime__31__i;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q0__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q1__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q2__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q3__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q4__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q5__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q6__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q7__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q8__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q9__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q10__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q11__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q12__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q13__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q14__data__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__round__DOT__a1__DOT__q15__data__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VlWide<4>/*127:0*/ round__DOT__mix_data_out;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<16> __VactTriggered;
    VlTriggerVec<16> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vround__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vround___024root(Vround__Syms* symsp, const char* v__name);
    ~Vround___024root();
    VL_UNCOPYABLE(Vround___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
