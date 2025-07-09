// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_key_expand_128.h for the primary calling header

#include "Vaes_key_expand_128__pch.h"
#include "Vaes_key_expand_128__Syms.h"
#include "Vaes_key_expand_128_sbox.h"

void Vaes_key_expand_128_sbox___ctor_var_reset(Vaes_key_expand_128_sbox* vlSelf);

Vaes_key_expand_128_sbox::Vaes_key_expand_128_sbox(Vaes_key_expand_128__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaes_key_expand_128_sbox___ctor_var_reset(this);
}

void Vaes_key_expand_128_sbox::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vaes_key_expand_128_sbox::~Vaes_key_expand_128_sbox() {
}
