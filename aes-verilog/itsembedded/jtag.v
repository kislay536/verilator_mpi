/*
Copyright (c) 2015 Princeton University
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of Princeton University nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY PRINCETON UNIVERSITY "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL PRINCETON UNIVERSITY BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

//==================================================================================================
//  Filename      : l15.v
//  Created On    : 2014-01-31 12:52:57
//  Revision      :
//  Author        : Tri Nguyen
//  Company       : Princeton University
//  Email         : trin@princeton.edu
//
//  Description   : JTAG port for the processor. Includes the JTAG interface that runs at JTAG clock
//                  and a central tap (ctap) module that parses the JTAG command to UCB packets
//                  (at processor clock speed) and forward these packets to the receiver tap (rtap)
//                  that lives in the tiles.
//                  The tiles are connected as 2 low-bandwidth, uni-direction rings using the T1's UCB transmitters and receivers.
//                  Ring #1 is the
//==================================================================================================
`define JTAG_ORAM_DATA_WIDTH 64

`ifdef L15_EXTRA_DEBUG
`default_nettype none
`endif

module jtag(
    input clk,
    input rst_n,

    // IO interface
    input wire jtag_clk,
    input wire jtag_rst_l,
    input wire jtag_modesel,
    input wire jtag_datain,
    output wire jtag_dataout,
    output wire jtag_dataout_en,

    // UCB out interface
    output wire jtag_tiles_ucb_val,
    output wire [`UCB_BUS_WIDTH-1:0] jtag_tiles_ucb_data,

    // UCB in interface
    input wire tiles_jtag_ucb_val,
    input wire [`UCB_BUS_WIDTH-1:0] tiles_jtag_ucb_data,

    output wire ctap_oram_req_val,
    output wire [`JTAG_ORAM_MISC_WIDTH-1:0] ctap_oram_req_misc,
    input wire [`JTAG_ORAM_DATA_WIDTH-1:0] oram_ctap_res_data,

    // output wire [`BIST_OP_WIDTH-1:0] ctap_oram_bist_command,
    // output wire [`SRAM_WRAPPER_BUS_WIDTH-1:0] ctap_oram_bist_data,
    // input wire [`SRAM_WRAPPER_BUS_WIDTH-1:0] oram_ctap_sram_data,

    output wire [127:0] ctap_clk_en,
    output wire ctap_oram_clk_en
    );

endmodule

