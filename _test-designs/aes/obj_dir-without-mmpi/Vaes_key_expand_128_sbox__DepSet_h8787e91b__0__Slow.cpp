// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_key_expand_128.h for the primary calling header

#include "Vaes_key_expand_128__pch.h"
#include "Vaes_key_expand_128_sbox.h"

VL_ATTR_COLD void Vaes_key_expand_128_sbox___ctor_var_reset(Vaes_key_expand_128_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaes_key_expand_128_sbox___ctor_var_reset\n"); );
    Vaes_key_expand_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->data = VL_RAND_RESET_I(8);
    vlSelf->dout = VL_RAND_RESET_I(8);
}
