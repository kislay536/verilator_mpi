// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_key_expand_128.h for the primary calling header

#include "Vaes_key_expand_128__pch.h"
#include "Vaes_key_expand_128__Syms.h"
#include "Vaes_key_expand_128___024root.h"

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__10(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__10\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r7__DOT__shift_data_out;
    VL_ZERO_W(128, aes_main__DOT__r7__DOT__shift_data_out);
    // Body
    aes_main__DOT__r7__DOT__shift_data_out[0U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q8.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q7.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q12.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q11.dout)))))));
    aes_main__DOT__r7__DOT__shift_data_out[1U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q8.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q7.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q12.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q11.dout)))))) 
                                                          >> 0x20U));
    aes_main__DOT__r7__DOT__shift_data_out[2U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q0.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q15.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q4.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q3.dout)))))));
    aes_main__DOT__r7__DOT__shift_data_out[3U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q0.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q15.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q4.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q3.dout)))))) 
                                                          >> 0x20U));
    VL_ASSIGNSEL_WI(128,8,0x78U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__224__i 
                                        = (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__224__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__224__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__224__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__224__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__224__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__225__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__225__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__225__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__225__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__225__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__225__Vfuncout))) 
                                ^ ((aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r7__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x70U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__226__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__226__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__226__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__226__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__226__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__226__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__227__i 
                                    = (0xffU & (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__227__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__227__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__227__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__227__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__227__Vfuncout))) 
                               ^ ((aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r7__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x68U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                     << 0x10U) | (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__228__i 
                                    = (0xffU & (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__228__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__228__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__228__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__228__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__228__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__229__i 
                                = (0xffU & aes_main__DOT__r7__DOT__shift_data_out[3U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__229__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__229__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__229__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__229__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__229__Vfuncout))) 
                              ^ aes_main__DOT__r7__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x60U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__230__i 
                                        = (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__230__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__230__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__230__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__230__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__230__Vfuncout)) 
                                 ^ ((aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                     << 8U) | (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r7__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__231__i 
                            = (0xffU & aes_main__DOT__r7__DOT__shift_data_out[3U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__231__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__231__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__231__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__231__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__231__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x58U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__232__i 
                                        = (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__232__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__232__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__232__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__232__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__232__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__233__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__233__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__233__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__233__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__233__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__233__Vfuncout))) 
                                ^ ((aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r7__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x50U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__234__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__234__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__234__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__234__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__234__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__234__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__235__i 
                                    = (0xffU & (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__235__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__235__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__235__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__235__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__235__Vfuncout))) 
                               ^ ((aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r7__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x48U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                     << 0x10U) | (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__236__i 
                                    = (0xffU & (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__236__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__236__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__236__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__236__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__236__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__237__i 
                                = (0xffU & aes_main__DOT__r7__DOT__shift_data_out[2U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__237__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__237__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__237__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__237__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__237__Vfuncout))) 
                              ^ aes_main__DOT__r7__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x40U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__238__i 
                                        = (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__238__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__238__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__238__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__238__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__238__Vfuncout)) 
                                 ^ ((aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                     << 8U) | (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r7__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__239__i 
                            = (0xffU & aes_main__DOT__r7__DOT__shift_data_out[2U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__239__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__239__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__239__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__239__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__239__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x38U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__240__i 
                                        = (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__240__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__240__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__240__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__240__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__240__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__241__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__241__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__241__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__241__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__241__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__241__Vfuncout))) 
                                ^ ((aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r7__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x30U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__242__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__242__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__242__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__242__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__242__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__242__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__243__i 
                                    = (0xffU & (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__243__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__243__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__243__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__243__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__243__Vfuncout))) 
                               ^ ((aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r7__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x28U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                     << 0x10U) | (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__244__i 
                                    = (0xffU & (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__244__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__244__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__244__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__244__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__244__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__245__i 
                                = (0xffU & aes_main__DOT__r7__DOT__shift_data_out[1U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__245__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__245__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__245__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__245__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__245__Vfuncout))) 
                              ^ aes_main__DOT__r7__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x20U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__246__i 
                                        = (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__246__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__246__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__246__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__246__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__246__Vfuncout)) 
                                 ^ ((aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                     << 8U) | (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r7__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__247__i 
                            = (0xffU & aes_main__DOT__r7__DOT__shift_data_out[1U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__247__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__247__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__247__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__247__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__247__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x18U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__248__i 
                                        = (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__248__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__248__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__248__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__248__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__248__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__249__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__249__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__249__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__249__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__249__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__249__Vfuncout))) 
                                ^ ((aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r7__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0x10U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__250__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__250__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__250__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__250__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__250__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__250__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__251__i 
                                    = (0xffU & (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__251__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__251__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__251__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__251__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__251__Vfuncout))) 
                               ^ ((aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r7__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,8U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                     << 0x10U) | (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__252__i 
                                    = (0xffU & (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__252__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__252__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__252__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__252__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__252__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__253__i 
                                = (0xffU & aes_main__DOT__r7__DOT__shift_data_out[0U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__253__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__253__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__253__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__253__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__253__Vfuncout))) 
                              ^ aes_main__DOT__r7__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0U, vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__254__i 
                                        = (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__254__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__254__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__254__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__254__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__254__Vfuncout)) 
                                 ^ ((aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                     << 8U) | (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r7__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__255__i 
                            = (0xffU & aes_main__DOT__r7__DOT__shift_data_out[0U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__255__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__255__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__255__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__255__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r7__DOT__m0__DOT__xtime__255__Vfuncout)))));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__11(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__11\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r8__DOT__shift_data_out;
    VL_ZERO_W(128, aes_main__DOT__r8__DOT__shift_data_out);
    // Body
    aes_main__DOT__r8__DOT__shift_data_out[0U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q8.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q7.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q12.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q11.dout)))))));
    aes_main__DOT__r8__DOT__shift_data_out[1U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q8.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q13.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q2.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q7.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q12.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q1.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q6.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q11.dout)))))) 
                                                          >> 0x20U));
    aes_main__DOT__r8__DOT__shift_data_out[2U] = (IData)(
                                                         (((QData)((IData)(
                                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q0.dout) 
                                                                              << 0x18U) 
                                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q15.dout))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q4.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q3.dout)))))));
    aes_main__DOT__r8__DOT__shift_data_out[3U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            ((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q0.dout) 
                                                                               << 0x18U) 
                                                                              | ((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                             | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q15.dout))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q4.dout) 
                                                                                << 0x18U) 
                                                                               | ((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                              | (((IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q3.dout)))))) 
                                                          >> 0x20U));
    VL_ASSIGNSEL_WI(128,8,0x78U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__256__i 
                                        = (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__256__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__256__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__256__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__256__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__256__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__257__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__257__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__257__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__257__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__257__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__257__Vfuncout))) 
                                ^ ((aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r8__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x70U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__258__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__258__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__258__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__258__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__258__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__258__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__259__i 
                                    = (0xffU & (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__259__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__259__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__259__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__259__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__259__Vfuncout))) 
                               ^ ((aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r8__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x68U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                   << 8U) | (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                     << 0x10U) | (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__260__i 
                                    = (0xffU & (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__260__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__260__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__260__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__260__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__260__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__261__i 
                                = (0xffU & aes_main__DOT__r8__DOT__shift_data_out[3U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__261__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__261__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__261__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__261__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__261__Vfuncout))) 
                              ^ aes_main__DOT__r8__DOT__shift_data_out[3U])));
    VL_ASSIGNSEL_WI(128,8,0x60U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__262__i 
                                        = (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__262__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__262__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__262__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__262__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__262__Vfuncout)) 
                                 ^ ((aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                     << 8U) | (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                    << 0x10U) | (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                   << 0x18U) | (aes_main__DOT__r8__DOT__shift_data_out[3U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__263__i 
                            = (0xffU & aes_main__DOT__r8__DOT__shift_data_out[3U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__263__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__263__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__263__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__263__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__263__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x58U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__264__i 
                                        = (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__264__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__264__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__264__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__264__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__264__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__265__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__265__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__265__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__265__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__265__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__265__Vfuncout))) 
                                ^ ((aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r8__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x50U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__266__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__266__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__266__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__266__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__266__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__266__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__267__i 
                                    = (0xffU & (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__267__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__267__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__267__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__267__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__267__Vfuncout))) 
                               ^ ((aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r8__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x48U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                   << 8U) | (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                     << 0x10U) | (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__268__i 
                                    = (0xffU & (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__268__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__268__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__268__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__268__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__268__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__269__i 
                                = (0xffU & aes_main__DOT__r8__DOT__shift_data_out[2U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__269__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__269__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__269__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__269__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__269__Vfuncout))) 
                              ^ aes_main__DOT__r8__DOT__shift_data_out[2U])));
    VL_ASSIGNSEL_WI(128,8,0x40U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__270__i 
                                        = (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__270__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__270__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__270__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__270__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__270__Vfuncout)) 
                                 ^ ((aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                     << 8U) | (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                    << 0x10U) | (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                   << 0x18U) | (aes_main__DOT__r8__DOT__shift_data_out[2U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__271__i 
                            = (0xffU & aes_main__DOT__r8__DOT__shift_data_out[2U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__271__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__271__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__271__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__271__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__271__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x38U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__272__i 
                                        = (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__272__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__272__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__272__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__272__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__272__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__273__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__273__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__273__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__273__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__273__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__273__Vfuncout))) 
                                ^ ((aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r8__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x30U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__274__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__274__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__274__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__274__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__274__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__274__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__275__i 
                                    = (0xffU & (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__275__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__275__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__275__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__275__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__275__Vfuncout))) 
                               ^ ((aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r8__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x28U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                   << 8U) | (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                     << 0x10U) | (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__276__i 
                                    = (0xffU & (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__276__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__276__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__276__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__276__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__276__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__277__i 
                                = (0xffU & aes_main__DOT__r8__DOT__shift_data_out[1U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__277__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__277__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__277__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__277__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__277__Vfuncout))) 
                              ^ aes_main__DOT__r8__DOT__shift_data_out[1U])));
    VL_ASSIGNSEL_WI(128,8,0x20U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__278__i 
                                        = (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__278__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__278__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__278__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__278__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__278__Vfuncout)) 
                                 ^ ((aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                     << 8U) | (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                    << 0x10U) | (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                   << 0x18U) | (aes_main__DOT__r8__DOT__shift_data_out[1U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__279__i 
                            = (0xffU & aes_main__DOT__r8__DOT__shift_data_out[1U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__279__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__279__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__279__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__279__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__279__Vfuncout)))));
    VL_ASSIGNSEL_WI(128,8,0x18U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__280__i 
                                        = (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__280__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__280__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__280__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__280__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__280__Vfuncout)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__281__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__281__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__281__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__281__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__281__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__281__Vfuncout))) 
                                ^ ((aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r8__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0x10U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__282__i 
                                        = (0xffU & 
                                           (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                            >> 0x10U));
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__282__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__282__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__282__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__282__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__282__Vfuncout))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__283__i 
                                    = (0xffU & (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__283__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__283__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__283__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__283__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__283__Vfuncout))) 
                               ^ ((aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ aes_main__DOT__r8__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,8U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((((aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                   << 8U) | (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                             >> 0x18U)) 
                                 ^ ((aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                     << 0x10U) | (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                                  >> 0x10U))) 
                                ^ ([&]() {
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__284__i 
                                    = (0xffU & (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                                >> 8U));
                                vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__284__Vfuncout 
                                    = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__284__i))
                                        ? (0x1bU ^ 
                                           (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__284__i) 
                                             << 1U)))
                                        : (0xfeU & 
                                           ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__284__i) 
                                            << 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__284__Vfuncout))) 
                               ^ ([&]() {
                            vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__285__i 
                                = (0xffU & aes_main__DOT__r8__DOT__shift_data_out[0U]);
                            vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__285__Vfuncout 
                                = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__285__i))
                                    ? (0x1bU ^ (0xfeU 
                                                & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__285__i) 
                                                   << 1U)))
                                    : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__285__i) 
                                                << 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__285__Vfuncout))) 
                              ^ aes_main__DOT__r8__DOT__shift_data_out[0U])));
    VL_ASSIGNSEL_WI(128,8,0U, vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out, 
                    (0xffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__286__i 
                                        = (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                           >> 0x18U);
                                    vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__286__Vfuncout 
                                        = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__286__i))
                                            ? (0x1bU 
                                               ^ (0xfeU 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__286__i) 
                                                     << 1U)))
                                            : (0xfeU 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__286__i) 
                                                  << 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__286__Vfuncout)) 
                                 ^ ((aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                     << 8U) | (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                               >> 0x18U))) 
                                ^ ((aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                    << 0x10U) | (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                                 >> 0x10U))) 
                               ^ ((aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                   << 0x18U) | (aes_main__DOT__r8__DOT__shift_data_out[0U] 
                                                >> 8U))) 
                              ^ ([&]() {
                        vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__287__i 
                            = (0xffU & aes_main__DOT__r8__DOT__shift_data_out[0U]);
                        vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__287__Vfuncout 
                            = ((0x80U & (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__287__i))
                                ? (0x1bU ^ (0xfeU & 
                                            ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__287__i) 
                                             << 1U)))
                                : (0xfeU & ((IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__287__i) 
                                            << 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes_main__DOT__r8__DOT__m0__DOT__xtime__287__Vfuncout)))));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__12(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__12\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword7 = ((
                                                   ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u24.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u25.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u26.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u27.dout)));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__13(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__13\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword6 = ((
                                                   ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u20.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u21.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u22.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u23.dout)));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__14(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__14\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword5 = ((
                                                   ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u16.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u17.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u18.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u19.dout)));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__15(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__15\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword4 = ((
                                                   ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u12.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u13.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u14.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u15.dout)));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__16(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__16\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword3 = ((
                                                   ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u8.dout) 
                                                    << 0x18U) 
                                                   | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u9.dout) 
                                                      << 0x10U)) 
                                                  | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u10.dout) 
                                                      << 8U) 
                                                     | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u11.dout)));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__17(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__17\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__subword = ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u0.dout) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u1.dout) 
                                                     << 0x10U)) 
                                                 | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u2.dout) 
                                                     << 8U) 
                                                    | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u3.dout)));
    vlSelfRef.aes_main__DOT__a0__DOT__w7 = (0x1000000U 
                                            ^ (vlSelfRef.key[3U] 
                                               ^ (vlSelfRef.key[2U] 
                                                  ^ 
                                                  (vlSelfRef.key[1U] 
                                                   ^ 
                                                   (vlSelfRef.key[0U] 
                                                    ^ vlSelfRef.aes_main__DOT__a0__DOT__subword)))));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0 
        = (vlSelfRef.key[3U] ^ vlSelfRef.aes_main__DOT__a0__DOT__subword);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u4.data = 
        (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w7 
                  >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u5.data = 
        (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w7 
                  >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u6.data = 
        (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w7);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u7.data = 
        (vlSelfRef.aes_main__DOT__a0__DOT__w7 >> 0x18U);
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = (vlSelfRef.key[2U] 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0);
    vlSelfRef.aes_main__DOT__a0__DOT__w6 = (0x1000000U 
                                            ^ (vlSelfRef.key[1U] 
                                               ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0));
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__18(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__18\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1 
        = (0x1000000U ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0 
                         ^ ((((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u4.dout) 
                              << 0x18U) | ((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u5.dout) 
                                           << 0x10U)) 
                            | (((IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u6.dout) 
                                << 8U) | (IData)(vlSymsp->TOP__aes_main__DOT__a0__DOT__u7.dout)))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = (0x1000000U 
                                                ^ (vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w6 ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_2 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1 
           ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1);
    vlSelfRef.aes_main__DOT__a0__DOT__w11 = (0x2000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w7 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_3 
        = (0x2000000U ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_2 
                         ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u8.data = 
        (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w11 
                  >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u9.data = 
        (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w11 
                  >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u10.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w11);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u11.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w11 >> 0x18U);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__19(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__19\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r0_data_out;
    VL_ZERO_W(128, aes_main__DOT__r0_data_out);
    // Body
    aes_main__DOT__r0_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w7 
                                      ^ vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out[0U]);
    aes_main__DOT__r0_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w6 
                                      ^ vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out[1U]);
    aes_main__DOT__r0_data_out[2U] = ((IData)((((QData)((IData)(
                                                                (0x1000000U 
                                                                 ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (0x1000000U 
                                                                  ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0))))) 
                                      ^ vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out[2U]);
    aes_main__DOT__r0_data_out[3U] = ((IData)(((((QData)((IData)(
                                                                 (0x1000000U 
                                                                  ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_0))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0x1000000U 
                                                                   ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r0__DOT__mix_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r0_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r0_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r0_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r0_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r0_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r0_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r0_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r0_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r0_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r0_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r0_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r0_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r0_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r0_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r0_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r1__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r0_data_out[0U]);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__20(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__20\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w12 = (0x6000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword3));
    vlSelfRef.aes_main__DOT__a0__DOT__w13 = (0x4000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_2 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword3));
    vlSelfRef.aes_main__DOT__a0__DOT__w15 = (0x4000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_3 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w11 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword3)));
    vlSelfRef.aes_main__DOT__a0__DOT__w14 = (0x4000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_3 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword3));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_4 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w12 ^ vlSelfRef.aes_main__DOT__a0__DOT__w13);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u12.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w15 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u13.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w15 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u14.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w15);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u15.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w15 >> 0x18U);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_5 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_4 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w14);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__21(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__21\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r1_data_out;
    VL_ZERO_W(128, aes_main__DOT__r1_data_out);
    // Body
    aes_main__DOT__r1_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w11 
                                      ^ vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out[0U]);
    aes_main__DOT__r1_data_out[1U] = (0x2000000U ^ 
                                      (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_18 
                                       ^ vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out[1U]));
    aes_main__DOT__r1_data_out[2U] = ((IData)((((QData)((IData)(
                                                                (0x2000000U 
                                                                 ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 (0x2000000U 
                                                                  ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))))) 
                                      ^ vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out[2U]);
    aes_main__DOT__r1_data_out[3U] = ((IData)(((((QData)((IData)(
                                                                 (0x2000000U 
                                                                  ^ vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_1))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0x2000000U 
                                                                   ^ vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r1__DOT__mix_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r1_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r1_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r1_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r1_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r1_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r1_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r1_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r1_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r1_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r1_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r1_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r1_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r1_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r1_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r1_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r2__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r1_data_out[0U]);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__22(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__22\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w16 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w12 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4));
    vlSelfRef.aes_main__DOT__a0__DOT__w17 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_4 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4));
    vlSelfRef.aes_main__DOT__a0__DOT__w19 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_5 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w15 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4)));
    vlSelfRef.aes_main__DOT__a0__DOT__w18 = (0x8000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_5 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword4));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_6 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w16 ^ vlSelfRef.aes_main__DOT__a0__DOT__w17);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u16.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w19 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u17.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w19 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u18.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w19);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u19.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w19 >> 0x18U);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_7 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_6 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w18);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__23(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__23\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r2_data_out;
    VL_ZERO_W(128, aes_main__DOT__r2_data_out);
    // Body
    aes_main__DOT__r2_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w15 
                                      ^ vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out[0U]);
    aes_main__DOT__r2_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w14 
                                      ^ vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out[1U]);
    aes_main__DOT__r2_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w12)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w13)))) 
                                      ^ vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out[2U]);
    aes_main__DOT__r2_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w12)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w13))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r2__DOT__mix_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r2_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r2_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r2_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r2_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r2_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r2_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r2_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r2_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r2_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r2_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r2_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r2_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r2_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r2_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r2_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r3__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r2_data_out[0U]);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__24(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__24\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w20 = (0x10000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w16 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword5));
    vlSelfRef.aes_main__DOT__a0__DOT__w21 = (0x10000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_6 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword5));
    vlSelfRef.aes_main__DOT__a0__DOT__w23 = (0x10000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_7 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w19 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword5)));
    vlSelfRef.aes_main__DOT__a0__DOT__w22 = (0x10000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_7 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword5));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_8 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w20 ^ vlSelfRef.aes_main__DOT__a0__DOT__w21);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u20.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w23 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u21.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w23 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u22.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w23);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u23.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w23 >> 0x18U);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_9 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_8 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w22);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__25(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__25\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r3_data_out;
    VL_ZERO_W(128, aes_main__DOT__r3_data_out);
    // Body
    aes_main__DOT__r3_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w19 
                                      ^ vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out[0U]);
    aes_main__DOT__r3_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w18 
                                      ^ vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out[1U]);
    aes_main__DOT__r3_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w16)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w17)))) 
                                      ^ vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out[2U]);
    aes_main__DOT__r3_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w16)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w17))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r3__DOT__mix_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r3_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r3_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r3_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r3_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r3_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r3_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r3_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r3_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r3_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r3_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r3_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r3_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r3_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r3_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r3_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r4__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r3_data_out[0U]);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__26(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__26\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w24 = (0x20000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w20 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword6));
    vlSelfRef.aes_main__DOT__a0__DOT__w25 = (0x20000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_8 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword6));
    vlSelfRef.aes_main__DOT__a0__DOT__w27 = (0x20000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_9 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w23 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword6)));
    vlSelfRef.aes_main__DOT__a0__DOT__w26 = (0x20000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_9 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword6));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_10 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w24 ^ vlSelfRef.aes_main__DOT__a0__DOT__w25);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u24.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w27 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u25.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w27 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u26.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w27);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u27.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w27 >> 0x18U);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_11 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_10 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w26);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__27(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__27\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r4_data_out;
    VL_ZERO_W(128, aes_main__DOT__r4_data_out);
    // Body
    aes_main__DOT__r4_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w23 
                                      ^ vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out[0U]);
    aes_main__DOT__r4_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w22 
                                      ^ vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out[1U]);
    aes_main__DOT__r4_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w20)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w21)))) 
                                      ^ vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out[2U]);
    aes_main__DOT__r4_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w20)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w21))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r4__DOT__mix_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r4_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r4_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r4_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r4_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r4_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r4_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r4_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r4_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r4_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r4_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r4_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r4_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r4_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r4_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r4_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r5__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r4_data_out[0U]);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__28(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__28\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w28 = (0x40000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w24 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword7));
    vlSelfRef.aes_main__DOT__a0__DOT__w29 = (0x40000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_10 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword7));
    vlSelfRef.aes_main__DOT__a0__DOT__w31 = (0x40000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_11 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w27 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword7)));
    vlSelfRef.aes_main__DOT__a0__DOT__w30 = (0x40000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_11 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword7));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_12 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w28 ^ vlSelfRef.aes_main__DOT__a0__DOT__w29);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u28.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w31 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u29.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w31 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u30.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w31);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u31.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w31 >> 0x18U);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_13 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_12 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w30);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__29(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__29\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r5_data_out;
    VL_ZERO_W(128, aes_main__DOT__r5_data_out);
    // Body
    aes_main__DOT__r5_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w27 
                                      ^ vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out[0U]);
    aes_main__DOT__r5_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w26 
                                      ^ vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out[1U]);
    aes_main__DOT__r5_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w24)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w25)))) 
                                      ^ vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out[2U]);
    aes_main__DOT__r5_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w24)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w25))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r5__DOT__mix_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r5_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r5_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r5_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r5_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r5_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r5_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r5_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r5_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r5_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r5_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r5_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r5_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r5_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r5_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r5_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r6__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r5_data_out[0U]);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__30(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__30\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w32 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w28 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8));
    vlSelfRef.aes_main__DOT__a0__DOT__w33 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_12 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8));
    vlSelfRef.aes_main__DOT__a0__DOT__w35 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_13 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w31 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8)));
    vlSelfRef.aes_main__DOT__a0__DOT__w34 = (0x80000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_13 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword8));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_14 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w32 ^ vlSelfRef.aes_main__DOT__a0__DOT__w33);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u32.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w35 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u33.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w35 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u34.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w35);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u35.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w35 >> 0x18U);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_15 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_14 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w34);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__31(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__31\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r6_data_out;
    VL_ZERO_W(128, aes_main__DOT__r6_data_out);
    // Body
    aes_main__DOT__r6_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w31 
                                      ^ vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out[0U]);
    aes_main__DOT__r6_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w30 
                                      ^ vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out[1U]);
    aes_main__DOT__r6_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w28)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w29)))) 
                                      ^ vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out[2U]);
    aes_main__DOT__r6_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w28)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w29))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r6__DOT__mix_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r6_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r6_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r6_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r6_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r6_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r6_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r6_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r6_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r6_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r6_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r6_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r6_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r6_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r6_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r6_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r7__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r6_data_out[0U]);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__32(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__32\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes_main__DOT__a0__DOT__w36 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT__w32 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9));
    vlSelfRef.aes_main__DOT__a0__DOT__w37 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_14 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9));
    vlSelfRef.aes_main__DOT__a0__DOT__w38 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_15 
                                                ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9));
    vlSelfRef.aes_main__DOT__a0__DOT__w39 = (0x1b000000U 
                                             ^ (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_15 
                                                ^ (vlSelfRef.aes_main__DOT__a0__DOT__w35 
                                                   ^ vlSelfRef.aes_main__DOT__a0__DOT__subword9)));
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_16 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w36 ^ vlSelfRef.aes_main__DOT__a0__DOT__w37);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u36.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w39 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u37.data 
        = (0xffU & (vlSelfRef.aes_main__DOT__a0__DOT__w39 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u38.data 
        = (0xffU & vlSelfRef.aes_main__DOT__a0__DOT__w39);
    vlSymsp->TOP__aes_main__DOT__a0__DOT__u39.data 
        = (vlSelfRef.aes_main__DOT__a0__DOT__w39 >> 0x18U);
    vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_17 
        = (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_16 
           ^ vlSelfRef.aes_main__DOT__a0__DOT__w38);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__33(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__33\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r7_data_out;
    VL_ZERO_W(128, aes_main__DOT__r7_data_out);
    // Body
    aes_main__DOT__r7_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w35 
                                      ^ vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out[0U]);
    aes_main__DOT__r7_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w34 
                                      ^ vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out[1U]);
    aes_main__DOT__r7_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w32)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w33)))) 
                                      ^ vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out[2U]);
    aes_main__DOT__r7_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w32)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w33))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r7__DOT__mix_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r7_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r7_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r7_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r7_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r7_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r7_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r7_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r7_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r7_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r7_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r7_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r7_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r7_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r7_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r7_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r8__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r7_data_out[0U]);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__34(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__34\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ aes_main__DOT__r8_data_out;
    VL_ZERO_W(128, aes_main__DOT__r8_data_out);
    // Body
    aes_main__DOT__r8_data_out[0U] = (vlSelfRef.aes_main__DOT__a0__DOT__w39 
                                      ^ vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out[0U]);
    aes_main__DOT__r8_data_out[1U] = (vlSelfRef.aes_main__DOT__a0__DOT__w38 
                                      ^ vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out[1U]);
    aes_main__DOT__r8_data_out[2U] = ((IData)((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w36)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w37)))) 
                                      ^ vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out[2U]);
    aes_main__DOT__r8_data_out[3U] = ((IData)(((((QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w36)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.aes_main__DOT__a0__DOT__w37))) 
                                               >> 0x20U)) 
                                      ^ vlSelfRef.aes_main__DOT__r8__DOT__mix_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q0.data 
        = (aes_main__DOT__r8_data_out[3U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q1.data 
        = (0xffU & (aes_main__DOT__r8_data_out[3U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q2.data 
        = (0xffU & (aes_main__DOT__r8_data_out[3U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3.data 
        = (0xffU & aes_main__DOT__r8_data_out[3U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4.data 
        = (aes_main__DOT__r8_data_out[2U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5.data 
        = (0xffU & (aes_main__DOT__r8_data_out[2U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q6.data 
        = (0xffU & (aes_main__DOT__r8_data_out[2U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q7.data 
        = (0xffU & aes_main__DOT__r8_data_out[2U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q8.data 
        = (aes_main__DOT__r8_data_out[1U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9.data 
        = (0xffU & (aes_main__DOT__r8_data_out[1U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10.data 
        = (0xffU & (aes_main__DOT__r8_data_out[1U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q11.data 
        = (0xffU & aes_main__DOT__r8_data_out[1U]);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q12.data 
        = (aes_main__DOT__r8_data_out[0U] >> 0x18U);
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q13.data 
        = (0xffU & (aes_main__DOT__r8_data_out[0U] 
                    >> 0x10U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14.data 
        = (0xffU & (aes_main__DOT__r8_data_out[0U] 
                    >> 8U));
    vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15.data 
        = (0xffU & aes_main__DOT__r8_data_out[0U]);
}

VL_INLINE_OPT void Vaes_key_expand_128___024root___nba_comb__TOP__35(Vaes_key_expand_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_key_expand_128___024root___nba_comb__TOP__35\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data_out[0U] = (0x36000000U ^ ((vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_17 
                                              ^ (vlSelfRef.aes_main__DOT__a0__DOT__w39 
                                                 ^ vlSelfRef.aes_main__DOT__a0__DOT__subword10)) 
                                             ^ ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q12.dout) 
                                                  << 0x18U) 
                                                 | ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q1.dout) 
                                                    << 0x10U)) 
                                                | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q6.dout) 
                                                    << 8U) 
                                                   | (IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q11.dout)))));
    vlSelfRef.data_out[1U] = (0x36000000U ^ ((vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_17 
                                              ^ vlSelfRef.aes_main__DOT__a0__DOT__subword10) 
                                             ^ ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q8.dout) 
                                                  << 0x18U) 
                                                 | ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q13.dout) 
                                                    << 0x10U)) 
                                                | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q2.dout) 
                                                    << 8U) 
                                                   | (IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q7.dout)))));
    vlSelfRef.data_out[2U] = ((IData)((((QData)((IData)(
                                                        (0x36000000U 
                                                         ^ 
                                                         (vlSelfRef.aes_main__DOT__a0__DOT__w36 
                                                          ^ vlSelfRef.aes_main__DOT__a0__DOT__subword10)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0x36000000U 
                                                                     ^ 
                                                                     (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_16 
                                                                      ^ vlSelfRef.aes_main__DOT__a0__DOT__subword10)))))) 
                              ^ (IData)((((QData)((IData)(
                                                          ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q0.dout) 
                                                             << 0x18U) 
                                                            | ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5.dout) 
                                                               << 0x10U)) 
                                                           | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10.dout) 
                                                               << 8U) 
                                                              | (IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15.dout))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4.dout) 
                                                              << 0x18U) 
                                                             | ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9.dout) 
                                                                << 0x10U)) 
                                                            | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14.dout) 
                                                                << 8U) 
                                                               | (IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3.dout))))))));
    vlSelfRef.data_out[3U] = ((IData)(((((QData)((IData)(
                                                         (0x36000000U 
                                                          ^ 
                                                          (vlSelfRef.aes_main__DOT__a0__DOT__w36 
                                                           ^ vlSelfRef.aes_main__DOT__a0__DOT__subword10)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0x36000000U 
                                                           ^ 
                                                           (vlSelfRef.aes_main__DOT__a0__DOT____VdfgRegularize_h398e8297_0_16 
                                                            ^ vlSelfRef.aes_main__DOT__a0__DOT__subword10))))) 
                                       >> 0x20U)) ^ (IData)(
                                                            ((((QData)((IData)(
                                                                               ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q0.dout) 
                                                                                << 0x18U) 
                                                                                | ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q5.dout) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q10.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q15.dout))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                ((((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q4.dout) 
                                                                                << 0x18U) 
                                                                                | ((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q9.dout) 
                                                                                << 0x10U)) 
                                                                                | (((IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q14.dout) 
                                                                                << 8U) 
                                                                                | (IData)(vlSymsp->TOP__aes_main__DOT__r9__DOT__a1__DOT__q3.dout)))))) 
                                                             >> 0x20U)));
}
