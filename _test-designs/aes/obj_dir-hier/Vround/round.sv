// DESCRIPTION: Verilator generated Verilog
// Wrapper module for DPI protected library
// This module requires libround.a or libround.so to work
// See instructions in your simulator for how to use DPI libraries

module round (
        input logic [127:0]  data_in
        , input logic [127:0]  key_in
        , output logic [127:0]  data_out
    );
    
    // Precision of submodule (commented out to avoid requiring timescale on all modules)
    // timeunit 1ps;
    // timeprecision 1ps;
    
    // Checks to make sure the .sv wrapper and library agree
    import "DPI-C" function void round_protectlib_check_hash(int protectlib_hash__V);
    
    // Creates an instance of the library module at initial-time
    // (one for each instance in the user's design) also evaluates
    // the library module's initial process
    import "DPI-C" function chandle round_protectlib_create(string scope__V);
    
    // Updates all non-clock inputs and retrieves the results
    import "DPI-C" function longint round_protectlib_combo_update (
        chandle handle__V
        , input logic [127:0]  data_in
        , input logic [127:0]  key_in
        , output logic [127:0]  data_out
    );
    
    // Updates all clocks and retrieves the results
    // Need to convince some simulators that the input to the module
    // must be evaluated before evaluating the clock edge
    import "DPI-C" function void round_protectlib_combo_ignore(
        chandle handle__V
        , input logic [127:0]  data_in
        , input logic [127:0]  key_in
    );
    
    // Evaluates the library module's final process
    import "DPI-C" function void round_protectlib_final(chandle handle__V);
    
    // verilator tracing_off
    chandle handle__V;
    time last_combo_seqnum__V;

    logic [127:0]  data_out_combo__V;
    // Hash value to make sure this file and the corresponding
    // library agree
    localparam int protectlib_hash__V = 32'd3433839835;

    initial begin
        round_protectlib_check_hash(protectlib_hash__V);
        handle__V = round_protectlib_create($sformatf("%m"));
    end
    
    // Combinatorialy evaluate changes to inputs
    always @* begin
        last_combo_seqnum__V = round_protectlib_combo_update(
            handle__V
            , data_in
            , key_in
            , data_out_combo__V
        );
    end
    
    // Select between combinatorial and sequential results
    always @* begin
        data_out = data_out_combo__V;
    end
    
    final round_protectlib_final(handle__V);
    
endmodule

`ifdef VERILATOR
`verilator_config
profile_data -hier-dpi "round_protectlib_combo_update" -cost 64'd8929
profile_data -hier-dpi "round_protectlib_seq_update" -cost 64'd8929
profile_data -hier-dpi "round_protectlib_combo_ignore" -cost 64'd1
hier_workers -hier-dpi "round_protectlib_combo_update" -workers 16'd0
hier_workers -hier-dpi "round_protectlib_seq_update" -workers 16'd0
`verilog
`endif
