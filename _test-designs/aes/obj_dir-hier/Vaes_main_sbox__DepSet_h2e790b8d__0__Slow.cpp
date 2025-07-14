// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_main.h for the primary calling header

#include "Vaes_main__pch.h"
#include "Vaes_main_sbox.h"

VL_ATTR_COLD void Vaes_main_sbox___ctor_var_reset(Vaes_main_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaes_main_sbox___ctor_var_reset\n"); );
    Vaes_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->dout = VL_RAND_RESET_I(8);
}
