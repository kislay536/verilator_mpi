// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vround.h for the primary calling header

#include "Vround__pch.h"
#include "Vround__Syms.h"
#include "Vround___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround___024root___dump_triggers__ico(Vround___024root* vlSelf);
#endif  // VL_DEBUG

void Vround___024root___eval_triggers__ico(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vround___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vround___024root___ico_sequent__TOP__0(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__round__DOT__a1__DOT__q0.data = (vlSelfRef.data_in[3U] 
                                                  >> 0x18U);
    vlSymsp->TOP__round__DOT__a1__DOT__q1.data = (0xffU 
                                                  & (vlSelfRef.data_in[3U] 
                                                     >> 0x10U));
    vlSymsp->TOP__round__DOT__a1__DOT__q2.data = (0xffU 
                                                  & (vlSelfRef.data_in[3U] 
                                                     >> 8U));
    vlSymsp->TOP__round__DOT__a1__DOT__q3.data = (0xffU 
                                                  & vlSelfRef.data_in[3U]);
    vlSymsp->TOP__round__DOT__a1__DOT__q4.data = (vlSelfRef.data_in[2U] 
                                                  >> 0x18U);
    vlSymsp->TOP__round__DOT__a1__DOT__q5.data = (0xffU 
                                                  & (vlSelfRef.data_in[2U] 
                                                     >> 0x10U));
    vlSymsp->TOP__round__DOT__a1__DOT__q6.data = (0xffU 
                                                  & (vlSelfRef.data_in[2U] 
                                                     >> 8U));
    vlSymsp->TOP__round__DOT__a1__DOT__q7.data = (0xffU 
                                                  & vlSelfRef.data_in[2U]);
    vlSymsp->TOP__round__DOT__a1__DOT__q8.data = (vlSelfRef.data_in[1U] 
                                                  >> 0x18U);
    vlSymsp->TOP__round__DOT__a1__DOT__q9.data = (0xffU 
                                                  & (vlSelfRef.data_in[1U] 
                                                     >> 0x10U));
    vlSymsp->TOP__round__DOT__a1__DOT__q10.data = (0xffU 
                                                   & (vlSelfRef.data_in[1U] 
                                                      >> 8U));
    vlSymsp->TOP__round__DOT__a1__DOT__q11.data = (0xffU 
                                                   & vlSelfRef.data_in[1U]);
    vlSymsp->TOP__round__DOT__a1__DOT__q12.data = (
                                                   vlSelfRef.data_in[0U] 
                                                   >> 0x18U);
    vlSymsp->TOP__round__DOT__a1__DOT__q13.data = (0xffU 
                                                   & (vlSelfRef.data_in[0U] 
                                                      >> 0x10U));
    vlSymsp->TOP__round__DOT__a1__DOT__q14.data = (0xffU 
                                                   & (vlSelfRef.data_in[0U] 
                                                      >> 8U));
    vlSymsp->TOP__round__DOT__a1__DOT__q15.data = (0xffU 
                                                   & vlSelfRef.data_in[0U]);
    vlSelfRef.data_out[0U] = (vlSelfRef.key_in[0U] 
                              ^ vlSelfRef.round__DOT__mix_data_out[0U]);
    vlSelfRef.data_out[1U] = (vlSelfRef.key_in[1U] 
                              ^ vlSelfRef.round__DOT__mix_data_out[1U]);
    vlSelfRef.data_out[2U] = (vlSelfRef.key_in[2U] 
                              ^ vlSelfRef.round__DOT__mix_data_out[2U]);
    vlSelfRef.data_out[3U] = (vlSelfRef.key_in[3U] 
                              ^ vlSelfRef.round__DOT__mix_data_out[3U]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vround___024root___dump_triggers__act(Vround___024root* vlSelf);
#endif  // VL_DEBUG

void Vround___024root___eval_triggers__act(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q0.data) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q0__data__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q1.data) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q1__data__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q2.data) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q2__data__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q3.data) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q3__data__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q4.data) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q4__data__0)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q5.data) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q5__data__0)));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q6.data) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q6__data__0)));
    vlSelfRef.__VactTriggered.set(7U, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q7.data) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q7__data__0)));
    vlSelfRef.__VactTriggered.set(8U, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q8.data) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q8__data__0)));
    vlSelfRef.__VactTriggered.set(9U, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q9.data) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q9__data__0)));
    vlSelfRef.__VactTriggered.set(0xaU, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q10.data) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q10__data__0)));
    vlSelfRef.__VactTriggered.set(0xbU, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q11.data) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q11__data__0)));
    vlSelfRef.__VactTriggered.set(0xcU, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q12.data) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q12__data__0)));
    vlSelfRef.__VactTriggered.set(0xdU, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q13.data) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q13__data__0)));
    vlSelfRef.__VactTriggered.set(0xeU, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q14.data) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q14__data__0)));
    vlSelfRef.__VactTriggered.set(0xfU, ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q15.data) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q15__data__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q0__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q0.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q1__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q1.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q2__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q2.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q3__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q3.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q4__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q4.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q5__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q5.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q6__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q6.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q7__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q7.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q8__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q8.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q9__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q9.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q10__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q10.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q11__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q11.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q12__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q12.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q13__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q13.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q14__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q14.data;
    vlSelfRef.__Vtrigprevexpr___TOP__round__DOT__a1__DOT__q15__data__0 
        = vlSymsp->TOP__round__DOT__a1__DOT__q15.data;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
        vlSelfRef.__VactTriggered.set(7U, 1U);
        vlSelfRef.__VactTriggered.set(8U, 1U);
        vlSelfRef.__VactTriggered.set(9U, 1U);
        vlSelfRef.__VactTriggered.set(0xaU, 1U);
        vlSelfRef.__VactTriggered.set(0xbU, 1U);
        vlSelfRef.__VactTriggered.set(0xcU, 1U);
        vlSelfRef.__VactTriggered.set(0xdU, 1U);
        vlSelfRef.__VactTriggered.set(0xeU, 1U);
        vlSelfRef.__VactTriggered.set(0xfU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vround___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q0__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q1__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q2__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q3__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q4__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q5__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q6__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q7__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q8__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q9__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q10__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q11__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q12__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q13__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q14__0(Vround_sbox* vlSelf);
void Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q15__0(Vround_sbox* vlSelf);
void Vround___024root___nba_comb__TOP__0(Vround___024root* vlSelf);

void Vround___024root___eval_nba(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q0__0((&vlSymsp->TOP__round__DOT__a1__DOT__q0));
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q1__0((&vlSymsp->TOP__round__DOT__a1__DOT__q1));
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q2__0((&vlSymsp->TOP__round__DOT__a1__DOT__q2));
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q3__0((&vlSymsp->TOP__round__DOT__a1__DOT__q3));
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q4__0((&vlSymsp->TOP__round__DOT__a1__DOT__q4));
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q5__0((&vlSymsp->TOP__round__DOT__a1__DOT__q5));
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q6__0((&vlSymsp->TOP__round__DOT__a1__DOT__q6));
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q7__0((&vlSymsp->TOP__round__DOT__a1__DOT__q7));
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q8__0((&vlSymsp->TOP__round__DOT__a1__DOT__q8));
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q9__0((&vlSymsp->TOP__round__DOT__a1__DOT__q9));
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q10__0((&vlSymsp->TOP__round__DOT__a1__DOT__q10));
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q11__0((&vlSymsp->TOP__round__DOT__a1__DOT__q11));
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q12__0((&vlSymsp->TOP__round__DOT__a1__DOT__q12));
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q13__0((&vlSymsp->TOP__round__DOT__a1__DOT__q13));
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q14__0((&vlSymsp->TOP__round__DOT__a1__DOT__q14));
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround_sbox___nba_sequent__TOP__round__DOT__a1__DOT__q15__0((&vlSymsp->TOP__round__DOT__a1__DOT__q15));
    }
    if ((0xffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vround___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vround___024root___nba_comb__TOP__0(Vround___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vround__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vround___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ round__DOT__shift_data_out;
    VL_ZERO_W(128, round__DOT__shift_data_out);
    // Body
    round__DOT__shift_data_out[0U] = (IData)((((QData)((IData)(
                                                               ((((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q8.dout) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q13.dout) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q2.dout) 
                                                                    << 8U) 
                                                                   | (IData)(vlSymsp->TOP__round__DOT__a1__DOT__q7.dout))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q12.dout) 
                                                                   << 0x18U) 
                                                                  | ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q1.dout) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q6.dout) 
                                                                     << 8U) 
                                                                    | (IData)(vlSymsp->TOP__round__DOT__a1__DOT__q11.dout)))))));
    round__DOT__shift_data_out[1U] = (IData)(((((QData)((IData)(
                                                                ((((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q8.dout) 
                                                                   << 0x18U) 
                                                                  | ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q13.dout) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q2.dout) 
                                                                     << 8U) 
                                                                    | (IData)(vlSymsp->TOP__round__DOT__a1__DOT__q7.dout))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q12.dout) 
                                                                    << 0x18U) 
                                                                   | ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q1.dout) 
                                                                      << 0x10U)) 
                                                                  | (((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q6.dout) 
                                                                      << 8U) 
                                                                     | (IData)(vlSymsp->TOP__round__DOT__a1__DOT__q11.dout)))))) 
                                              >> 0x20U));
    round__DOT__shift_data_out[2U] = (IData)((((QData)((IData)(
                                                               ((((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q0.dout) 
                                                                  << 0x18U) 
                                                                 | ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q5.dout) 
                                                                    << 0x10U)) 
                                                                | (((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q10.dout) 
                                                                    << 8U) 
                                                                   | (IData)(vlSymsp->TOP__round__DOT__a1__DOT__q15.dout))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q4.dout) 
                                                                   << 0x18U) 
                                                                  | ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q9.dout) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q14.dout) 
                                                                     << 8U) 
                                                                    | (IData)(vlSymsp->TOP__round__DOT__a1__DOT__q3.dout)))))));
    round__DOT__shift_data_out[3U] = (IData)(((((QData)((IData)(
                                                                ((((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q0.dout) 
                                                                   << 0x18U) 
                                                                  | ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q5.dout) 
                                                                     << 0x10U)) 
                                                                 | (((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q10.dout) 
                                                                     << 8U) 
                                                                    | (IData)(vlSymsp->TOP__round__DOT__a1__DOT__q15.dout))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q4.dout) 
                                                                    << 0x18U) 
                                                                   | ((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q9.dout) 
                                                                      << 0x10U)) 
                                                                  | (((IData)(vlSymsp->TOP__round__DOT__a1__DOT__q14.dout) 
                                                                      << 8U) 
                                                                     | (IData)(vlSymsp->TOP__round__DOT__a1__DOT__q3.dout)))))) 
                                              >> 0x20U));
    VL_ASSIGNSEL_WI(128,8,0x78U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__0__i 
                                        = (round__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__0__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__0__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__0__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__0__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__0__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__1__i 
                                        = (0xffU & 
                                           (round__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__1__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__1__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__1__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__1__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__1__Vfuncout))) 
                                ^ ((round__DOT__shift_data_out[3U] 
                                    << 0x10U) | (round__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((round__DOT__shift_data_out[3U] 
                                   << 0x18U) | (round__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ round__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x70U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((((round__DOT__shift_data_out[3U] 
                                   << 8U) | (round__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__2__i 
                                        = (0xffU & 
                                           (round__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__2__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__2__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__2__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__2__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__2__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__3__i 
                                    = (0xffU & (round__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__3__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__3__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__3__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__3__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__3__Vfuncout))) 
                               ^ ((round__DOT__shift_data_out[3U] 
                                   << 0x18U) | (round__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ round__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x68U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((((round__DOT__shift_data_out[3U] 
                                   << 8U) | (round__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ((round__DOT__shift_data_out[3U] 
                                     << 0x10U) | (round__DOT__shift_data_out[3U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__4__i 
                                    = (0xffU & (round__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__4__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__4__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__4__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__4__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__4__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__5__i 
                                = (0xffU & round__DOT__shift_data_out[3U]);
                            vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__5__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__5__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__5__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__5__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__5__Vfuncout))) 
                              ^ round__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x60U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__6__i 
                                        = (round__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__6__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__6__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__6__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__6__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__6__Vfuncout)) 
                                 ^ ((round__DOT__shift_data_out[3U] 
                                     << 8U) | (round__DOT__shift_data_out[3U] 
                                               >> 0x18U))) 
                                ^ ((round__DOT__shift_data_out[3U] 
                                    << 0x10U) | (round__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((round__DOT__shift_data_out[3U] 
                                   << 0x18U) | (round__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__7__i 
                            = (0xffU & round__DOT__shift_data_out[3U]);
                        vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__7__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__7__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__7__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__7__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__7__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x58U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__8__i 
                                        = (round__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__8__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__8__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__8__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__8__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__8__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__9__i 
                                        = (0xffU & 
                                           (round__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__9__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__9__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__9__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__9__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__9__Vfuncout))) 
                                ^ ((round__DOT__shift_data_out[2U] 
                                    << 0x10U) | (round__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((round__DOT__shift_data_out[2U] 
                                   << 0x18U) | (round__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ round__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x50U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((((round__DOT__shift_data_out[2U] 
                                   << 8U) | (round__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__10__i 
                                        = (0xffU & 
                                           (round__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__10__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__10__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__10__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__10__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__10__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__11__i 
                                    = (0xffU & (round__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__11__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__11__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__11__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__11__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__11__Vfuncout))) 
                               ^ ((round__DOT__shift_data_out[2U] 
                                   << 0x18U) | (round__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ round__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x48U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((((round__DOT__shift_data_out[2U] 
                                   << 8U) | (round__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ((round__DOT__shift_data_out[2U] 
                                     << 0x10U) | (round__DOT__shift_data_out[2U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__12__i 
                                    = (0xffU & (round__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__12__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__12__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__12__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__12__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__12__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__13__i 
                                = (0xffU & round__DOT__shift_data_out[2U]);
                            vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__13__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__13__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__13__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__13__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__13__Vfuncout))) 
                              ^ round__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x40U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__14__i 
                                        = (round__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__14__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__14__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__14__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__14__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__14__Vfuncout)) 
                                 ^ ((round__DOT__shift_data_out[2U] 
                                     << 8U) | (round__DOT__shift_data_out[2U] 
                                               >> 0x18U))) 
                                ^ ((round__DOT__shift_data_out[2U] 
                                    << 0x10U) | (round__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((round__DOT__shift_data_out[2U] 
                                   << 0x18U) | (round__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__15__i 
                            = (0xffU & round__DOT__shift_data_out[2U]);
                        vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__15__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__15__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__15__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__15__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__15__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x38U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__16__i 
                                        = (round__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__16__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__16__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__16__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__16__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__16__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__17__i 
                                        = (0xffU & 
                                           (round__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__17__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__17__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__17__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__17__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__17__Vfuncout))) 
                                ^ ((round__DOT__shift_data_out[1U] 
                                    << 0x10U) | (round__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((round__DOT__shift_data_out[1U] 
                                   << 0x18U) | (round__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ round__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x30U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((((round__DOT__shift_data_out[1U] 
                                   << 8U) | (round__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__18__i 
                                        = (0xffU & 
                                           (round__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__18__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__18__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__18__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__18__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__18__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__19__i 
                                    = (0xffU & (round__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__19__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__19__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__19__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__19__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__19__Vfuncout))) 
                               ^ ((round__DOT__shift_data_out[1U] 
                                   << 0x18U) | (round__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ round__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x28U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((((round__DOT__shift_data_out[1U] 
                                   << 8U) | (round__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ((round__DOT__shift_data_out[1U] 
                                     << 0x10U) | (round__DOT__shift_data_out[1U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__20__i 
                                    = (0xffU & (round__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__20__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__20__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__20__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__20__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__20__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__21__i 
                                = (0xffU & round__DOT__shift_data_out[1U]);
                            vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__21__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__21__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__21__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__21__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__21__Vfuncout))) 
                              ^ round__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x20U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__22__i 
                                        = (round__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__22__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__22__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__22__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__22__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__22__Vfuncout)) 
                                 ^ ((round__DOT__shift_data_out[1U] 
                                     << 8U) | (round__DOT__shift_data_out[1U] 
                                               >> 0x18U))) 
                                ^ ((round__DOT__shift_data_out[1U] 
                                    << 0x10U) | (round__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((round__DOT__shift_data_out[1U] 
                                   << 0x18U) | (round__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__23__i 
                            = (0xffU & round__DOT__shift_data_out[1U]);
                        vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__23__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__23__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__23__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__23__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__23__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x18U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__24__i 
                                        = (round__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__24__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__24__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__24__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__24__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__24__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__25__i 
                                        = (0xffU & 
                                           (round__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__25__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__25__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__25__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__25__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__25__Vfuncout))) 
                                ^ ((round__DOT__shift_data_out[0U] 
                                    << 0x10U) | (round__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((round__DOT__shift_data_out[0U] 
                                   << 0x18U) | (round__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ round__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0x10U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((((round__DOT__shift_data_out[0U] 
                                   << 8U) | (round__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__26__i 
                                        = (0xffU & 
                                           (round__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__26__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__26__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__26__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__26__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__26__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__27__i 
                                    = (0xffU & (round__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__27__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__27__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__27__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__27__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__27__Vfuncout))) 
                               ^ ((round__DOT__shift_data_out[0U] 
                                   << 0x18U) | (round__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ round__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,8U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((((round__DOT__shift_data_out[0U] 
                                   << 8U) | (round__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ((round__DOT__shift_data_out[0U] 
                                     << 0x10U) | (round__DOT__shift_data_out[0U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__28__i 
                                    = (0xffU & (round__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__28__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__28__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__28__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__28__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__28__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__29__i 
                                = (0xffU & round__DOT__shift_data_out[0U]);
                            vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__29__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__29__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__29__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__29__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__29__Vfuncout))) 
                              ^ round__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0U, vlSelfRef.round__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__30__i 
                                        = (round__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__30__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__30__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__30__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__30__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__30__Vfuncout)) 
                                 ^ ((round__DOT__shift_data_out[0U] 
                                     << 8U) | (round__DOT__shift_data_out[0U] 
                                               >> 0x18U))) 
                                ^ ((round__DOT__shift_data_out[0U] 
                                    << 0x10U) | (round__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((round__DOT__shift_data_out[0U] 
                                   << 0x18U) | (round__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__31__i 
                            = (0xffU & round__DOT__shift_data_out[0U]);
                        vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__31__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__31__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__31__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__31__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_round__DOT__m0__DOT__xtime__31__Vfuncout)))));
    vlSelfRef.data_out[0U] = (vlSelfRef.key_in[0U] 
                              ^ vlSelfRef.round__DOT__mix_data_out[0U]);
    vlSelfRef.data_out[1U] = (vlSelfRef.key_in[1U] 
                              ^ vlSelfRef.round__DOT__mix_data_out[1U]);
    vlSelfRef.data_out[2U] = (vlSelfRef.key_in[2U] 
                              ^ vlSelfRef.round__DOT__mix_data_out[2U]);
    vlSelfRef.data_out[3U] = (vlSelfRef.key_in[3U] 
                              ^ vlSelfRef.round__DOT__mix_data_out[3U]);
}
