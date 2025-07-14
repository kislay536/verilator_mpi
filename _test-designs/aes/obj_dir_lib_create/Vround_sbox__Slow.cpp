// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vround.h for the primary calling header

#include "Vround__pch.h"
#include "Vround__Syms.h"
#include "Vround_sbox.h"

void Vround_sbox___ctor_var_reset(Vround_sbox* vlSelf);

Vround_sbox::Vround_sbox(Vround__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vround_sbox___ctor_var_reset(this);
}

void Vround_sbox::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vround_sbox::~Vround_sbox() {
}
