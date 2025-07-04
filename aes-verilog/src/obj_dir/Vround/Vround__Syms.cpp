// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vround__pch.h"
#include "Vround.h"
#include "Vround___024root.h"
#include "Vround_sbox.h"

// FUNCTIONS
Vround__Syms::~Vround__Syms()
{
}

Vround__Syms::Vround__Syms(VerilatedContext* contextp, const char* namep, Vround* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__round__DOT__a1__DOT__q0{this, Verilated::catName(namep, "round.a1.q0")}
    , TOP__round__DOT__a1__DOT__q1{this, Verilated::catName(namep, "round.a1.q1")}
    , TOP__round__DOT__a1__DOT__q10{this, Verilated::catName(namep, "round.a1.q10")}
    , TOP__round__DOT__a1__DOT__q11{this, Verilated::catName(namep, "round.a1.q11")}
    , TOP__round__DOT__a1__DOT__q12{this, Verilated::catName(namep, "round.a1.q12")}
    , TOP__round__DOT__a1__DOT__q13{this, Verilated::catName(namep, "round.a1.q13")}
    , TOP__round__DOT__a1__DOT__q14{this, Verilated::catName(namep, "round.a1.q14")}
    , TOP__round__DOT__a1__DOT__q15{this, Verilated::catName(namep, "round.a1.q15")}
    , TOP__round__DOT__a1__DOT__q2{this, Verilated::catName(namep, "round.a1.q2")}
    , TOP__round__DOT__a1__DOT__q3{this, Verilated::catName(namep, "round.a1.q3")}
    , TOP__round__DOT__a1__DOT__q4{this, Verilated::catName(namep, "round.a1.q4")}
    , TOP__round__DOT__a1__DOT__q5{this, Verilated::catName(namep, "round.a1.q5")}
    , TOP__round__DOT__a1__DOT__q6{this, Verilated::catName(namep, "round.a1.q6")}
    , TOP__round__DOT__a1__DOT__q7{this, Verilated::catName(namep, "round.a1.q7")}
    , TOP__round__DOT__a1__DOT__q8{this, Verilated::catName(namep, "round.a1.q8")}
    , TOP__round__DOT__a1__DOT__q9{this, Verilated::catName(namep, "round.a1.q9")}
{
        // Check resources
        Verilated::stackCheck(123);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__round__DOT__a1__DOT__q0 = &TOP__round__DOT__a1__DOT__q0;
    TOP.__PVT__round__DOT__a1__DOT__q1 = &TOP__round__DOT__a1__DOT__q1;
    TOP.__PVT__round__DOT__a1__DOT__q10 = &TOP__round__DOT__a1__DOT__q10;
    TOP.__PVT__round__DOT__a1__DOT__q11 = &TOP__round__DOT__a1__DOT__q11;
    TOP.__PVT__round__DOT__a1__DOT__q12 = &TOP__round__DOT__a1__DOT__q12;
    TOP.__PVT__round__DOT__a1__DOT__q13 = &TOP__round__DOT__a1__DOT__q13;
    TOP.__PVT__round__DOT__a1__DOT__q14 = &TOP__round__DOT__a1__DOT__q14;
    TOP.__PVT__round__DOT__a1__DOT__q15 = &TOP__round__DOT__a1__DOT__q15;
    TOP.__PVT__round__DOT__a1__DOT__q2 = &TOP__round__DOT__a1__DOT__q2;
    TOP.__PVT__round__DOT__a1__DOT__q3 = &TOP__round__DOT__a1__DOT__q3;
    TOP.__PVT__round__DOT__a1__DOT__q4 = &TOP__round__DOT__a1__DOT__q4;
    TOP.__PVT__round__DOT__a1__DOT__q5 = &TOP__round__DOT__a1__DOT__q5;
    TOP.__PVT__round__DOT__a1__DOT__q6 = &TOP__round__DOT__a1__DOT__q6;
    TOP.__PVT__round__DOT__a1__DOT__q7 = &TOP__round__DOT__a1__DOT__q7;
    TOP.__PVT__round__DOT__a1__DOT__q8 = &TOP__round__DOT__a1__DOT__q8;
    TOP.__PVT__round__DOT__a1__DOT__q9 = &TOP__round__DOT__a1__DOT__q9;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__round__DOT__a1__DOT__q0.__Vconfigure(true);
    TOP__round__DOT__a1__DOT__q1.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q10.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q11.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q12.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q13.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q14.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q15.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q2.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q3.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q4.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q5.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q6.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q7.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q8.__Vconfigure(false);
    TOP__round__DOT__a1__DOT__q9.__Vconfigure(false);
}
