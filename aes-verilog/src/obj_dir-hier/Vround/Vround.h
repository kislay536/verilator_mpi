// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VROUND_H_
#define VERILATED_VROUND_H_  // guard

#include "verilated.h"

class Vround__Syms;
class Vround___024root;
class Vround_sbox;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vround VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vround__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_INW(&data_in,127,0,4);
    VL_INW(&key_in,127,0,4);
    VL_OUTW(&data_out,127,0,4);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q0;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q1;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q2;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q3;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q4;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q5;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q6;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q7;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q8;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q9;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q10;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q11;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q12;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q13;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q14;
    Vround_sbox* const __PVT__round__DOT__a1__DOT__q15;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vround___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vround(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vround(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vround();
  private:
    VL_UNCOPYABLE(Vround);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
