`define DATA_WIDTH 64
`define NOC_DATA_WIDTH 64
`define PITON_NUM_TILES 2 
`define UCB_BUS_WIDTH  4
`define ARIANE_RV64_TILE 2
`define JTAG_ORAM_MISC_WIDTH 4
`define JTAG_FLATID_WIDTH 8
`define    XY_WIDTH 8
`define NOC_X_WIDTH         `XY_WIDTH
`define NOC_Y_WIDTH         `XY_WIDTH
`define    CHIP_ID_WIDTH 14
`define NOC_CHIPID_WIDTH    `CHIP_ID_WIDTH
`define JTAG_ORAM_DATA_WIDTH 64

module chip(
   input                                        slew,
   input                                        impsel1,
   input                                        impsel2,
   input                                        core_ref_clk,
   input                                        io_clk,
   input                                        rst_n,
   input                                        pll_rst_n,
   input                                        clk_en,
   output                                       pll_lock,
   input                                        pll_bypass,
   input  [4:0]                                 pll_rangea,
   input  [1:0]                                 clk_mux_sel,
   input                                        jtag_clk,
   input                                        jtag_rst_l,
   input                                        jtag_modesel,
   input                                        jtag_datain,
   output                                       jtag_dataout,
   input                                        async_mux,
   input                                        oram_on,
   input                                        oram_traffic_gen,
   input                                        oram_dummy_gen,
   input  [31:0]                                intf_chip_data,
   input  [1:0]                                 intf_chip_channel,
   output [2:0]                                 intf_chip_credit_back,
   output [31:0]                                chip_intf_data,
   output [1:0]                                 chip_intf_channel,
   input  [2:0]                                 chip_intf_credit_back
,   input                                       ndmreset_i       
,   input   [`PITON_NUM_TILES-1:0]              debug_req_i      
,   output  [`PITON_NUM_TILES-1:0]              unavailable_o    
,   input   [`PITON_NUM_TILES-1:0]              timer_irq_i      
,   input   [`PITON_NUM_TILES-1:0]              ipi_i            
,   input   [`PITON_NUM_TILES*2-1:0]            irq_i            
);
   wire                                         core_ref_clk_inter;
   wire                                         io_clk_inter;
   wire                                         rst_n_inter;
   wire                                         pll_rst_n_inter;
   wire                                         clk_en_inter;
   wire                                         pll_lock_inter;
   wire                                         pll_bypass_inter;
   wire [4:0]                                   pll_rangea_inter;
   wire [1:0]                                   clk_mux_sel_inter;
   wire                                         jtag_clk_inter;
   wire                                         jtag_rst_l_inter;
   wire                                         jtag_rst_l_inter_sync;
   wire                                         jtag_modesel_inter;
   wire                                         jtag_datain_inter;
   wire                                         jtag_dataout_inter;
   wire                                         async_mux_inter;
   wire                                         oram_on_inter;
   wire                                         oram_traffic_gen_inter;
   wire                                         oram_dummy_gen_inter;
   wire [31:0]                                  intf_chip_data_inter;
   wire [1:0]                                   intf_chip_channel_inter;
   wire [2:0]                                   intf_chip_credit_back_inter;
   wire [31:0]                                  chip_intf_data_inter;
   wire [1:0]                                   chip_intf_channel_inter;
   wire [2:0]                                   chip_intf_credit_back_inter;
   wire                                         rst_n_inter_sync;
   reg                                          rst_n_inter_sync_f;
   wire                                         io_clk_rst_n_inter_sync;
   reg                                          io_clk_rst_n_inter_sync_f;
   wire                                         core_ref_clk_inter_c;
   wire                                         core_ref_clk_inter_t;
   wire                                         clk_muxed;
   wire                                         pll_clk;
   reg  [31:0]                                  intf_chip_data_inter_buf_f  ;
   reg  [1:0]                                   intf_chip_channel_inter_buf_f  ;
   reg  [2:0]                                   chip_intf_credit_back_inter_buf_f  ;
   wire                                         chip_intf_noc1_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   chip_intf_noc1_data;
   wire                                         chip_intf_noc1_rdy;
   wire                                         chip_intf_noc2_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   chip_intf_noc2_data;
   wire                                         chip_intf_noc2_rdy;
   wire                                         chip_intf_noc3_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   chip_intf_noc3_data;
   wire                                         chip_intf_noc3_rdy;
   wire                                         intf_chip_noc1_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   intf_chip_noc1_data;
   wire                                         intf_chip_noc1_rdy;
   wire                                         intf_chip_noc2_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   intf_chip_noc2_data;
   wire                                         intf_chip_noc2_rdy;
   wire                                         intf_chip_noc3_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   intf_chip_noc3_data;
   wire                                         intf_chip_noc3_rdy;
   wire                                         processor_offchip_noc1_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   processor_offchip_noc1_data;
   wire                                         processor_offchip_noc1_yummy;
   wire                                         processor_offchip_noc2_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   processor_offchip_noc2_data;
   wire                                         processor_offchip_noc2_yummy;
   wire                                         processor_offchip_noc3_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   processor_offchip_noc3_data;
   wire                                         processor_offchip_noc3_yummy;
   wire                                         offchip_processor_noc1_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   offchip_processor_noc1_data;
   wire                                         offchip_processor_noc1_yummy;
   wire                                         offchip_processor_noc2_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   offchip_processor_noc2_data;
   wire                                         offchip_processor_noc2_yummy;
   wire                                         offchip_processor_noc3_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   offchip_processor_noc3_data;
   wire                                         offchip_processor_noc3_yummy;
   reg                                          proc_oram_yummy;
   reg                                          oram_proc_valid;
   reg  [`NOC_DATA_WIDTH-1:0]                   oram_proc_data;
   reg                                          offchip_oram_yummy;
   reg                                          oram_offchip_valid;
   reg  [`NOC_DATA_WIDTH-1:0]                   oram_offchip_data;
   wire                                         proc_oram_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   proc_oram_data;
   wire                                         proc_oram_yummy_oram;
   wire                                         oram_proc_valid_oram;
   wire [`NOC_DATA_WIDTH-1:0]                   oram_proc_data_oram;
   wire                                         oram_proc_yummy;
   wire                                         offchip_oram_valid;
   wire [`NOC_DATA_WIDTH-1:0]                   offchip_oram_data;
   wire                                         offchip_oram_yummy_oram;
   wire                                         oram_offchip_valid_oram;
   wire [`NOC_DATA_WIDTH-1:0]                   oram_offchip_data_oram;
   wire                                         oram_offchip_yummy;
   wire                                         ctap_oram_clk_en;
   wire                                         ctap_oram_req_val;
   wire [`JTAG_ORAM_MISC_WIDTH-1:0]             ctap_oram_req_misc;
   wire [`JTAG_ORAM_DATA_WIDTH-1:0]             oram_ctap_res_data;
   wire                                         tiles_jtag_ucb_val;
   wire [`UCB_BUS_WIDTH-1:0]                    tiles_jtag_ucb_data;
   wire                                         jtag_tiles_ucb_val;
   wire [`UCB_BUS_WIDTH-1:0]                    jtag_tiles_ucb_data;
   wire [127:0]                                 ctap_clk_en_inter;  
   wire tile0_jtag_ucb_val;
wire [`UCB_BUS_WIDTH-1:0] tile0_jtag_ucb_data;
wire tile1_jtag_ucb_val;
wire [`UCB_BUS_WIDTH-1:0] tile1_jtag_ucb_data;
wire [`DATA_WIDTH-1:0] tile_0_0_out_N_noc1_data;
wire [`DATA_WIDTH-1:0] tile_0_0_out_S_noc1_data;
wire [`DATA_WIDTH-1:0] tile_0_0_out_E_noc1_data;
wire [`DATA_WIDTH-1:0] tile_0_0_out_W_noc1_data;
wire tile_0_0_out_N_noc1_valid;
wire tile_0_0_out_S_noc1_valid;
wire tile_0_0_out_E_noc1_valid;
wire tile_0_0_out_W_noc1_valid;
wire tile_0_0_out_N_noc1_yummy;
wire tile_0_0_out_S_noc1_yummy;
wire tile_0_0_out_E_noc1_yummy;
wire tile_0_0_out_W_noc1_yummy;
wire [`DATA_WIDTH-1:0] tile_0_0_out_N_noc2_data;
wire [`DATA_WIDTH-1:0] tile_0_0_out_S_noc2_data;
wire [`DATA_WIDTH-1:0] tile_0_0_out_E_noc2_data;
wire [`DATA_WIDTH-1:0] tile_0_0_out_W_noc2_data;
wire tile_0_0_out_N_noc2_valid;
wire tile_0_0_out_S_noc2_valid;
wire tile_0_0_out_E_noc2_valid;
wire tile_0_0_out_W_noc2_valid;
wire tile_0_0_out_N_noc2_yummy;
wire tile_0_0_out_S_noc2_yummy;
wire tile_0_0_out_E_noc2_yummy;
wire tile_0_0_out_W_noc2_yummy;
wire [`DATA_WIDTH-1:0] tile_0_0_out_N_noc3_data;
wire [`DATA_WIDTH-1:0] tile_0_0_out_S_noc3_data;
wire [`DATA_WIDTH-1:0] tile_0_0_out_E_noc3_data;
wire [`DATA_WIDTH-1:0] tile_0_0_out_W_noc3_data;
wire tile_0_0_out_N_noc3_valid;
wire tile_0_0_out_S_noc3_valid;
wire tile_0_0_out_E_noc3_valid;
wire tile_0_0_out_W_noc3_valid;
wire tile_0_0_out_N_noc3_yummy;
wire tile_0_0_out_S_noc3_yummy;
wire tile_0_0_out_E_noc3_yummy;
wire tile_0_0_out_W_noc3_yummy;
wire [`DATA_WIDTH-1:0] tile_0_1_out_N_noc1_data;
wire [`DATA_WIDTH-1:0] tile_0_1_out_S_noc1_data;
wire [`DATA_WIDTH-1:0] tile_0_1_out_E_noc1_data;
wire [`DATA_WIDTH-1:0] tile_0_1_out_W_noc1_data;
wire tile_0_1_out_N_noc1_valid;
wire tile_0_1_out_S_noc1_valid;
wire tile_0_1_out_E_noc1_valid;
wire tile_0_1_out_W_noc1_valid;
wire tile_0_1_out_N_noc1_yummy;
wire tile_0_1_out_S_noc1_yummy;
wire tile_0_1_out_E_noc1_yummy;
wire tile_0_1_out_W_noc1_yummy;
wire [`DATA_WIDTH-1:0] tile_0_1_out_N_noc2_data;
wire [`DATA_WIDTH-1:0] tile_0_1_out_S_noc2_data;
wire [`DATA_WIDTH-1:0] tile_0_1_out_E_noc2_data;
wire [`DATA_WIDTH-1:0] tile_0_1_out_W_noc2_data;
wire tile_0_1_out_N_noc2_valid;
wire tile_0_1_out_S_noc2_valid;
wire tile_0_1_out_E_noc2_valid;
wire tile_0_1_out_W_noc2_valid;
wire tile_0_1_out_N_noc2_yummy;
wire tile_0_1_out_S_noc2_yummy;
wire tile_0_1_out_E_noc2_yummy;
wire tile_0_1_out_W_noc2_yummy;
wire [`DATA_WIDTH-1:0] tile_0_1_out_N_noc3_data;
wire [`DATA_WIDTH-1:0] tile_0_1_out_S_noc3_data;
wire [`DATA_WIDTH-1:0] tile_0_1_out_E_noc3_data;
wire [`DATA_WIDTH-1:0] tile_0_1_out_W_noc3_data;
wire tile_0_1_out_N_noc3_valid;
wire tile_0_1_out_S_noc3_valid;
wire tile_0_1_out_E_noc3_valid;
wire tile_0_1_out_W_noc3_valid;
wire tile_0_1_out_N_noc3_yummy;
wire tile_0_1_out_S_noc3_yummy;
wire tile_0_1_out_E_noc3_yummy;
wire tile_0_1_out_W_noc3_yummy;
wire [`DATA_WIDTH-1:0] dummy_out_N_noc1_data = `DATA_WIDTH'b0;
wire [`DATA_WIDTH-1:0] dummy_out_S_noc1_data = `DATA_WIDTH'b0;
wire [`DATA_WIDTH-1:0] dummy_out_E_noc1_data = `DATA_WIDTH'b0;
wire [`DATA_WIDTH-1:0] dummy_out_W_noc1_data = `DATA_WIDTH'b0;
wire dummy_out_N_noc1_valid = 1'b0;
wire dummy_out_S_noc1_valid = 1'b0;
wire dummy_out_E_noc1_valid = 1'b0;
wire dummy_out_W_noc1_valid = 1'b0;
wire dummy_out_N_noc1_yummy = 1'b0;
wire dummy_out_S_noc1_yummy = 1'b0;
wire dummy_out_E_noc1_yummy = 1'b0;
wire dummy_out_W_noc1_yummy = 1'b0;
wire [`DATA_WIDTH-1:0] dummy_out_N_noc2_data = `DATA_WIDTH'b0;
wire [`DATA_WIDTH-1:0] dummy_out_S_noc2_data = `DATA_WIDTH'b0;
wire [`DATA_WIDTH-1:0] dummy_out_E_noc2_data = `DATA_WIDTH'b0;
wire [`DATA_WIDTH-1:0] dummy_out_W_noc2_data = `DATA_WIDTH'b0;
wire dummy_out_N_noc2_valid = 1'b0;
wire dummy_out_S_noc2_valid = 1'b0;
wire dummy_out_E_noc2_valid = 1'b0;
wire dummy_out_W_noc2_valid = 1'b0;
wire dummy_out_N_noc2_yummy = 1'b0;
wire dummy_out_S_noc2_yummy = 1'b0;
wire dummy_out_E_noc2_yummy = 1'b0;
wire dummy_out_W_noc2_yummy = 1'b0;
wire [`DATA_WIDTH-1:0] dummy_out_N_noc3_data = `DATA_WIDTH'b0;
wire [`DATA_WIDTH-1:0] dummy_out_S_noc3_data = `DATA_WIDTH'b0;
wire [`DATA_WIDTH-1:0] dummy_out_E_noc3_data = `DATA_WIDTH'b0;
wire [`DATA_WIDTH-1:0] dummy_out_W_noc3_data = `DATA_WIDTH'b0;
wire dummy_out_N_noc3_valid = 1'b0;
wire dummy_out_S_noc3_valid = 1'b0;
wire dummy_out_E_noc3_valid = 1'b0;
wire dummy_out_W_noc3_valid = 1'b0;
wire dummy_out_N_noc3_yummy = 1'b0;
wire dummy_out_S_noc3_yummy = 1'b0;
wire dummy_out_E_noc3_yummy = 1'b0;
wire dummy_out_W_noc3_yummy = 1'b0;
wire [`DATA_WIDTH-1:0] offchip_out_E_noc1_data;
wire offchip_out_E_noc1_valid;
wire offchip_out_E_noc1_yummy;
wire [`DATA_WIDTH-1:0] offchip_out_E_noc2_data;
wire offchip_out_E_noc2_valid;
wire offchip_out_E_noc2_yummy;
wire [`DATA_WIDTH-1:0] offchip_out_E_noc3_data;
wire offchip_out_E_noc3_valid;
wire offchip_out_E_noc3_yummy;
   always @ (posedge clk_muxed)
      rst_n_inter_sync_f <= rst_n_inter_sync;
   always @ (posedge io_clk_inter)
      io_clk_rst_n_inter_sync_f <= io_clk_rst_n_inter_sync;
   always @(posedge io_clk_inter)
   begin
       if(~rst_n_inter_sync_f)
       begin
           intf_chip_data_inter_buf_f <= 0;
           intf_chip_channel_inter_buf_f <= 0;
           chip_intf_credit_back_inter_buf_f <= 0;
       end
       else
       begin
           intf_chip_data_inter_buf_f <= intf_chip_data_inter;
           intf_chip_channel_inter_buf_f <= intf_chip_channel_inter;
           chip_intf_credit_back_inter_buf_f <= chip_intf_credit_back_inter;
       end
   end
assign proc_oram_valid = tile_0_0_out_W_noc2_valid;
assign proc_oram_data = tile_0_0_out_W_noc2_data;
assign oram_proc_yummy = tile_0_0_out_W_noc3_yummy;
   assign offchip_oram_valid = offchip_processor_noc3_valid;
   assign offchip_oram_data = offchip_processor_noc3_data;
   assign oram_offchip_yummy = processor_offchip_noc2_yummy;
assign processor_offchip_noc1_valid = tile_0_0_out_W_noc1_valid;
assign processor_offchip_noc1_data = tile_0_0_out_W_noc1_data;
assign offchip_processor_noc1_yummy = tile_0_0_out_W_noc1_yummy;
   assign processor_offchip_noc2_valid = oram_offchip_valid;
   assign processor_offchip_noc2_data = oram_offchip_data;
assign offchip_processor_noc2_yummy = tile_0_0_out_W_noc2_yummy;
assign processor_offchip_noc3_valid = tile_0_0_out_W_noc3_valid;
assign processor_offchip_noc3_data = tile_0_0_out_W_noc3_data;
   assign offchip_processor_noc3_yummy = offchip_oram_yummy;
assign offchip_out_E_noc1_data = offchip_processor_noc1_data;
assign offchip_out_E_noc1_valid = offchip_processor_noc1_valid;
assign offchip_out_E_noc1_yummy = processor_offchip_noc1_yummy;
assign offchip_out_E_noc2_data = offchip_processor_noc2_data;
assign offchip_out_E_noc2_valid = offchip_processor_noc2_valid;
assign offchip_out_E_noc2_yummy = proc_oram_yummy;  
assign offchip_out_E_noc3_data = oram_proc_data;
assign offchip_out_E_noc3_valid = oram_proc_valid;
assign offchip_out_E_noc3_yummy = processor_offchip_noc3_yummy;
   always @ *
   begin
     oram_offchip_valid = proc_oram_valid;
     oram_offchip_data = proc_oram_data;
     proc_oram_yummy = oram_offchip_yummy;
     oram_proc_valid = offchip_oram_valid;
     oram_proc_data = offchip_oram_data;
     offchip_oram_yummy = oram_proc_yummy;
     if (oram_on_inter)
     begin
       oram_offchip_valid = oram_offchip_valid_oram;
       oram_offchip_data = oram_offchip_data_oram;
       proc_oram_yummy = proc_oram_yummy_oram;
       oram_proc_valid = oram_proc_valid_oram;
       oram_proc_data = oram_proc_data_oram;
       offchip_oram_yummy = offchip_oram_yummy_oram;
     end
   end
assign tiles_jtag_ucb_val = tile0_jtag_ucb_val | tile1_jtag_ucb_val;
assign tiles_jtag_ucb_data = tile0_jtag_ucb_data | tile1_jtag_ucb_data;


OCI oci_inst (
   .slew                (slew),
   .impsel1                (impsel1),
   .impsel2                (impsel2),
   .core_ref_clk           (core_ref_clk),
   .io_clk                 (io_clk),
   .rst_n                  (rst_n),
   .pll_rst_n              (pll_rst_n),
   .pll_rangea             (pll_rangea),
   .clk_mux_sel               (clk_mux_sel),
   .clk_en                 (clk_en),
   .pll_bypass             (pll_bypass),
   .async_mux              (async_mux),
   .oram_on                (oram_on),
   .oram_traffic_gen       (oram_traffic_gen),
   .oram_dummy_gen            (oram_dummy_gen),
   .pll_lock               (pll_lock),
   .jtag_clk               (jtag_clk),
   .jtag_rst_l             (jtag_rst_l),
   .jtag_modesel           (jtag_modesel),
   .jtag_datain               (jtag_datain),
   .jtag_dataout           (jtag_dataout),
   .intf_chip_data            (intf_chip_data),
   .intf_chip_channel         (intf_chip_channel),
   .intf_chip_credit_back     (intf_chip_credit_back),
   .chip_intf_data            (chip_intf_data),
   .chip_intf_channel         (chip_intf_channel),
   .chip_intf_credit_back     (chip_intf_credit_back),
   .core_ref_clk_inter        (core_ref_clk_inter),
   .io_clk_inter           (io_clk_inter),
   .rst_n_inter               (rst_n_inter),
   .pll_rst_n_inter           (pll_rst_n_inter),
   .pll_rangea_inter       (pll_rangea_inter),
   .clk_mux_sel_inter         (clk_mux_sel_inter),
   .clk_en_inter           (clk_en_inter),
   .pll_bypass_inter       (pll_bypass_inter),
   .async_mux_inter           (async_mux_inter),
   .oram_on_inter          (oram_on_inter),
   .oram_traffic_gen_inter    (oram_traffic_gen_inter),
   .oram_dummy_gen_inter      (oram_dummy_gen_inter),
   .pll_lock_inter            (pll_lock_inter),
   .jtag_clk_inter            (jtag_clk_inter),
   .jtag_rst_l_inter       (jtag_rst_l_inter),
   .jtag_modesel_inter        (jtag_modesel_inter),
   .jtag_datain_inter         (jtag_datain_inter),
   .jtag_dataout_inter        (jtag_dataout_inter),
   .intf_chip_data_inter      (intf_chip_data_inter),
   .intf_chip_channel_inter      (intf_chip_channel_inter),
   .intf_chip_credit_back_inter  (intf_chip_credit_back_inter),
   .chip_intf_data_inter      (chip_intf_data_inter),
   .chip_intf_channel_inter      (chip_intf_channel_inter),
   .chip_intf_credit_back_inter  (chip_intf_credit_back_inter) 
);

clk_se_to_diff ref_clk_converter (
       .clk_se  (core_ref_clk_inter),
       .clk_p   (core_ref_clk_inter_t),
       .clk_n   (core_ref_clk_inter_c)
);
clk_mux clock_mux (
       .clk0_p(core_ref_clk_inter_t),
       .clk0_n(core_ref_clk_inter_c),
       .clk1_p(1'b1),
       .clk1_n(1'b0),
       .clk2(pll_clk),
       .sel(clk_mux_sel_inter),
       .clk_muxed(clk_muxed)
);
pll_top pll_top (
      .clk_locked(pll_lock_inter),
      .clk_out(pll_clk),
      .rangeA(pll_rangea_inter),
      .bypass_en(pll_bypass_inter),
      .ref_clk(core_ref_clk_inter),
      .rst(~pll_rst_n_inter)
);

synchronizer rst_sync (
      .clk(clk_muxed),
      .presyncdata(rst_n_inter),
      .syncdata(rst_n_inter_sync)
);

   synchronizer io_clk_rst_sync (
      .clk(io_clk_inter),
      .presyncdata(rst_n_inter),
      .syncdata(io_clk_rst_n_inter_sync)
   );
   synchronizer jtag_rst_sync (
      .clk(clk_muxed),
      .presyncdata(jtag_rst_l_inter),
      .syncdata(jtag_rst_l_inter_sync)
   );
   chip_bridge chip_intf(
       .rst_n                  (rst_n_inter_sync_f),
       .chip_clk               (clk_muxed),
       .intcnct_clk            (io_clk_inter),
       .async_mux              (async_mux_inter),
       .network_out_1          (chip_intf_noc1_data),
       .network_out_2          (chip_intf_noc2_data),
       .network_out_3          (chip_intf_noc3_data),
       .data_out_val_1         (chip_intf_noc1_valid),
       .data_out_val_2         (chip_intf_noc2_valid),
       .data_out_val_3         (chip_intf_noc3_valid),
       .data_out_rdy_1         (chip_intf_noc1_rdy),
       .data_out_rdy_2         (chip_intf_noc2_rdy),
       .data_out_rdy_3         (chip_intf_noc3_rdy),
       .intcnct_data_in        (intf_chip_data_inter_buf_f),
       .intcnct_channel_in     (intf_chip_channel_inter_buf_f),
       .intcnct_credit_back_in (intf_chip_credit_back_inter),
       .network_in_1           (intf_chip_noc1_data),
       .network_in_2           (intf_chip_noc2_data),
       .network_in_3           (intf_chip_noc3_data),
       .data_in_val_1          (intf_chip_noc1_valid),
       .data_in_val_2          (intf_chip_noc2_valid),
       .data_in_val_3          (intf_chip_noc3_valid),
       .data_in_rdy_1          (intf_chip_noc1_rdy),
       .data_in_rdy_2          (intf_chip_noc2_rdy),
       .data_in_rdy_3          (intf_chip_noc3_rdy),
       .intcnct_data_out       (chip_intf_data_inter),
       .intcnct_channel_out    (chip_intf_channel_inter),
       .intcnct_credit_back_out(chip_intf_credit_back_inter_buf_f)
   );
   valrdy_to_credit #(4, 3) chip_from_intf_noc1_v2c(
      .clk(clk_muxed),
      .reset(~rst_n_inter_sync_f),
      .data_in(intf_chip_noc1_data),
      .valid_in(intf_chip_noc1_valid),
      .ready_in(intf_chip_noc1_rdy),
      .data_out(offchip_processor_noc1_data),            
      .valid_out(offchip_processor_noc1_valid),        
      .yummy_out(offchip_processor_noc1_yummy)     
   );
   credit_to_valrdy chip_to_intf_noc1_c2v(
      .clk(clk_muxed),
      .reset(~rst_n_inter_sync_f),
      .data_in(processor_offchip_noc1_data),
      .valid_in(processor_offchip_noc1_valid),
      .yummy_in(processor_offchip_noc1_yummy),
      .data_out(chip_intf_noc1_data),            
      .valid_out(chip_intf_noc1_valid),        
      .ready_out(chip_intf_noc1_rdy)     
   );
   valrdy_to_credit #(4, 3) chip_from_intf_noc2_v2c(
      .clk(clk_muxed),
      .reset(~rst_n_inter_sync_f),
      .data_in(intf_chip_noc2_data),
      .valid_in(intf_chip_noc2_valid),
      .ready_in(intf_chip_noc2_rdy),
      .data_out(offchip_processor_noc2_data),            
      .valid_out(offchip_processor_noc2_valid),        
      .yummy_out(offchip_processor_noc2_yummy)     
   );
   credit_to_valrdy chip_to_intf_noc2_c2v(
      .clk(clk_muxed),
      .reset(~rst_n_inter_sync_f),
      .data_in(processor_offchip_noc2_data),
      .valid_in(processor_offchip_noc2_valid),
      .yummy_in(processor_offchip_noc2_yummy),
      .data_out(chip_intf_noc2_data),            
      .valid_out(chip_intf_noc2_valid),        
      .ready_out(chip_intf_noc2_rdy)     
   );
   valrdy_to_credit #(4, 3) chip_from_intf_noc3_v2c(
      .clk(clk_muxed),
      .reset(~rst_n_inter_sync_f),
      .data_in(intf_chip_noc3_data),
      .valid_in(intf_chip_noc3_valid),
      .ready_in(intf_chip_noc3_rdy),
      .data_out(offchip_processor_noc3_data),            
      .valid_out(offchip_processor_noc3_valid),        
      .yummy_out(offchip_processor_noc3_yummy)     
   );

credit_to_valrdy chip_to_intf_noc3_c2v(
      .clk(clk_muxed),
      .reset(~rst_n_inter_sync_f),
      .data_in(processor_offchip_noc3_data),
      .valid_in(processor_offchip_noc3_valid),
      .yummy_in(processor_offchip_noc3_yummy),
      .data_out(chip_intf_noc3_data),            
      .valid_out(chip_intf_noc3_valid),        
      .ready_out(chip_intf_noc3_rdy)     
   );

jtag jtag_port(
      .clk(clk_muxed),
      .rst_n(rst_n_inter_sync_f),
      .jtag_clk(jtag_clk_inter),
      .jtag_rst_l(jtag_rst_l_inter_sync),
      .jtag_modesel(jtag_modesel_inter),
      .jtag_datain(jtag_datain_inter),
      .jtag_dataout(jtag_dataout_inter),
      .jtag_dataout_en(),
      .jtag_tiles_ucb_val(jtag_tiles_ucb_val),
      .jtag_tiles_ucb_data(jtag_tiles_ucb_data),
      .tiles_jtag_ucb_val(tiles_jtag_ucb_val),
      .tiles_jtag_ucb_data(tiles_jtag_ucb_data),
      .ctap_oram_req_val(ctap_oram_req_val),
      .ctap_oram_req_misc(ctap_oram_req_misc),
      .oram_ctap_res_data(oram_ctap_res_data),
      .ctap_clk_en(ctap_clk_en_inter),
      .ctap_oram_clk_en(ctap_oram_clk_en)
   );

wire [31:0] default_total_num_tiles;
assign default_total_num_tiles = `PITON_NUM_TILES;

tile #(.TILE_TYPE(`ARIANE_RV64_TILE))
tile0 (
    .clk                (clk_muxed),
    .rst_n              (rst_n_inter_sync),
    .clk_en             (ctap_clk_en_inter[0] && clk_en_inter),
    .default_chipid             (14'b0),     
    .default_coreid_x           (8'd0),
    .default_coreid_y           (8'd0),
    .default_total_num_tiles    (default_total_num_tiles      ),
    .flat_tileid                (`JTAG_FLATID_WIDTH'd0)
    ,.debug_req_i         ( debug_req_i[0]   )
    ,.unavailable_o       ( unavailable_o[0] )
    ,.timer_irq_i         ( timer_irq_i[0]   )
    ,.ipi_i               ( ipi_i[0]         )
    ,.irq_i               ( irq_i[0*2 +: 2]  )
    ,
    .tile_jtag_ucb_val   ( tile0_jtag_ucb_val      ),
    .tile_jtag_ucb_data  ( tile0_jtag_ucb_data     ),
    .jtag_tiles_ucb_val  ( jtag_tiles_ucb_val      ),
    .jtag_tiles_ucb_data ( jtag_tiles_ucb_data     ),
    .dyn0_dataIn_N       ( dummy_out_S_noc1_data   ),
    .dyn0_dataIn_E       ( tile_0_1_out_W_noc1_data   ),
    .dyn0_dataIn_W       ( offchip_out_E_noc1_data   ),
    .dyn0_dataIn_S       ( dummy_out_N_noc1_data   ),
    .dyn0_validIn_N      ( dummy_out_S_noc1_valid  ),
    .dyn0_validIn_E      ( tile_0_1_out_W_noc1_valid  ),
    .dyn0_validIn_W      ( offchip_out_E_noc1_valid  ),
    .dyn0_validIn_S      ( dummy_out_N_noc1_valid  ),
    .dyn0_dNo_yummy      ( dummy_out_S_noc1_yummy  ),
    .dyn0_dEo_yummy      ( tile_0_1_out_W_noc1_yummy  ),
    .dyn0_dWo_yummy      ( offchip_out_E_noc1_yummy  ),
    .dyn0_dSo_yummy      ( dummy_out_N_noc1_yummy  ),
    .dyn0_dNo            ( tile_0_0_out_N_noc1_data  ),
    .dyn0_dEo            ( tile_0_0_out_E_noc1_data  ),
    .dyn0_dWo            ( tile_0_0_out_W_noc1_data  ),
    .dyn0_dSo            ( tile_0_0_out_S_noc1_data  ),
    .dyn0_dNo_valid      ( tile_0_0_out_N_noc1_valid ),
    .dyn0_dEo_valid      ( tile_0_0_out_E_noc1_valid ),
    .dyn0_dWo_valid      ( tile_0_0_out_W_noc1_valid ),
    .dyn0_dSo_valid      ( tile_0_0_out_S_noc1_valid ),
    .dyn0_yummyOut_N     ( tile_0_0_out_N_noc1_yummy ),
    .dyn0_yummyOut_E     ( tile_0_0_out_E_noc1_yummy ),
    .dyn0_yummyOut_W     ( tile_0_0_out_W_noc1_yummy ),
    .dyn0_yummyOut_S     ( tile_0_0_out_S_noc1_yummy ),
    .dyn1_dataIn_N       ( dummy_out_S_noc2_data   ),
    .dyn1_dataIn_E       ( tile_0_1_out_W_noc2_data   ),
    .dyn1_dataIn_W       ( offchip_out_E_noc2_data   ),
    .dyn1_dataIn_S       ( dummy_out_N_noc2_data   ),
    .dyn1_validIn_N      ( dummy_out_S_noc2_valid  ),
    .dyn1_validIn_E      ( tile_0_1_out_W_noc2_valid  ),
    .dyn1_validIn_W      ( offchip_out_E_noc2_valid  ),
    .dyn1_validIn_S      ( dummy_out_N_noc2_valid  ),
    .dyn1_dNo_yummy      ( dummy_out_S_noc2_yummy  ),
    .dyn1_dEo_yummy      ( tile_0_1_out_W_noc2_yummy  ),
    .dyn1_dWo_yummy      ( offchip_out_E_noc2_yummy  ),
    .dyn1_dSo_yummy      ( dummy_out_N_noc2_yummy  ),
    .dyn1_dNo            ( tile_0_0_out_N_noc2_data  ),
    .dyn1_dEo            ( tile_0_0_out_E_noc2_data  ),
    .dyn1_dWo            ( tile_0_0_out_W_noc2_data  ),
    .dyn1_dSo            ( tile_0_0_out_S_noc2_data  ),
    .dyn1_dNo_valid      ( tile_0_0_out_N_noc2_valid ),
    .dyn1_dEo_valid      ( tile_0_0_out_E_noc2_valid ),
    .dyn1_dWo_valid      ( tile_0_0_out_W_noc2_valid ),
    .dyn1_dSo_valid      ( tile_0_0_out_S_noc2_valid ),
    .dyn1_yummyOut_N     ( tile_0_0_out_N_noc2_yummy ),
    .dyn1_yummyOut_E     ( tile_0_0_out_E_noc2_yummy ),
    .dyn1_yummyOut_W     ( tile_0_0_out_W_noc2_yummy ),
    .dyn1_yummyOut_S     ( tile_0_0_out_S_noc2_yummy ),
    .dyn2_dataIn_N       ( dummy_out_S_noc3_data   ),
    .dyn2_dataIn_E       ( tile_0_1_out_W_noc3_data   ),
    .dyn2_dataIn_W       ( offchip_out_E_noc3_data   ),
    .dyn2_dataIn_S       ( dummy_out_N_noc3_data   ),
    .dyn2_validIn_N      ( dummy_out_S_noc3_valid  ),
    .dyn2_validIn_E      ( tile_0_1_out_W_noc3_valid  ),
    .dyn2_validIn_W      ( offchip_out_E_noc3_valid  ),
    .dyn2_validIn_S      ( dummy_out_N_noc3_valid  ),
    .dyn2_dNo_yummy      ( dummy_out_S_noc3_yummy  ),
    .dyn2_dEo_yummy      ( tile_0_1_out_W_noc3_yummy  ),
    .dyn2_dWo_yummy      ( offchip_out_E_noc3_yummy  ),
    .dyn2_dSo_yummy      ( dummy_out_N_noc3_yummy  ),
    .dyn2_dNo            ( tile_0_0_out_N_noc3_data  ),
    .dyn2_dEo            ( tile_0_0_out_E_noc3_data  ),
    .dyn2_dWo            ( tile_0_0_out_W_noc3_data  ),
    .dyn2_dSo            ( tile_0_0_out_S_noc3_data  ),
    .dyn2_dNo_valid      ( tile_0_0_out_N_noc3_valid ),
    .dyn2_dEo_valid      ( tile_0_0_out_E_noc3_valid ),
    .dyn2_dWo_valid      ( tile_0_0_out_W_noc3_valid ),
    .dyn2_dSo_valid      ( tile_0_0_out_S_noc3_valid ),
    .dyn2_yummyOut_N     ( tile_0_0_out_N_noc3_yummy ),
    .dyn2_yummyOut_E     ( tile_0_0_out_E_noc3_yummy ),
    .dyn2_yummyOut_W     ( tile_0_0_out_W_noc3_yummy ),
    .dyn2_yummyOut_S     ( tile_0_0_out_S_noc3_yummy )
);
tile #(.TILE_TYPE(`ARIANE_RV64_TILE))
tile1 (
    .clk                (clk_muxed),
    .rst_n              (rst_n_inter_sync),
    .clk_en             (ctap_clk_en_inter[1] && clk_en_inter),
    .default_chipid             (14'b0),     
    .default_coreid_x           (8'd1),
    .default_coreid_y           (8'd0),
    .default_total_num_tiles    (default_total_num_tiles      ),
    .flat_tileid                (`JTAG_FLATID_WIDTH'd1)
    ,.debug_req_i         ( debug_req_i[1]   )
    ,.unavailable_o       ( unavailable_o[1] )
    ,.timer_irq_i         ( timer_irq_i[1]   )
    ,.ipi_i               ( ipi_i[1]         )
    ,.irq_i               ( irq_i[1*2 +: 2]  )
    ,
    .tile_jtag_ucb_val   ( tile1_jtag_ucb_val      ),
    .tile_jtag_ucb_data  ( tile1_jtag_ucb_data     ),
    .jtag_tiles_ucb_val  ( jtag_tiles_ucb_val      ),
    .jtag_tiles_ucb_data ( jtag_tiles_ucb_data     ),
    .dyn0_dataIn_N       ( dummy_out_S_noc1_data   ),
    .dyn0_dataIn_E       ( dummy_out_W_noc1_data   ),
    .dyn0_dataIn_W       ( tile_0_0_out_E_noc1_data   ),
    .dyn0_dataIn_S       ( dummy_out_N_noc1_data   ),
    .dyn0_validIn_N      ( dummy_out_S_noc1_valid  ),
    .dyn0_validIn_E      ( dummy_out_W_noc1_valid  ),
    .dyn0_validIn_W      ( tile_0_0_out_E_noc1_valid  ),
    .dyn0_validIn_S      ( dummy_out_N_noc1_valid  ),
    .dyn0_dNo_yummy      ( dummy_out_S_noc1_yummy  ),
    .dyn0_dEo_yummy      ( dummy_out_W_noc1_yummy  ),
    .dyn0_dWo_yummy      ( tile_0_0_out_E_noc1_yummy  ),
    .dyn0_dSo_yummy      ( dummy_out_N_noc1_yummy  ),
    .dyn0_dNo            ( tile_0_1_out_N_noc1_data  ),
    .dyn0_dEo            ( tile_0_1_out_E_noc1_data  ),
    .dyn0_dWo            ( tile_0_1_out_W_noc1_data  ),
    .dyn0_dSo            ( tile_0_1_out_S_noc1_data  ),
    .dyn0_dNo_valid      ( tile_0_1_out_N_noc1_valid ),
    .dyn0_dEo_valid      ( tile_0_1_out_E_noc1_valid ),
    .dyn0_dWo_valid      ( tile_0_1_out_W_noc1_valid ),
    .dyn0_dSo_valid      ( tile_0_1_out_S_noc1_valid ),
    .dyn0_yummyOut_N     ( tile_0_1_out_N_noc1_yummy ),
    .dyn0_yummyOut_E     ( tile_0_1_out_E_noc1_yummy ),
    .dyn0_yummyOut_W     ( tile_0_1_out_W_noc1_yummy ),
    .dyn0_yummyOut_S     ( tile_0_1_out_S_noc1_yummy ),
    .dyn1_dataIn_N       ( dummy_out_S_noc2_data   ),
    .dyn1_dataIn_E       ( dummy_out_W_noc2_data   ),
    .dyn1_dataIn_W       ( tile_0_0_out_E_noc2_data   ),
    .dyn1_dataIn_S       ( dummy_out_N_noc2_data   ),
    .dyn1_validIn_N      ( dummy_out_S_noc2_valid  ),
    .dyn1_validIn_E      ( dummy_out_W_noc2_valid  ),
    .dyn1_validIn_W      ( tile_0_0_out_E_noc2_valid  ),
    .dyn1_validIn_S      ( dummy_out_N_noc2_valid  ),
    .dyn1_dNo_yummy      ( dummy_out_S_noc2_yummy  ),
    .dyn1_dEo_yummy      ( dummy_out_W_noc2_yummy  ),
    .dyn1_dWo_yummy      ( tile_0_0_out_E_noc2_yummy  ),
    .dyn1_dSo_yummy      ( dummy_out_N_noc2_yummy  ),
    .dyn1_dNo            ( tile_0_1_out_N_noc2_data  ),
    .dyn1_dEo            ( tile_0_1_out_E_noc2_data  ),
    .dyn1_dWo            ( tile_0_1_out_W_noc2_data  ),
    .dyn1_dSo            ( tile_0_1_out_S_noc2_data  ),
    .dyn1_dNo_valid      ( tile_0_1_out_N_noc2_valid ),
    .dyn1_dEo_valid      ( tile_0_1_out_E_noc2_valid ),
    .dyn1_dWo_valid      ( tile_0_1_out_W_noc2_valid ),
    .dyn1_dSo_valid      ( tile_0_1_out_S_noc2_valid ),
    .dyn1_yummyOut_N     ( tile_0_1_out_N_noc2_yummy ),
    .dyn1_yummyOut_E     ( tile_0_1_out_E_noc2_yummy ),
    .dyn1_yummyOut_W     ( tile_0_1_out_W_noc2_yummy ),
    .dyn1_yummyOut_S     ( tile_0_1_out_S_noc2_yummy ),
    .dyn2_dataIn_N       ( dummy_out_S_noc3_data   ),
    .dyn2_dataIn_E       ( dummy_out_W_noc3_data   ),
    .dyn2_dataIn_W       ( tile_0_0_out_E_noc3_data   ),
    .dyn2_dataIn_S       ( dummy_out_N_noc3_data   ),
    .dyn2_validIn_N      ( dummy_out_S_noc3_valid  ),
    .dyn2_validIn_E      ( dummy_out_W_noc3_valid  ),
    .dyn2_validIn_W      ( tile_0_0_out_E_noc3_valid  ),
    .dyn2_validIn_S      ( dummy_out_N_noc3_valid  ),
    .dyn2_dNo_yummy      ( dummy_out_S_noc3_yummy  ),
    .dyn2_dEo_yummy      ( dummy_out_W_noc3_yummy  ),
    .dyn2_dWo_yummy      ( tile_0_0_out_E_noc3_yummy  ),
    .dyn2_dSo_yummy      ( dummy_out_N_noc3_yummy  ),
    .dyn2_dNo            ( tile_0_1_out_N_noc3_data  ),
    .dyn2_dEo            ( tile_0_1_out_E_noc3_data  ),
    .dyn2_dWo            ( tile_0_1_out_W_noc3_data  ),
    .dyn2_dSo            ( tile_0_1_out_S_noc3_data  ),
    .dyn2_dNo_valid      ( tile_0_1_out_N_noc3_valid ),
    .dyn2_dEo_valid      ( tile_0_1_out_E_noc3_valid ),
    .dyn2_dWo_valid      ( tile_0_1_out_W_noc3_valid ),
    .dyn2_dSo_valid      ( tile_0_1_out_S_noc3_valid ),
    .dyn2_yummyOut_N     ( tile_0_1_out_N_noc3_yummy ),
    .dyn2_yummyOut_E     ( tile_0_1_out_E_noc3_yummy ),
    .dyn2_yummyOut_W     ( tile_0_1_out_W_noc3_yummy ),
    .dyn2_yummyOut_S     ( tile_0_1_out_S_noc3_yummy )
);
endmodule
