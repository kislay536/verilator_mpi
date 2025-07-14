// DESCRIPTION: Verilator generated C++
// Wrapper functions for DPI protected library

#include "Vround.h"
#include "verilated_dpi.h"

#include <cstdio>
#include <cstdlib>

// Container class to house verilated object and sequence number
class Vround_container: public Vround {
  public:
    long long m_seqnum;
    Vround_container(const char* scopep__V):
    Vround(scopep__V) {}
};

extern "C" {
    
    // Checks to make sure the .sv wrapper and library agree
    void round_protectlib_check_hash(int protectlib_hash__V) {
        const int expected_hash__V = 3433839835U;
        if (protectlib_hash__V != expected_hash__V) {
            fprintf(stderr, "%%Error: cannot use round library, Verliog (%u) and library (%u) hash values do not agree\n", protectlib_hash__V, expected_hash__V);
            std::exit(EXIT_FAILURE);
        }
    }
    
    // Creates an instance of the library module at initial-time
    // (one for each instance in the user's design) also evaluates
    // the library module's initial process
    void* round_protectlib_create(const char* scopep__V) {
        Vround_container* const handlep__V = new Vround_container{scopep__V};
        return handlep__V;
    }
    
    // Updates all non-clock inputs and retrieves the results
    long long round_protectlib_combo_update(
        void* vhandlep__V
        , const svLogicVecVal* data_in
        , const svLogicVecVal* key_in
        , svLogicVecVal* data_out
    )
    {
        Vround_container* const handlep__V = static_cast<Vround_container*>(vhandlep__V);
        VL_SET_W_SVLV(128, handlep__V->data_in, data_in + 0);
        VL_SET_W_SVLV(128, handlep__V->key_in, key_in + 0);
        handlep__V->eval();
        for (size_t data_out__Vidx = 0; data_out__Vidx < 1; ++data_out__Vidx) VL_SET_SVLV_W(128, data_out + 4 * data_out__Vidx, handlep__V->data_out);
        return handlep__V->m_seqnum++;
    }
    
    // Need to convince some simulators that the input to the module
    // must be evaluated before evaluating the clock edge
    void round_protectlib_combo_ignore(
        void* vhandlep__V
        , const svLogicVecVal* data_in
        , const svLogicVecVal* key_in
    )
    { }
    
    // Evaluates the library module's final process
    void round_protectlib_final(void* vhandlep__V) {
        Vround_container* const handlep__V = static_cast<Vround_container*>(vhandlep__V);
        handlep__V->final();
        delete handlep__V;
    }
    
}
