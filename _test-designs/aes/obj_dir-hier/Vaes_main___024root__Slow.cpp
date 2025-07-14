// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_main.h for the primary calling header

#include "Vaes_main__pch.h"
#include "Vaes_main__Syms.h"
#include "Vaes_main___024root.h"

void Vaes_main___024root___ctor_var_reset(Vaes_main___024root* vlSelf);

Vaes_main___024root::Vaes_main___024root(Vaes_main__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaes_main___024root___ctor_var_reset(this);
}

void Vaes_main___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vaes_main___024root::~Vaes_main___024root() {
}
