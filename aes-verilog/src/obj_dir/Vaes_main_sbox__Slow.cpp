// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_main.h for the primary calling header

#include "Vaes_main__pch.h"
#include "Vaes_main__Syms.h"
#include "Vaes_main_sbox.h"

void Vaes_main_sbox___ctor_var_reset(Vaes_main_sbox* vlSelf);

Vaes_main_sbox::Vaes_main_sbox(Vaes_main__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaes_main_sbox___ctor_var_reset(this);
}

void Vaes_main_sbox::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vaes_main_sbox::~Vaes_main_sbox() {
}
