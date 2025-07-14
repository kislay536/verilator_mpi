
module aes_key_expand_128( key,key_s0,key_s1,key_s2,key_s3,key_s4,key_s5,key_s6,key_s7,key_s8,key_s9,key_s10);
input	[127:0]	key;
output [127:0] key_s0,key_s1,key_s2,key_s3,key_s4,key_s5,key_s6,key_s7,key_s8,key_s9,key_s10;

wire	[31:0]	w0,w1,w2,w3, w4, w5, w6, w7, w8, w9, w10, w11, w12, w13, w14, w15, w16, w17,
							w18, w19, w20, w21, w22, w23, w24, w25, w26, w27, w28, w29, w30, w31, w32, w33,
							w34, w35, w36, w37, w38, w39, w40, w41, w42, w43;
wire	[31:0]	subword, subword2,subword3,subword4,subword5, subword6, subword7,subword8,subword9,subword10;			
  wire	[7:0]	rcon1, rcon2,rcon3,rcon4,rcon5, rcon6, rcon7,rcon8,rcon9,rcon10;
  
 assign rcon1=8'h01;		
 assign rcon2=8'h02;		
 assign rcon3=8'h04;		
 assign rcon4=8'h08;		
 assign rcon5=8'h10;		
 assign rcon6=8'h20;		
 assign rcon7=8'h40;		
 assign rcon8=8'h80;		
 assign rcon9=8'h1b;		
 assign rcon10=8'h36;	


 
assign w0 =  key[127:096];
assign w1 =  key[095:064];
assign w2 =  key[063:032];
assign w3 =  key[031:000];

assign w4 =  key[127:096]^subword^{8'h01,24'b0};
assign w5 =  key[095:064]^key[127:096]^subword^{8'h01,24'b0};
assign w6 =  key[063:032]^key[095:064]^key[127:096]^subword^{8'h01,24'b0}; 
assign w7 =  key[127:096]^key[095:064]^key[063:032]^key[031:000]^subword^{8'h01,24'b0};

assign w8  =  w4^subword2^{rcon2,24'b0};
assign w9  =  w5^w4^subword2^{rcon2,24'b0};
assign w10 =  w6^w5^w4^subword2^{rcon2,24'b0}; 
assign w11 =  w7^w6^w5^w4^subword2^{rcon2,24'b0};


assign w12  =  w8^subword3^{rcon3,24'b0};
assign w13  =  w8^w9^subword3^{rcon3,24'b0};
assign w14  =  w8^w9^w10^subword3^{rcon3,24'b0}; 
assign w15  =  w8^w9^w10^w11^subword3^{rcon3,24'b0};


assign w16  =  w12^subword4^{rcon4,24'b0};
assign w17  =  w12^w13^subword4^{rcon4,24'b0};
assign w18  =  w12^w13^w14^subword4^{rcon4,24'b0}; 
assign w19  =  w12^w13^w14^w15^subword4^{rcon4,24'b0};


assign w20  =  w16^subword5^{rcon5,24'b0};
assign w21  =  w16^w17^subword5^{rcon5,24'b0};
assign w22  =  w16^w17^w18^subword5^{rcon5,24'b0}; 
assign w23  =  w16^w17^w18^w19^subword5^{rcon5,24'b0};


assign w24  =  w20^subword6^{rcon6,24'b0};
assign w25  =  w20^w21^subword6^{rcon6,24'b0};
assign w26  =  w20^w21^w22^subword6^{rcon6,24'b0}; 
assign w27  =  w20^w21^w22^w23^subword6^{rcon6,24'b0};

assign w28  =  w24^subword7^{rcon7,24'b0};
assign w29  =  w24^w25^subword7^{rcon7,24'b0};
assign w30  =  w24^w25^w26^subword7^{rcon7,24'b0}; 
assign w31  =  w24^w25^w26^w27^subword7^{rcon7,24'b0};


assign w32  =  w28^subword8^{rcon8,24'b0};
assign w33  =  w28^w29^subword8^{rcon8,24'b0};
assign w34  =  w28^w29^w30^subword8^{rcon8,24'b0}; 
assign w35  =  w28^w29^w30^w31^subword8^{rcon8,24'b0};

assign w36  =  w32^subword9^{rcon9,24'b0};
assign w37  =  w32^w33^subword9^{rcon9,24'b0};
assign w38  =  w32^w33^w34^subword9^{rcon9,24'b0}; 
assign w39  =  w32^w33^w34^w35^subword9^{rcon9,24'b0};

assign w40  =  w36^subword10^{rcon10,24'b0};
assign w41  =  w36^w37^subword10^{rcon10,24'b0};
assign w42  =  w36^w37^w38^subword10^{rcon10,24'b0}; 
assign w43  =  w36^w37^w38^w39^subword10^{rcon10,24'b0};

 
sbox u0(w3[23:16],subword[31:24]);
sbox u1(w3[15:8], subword[23:16]);
sbox u2(w3[7:0], subword[15:8]);
sbox u3(w3[31:24], subword[7:0]); 

sbox u4(w7[23:16], subword2[31:24]);
sbox u5(w7[15:08], subword2[23:16]);
sbox u6(w7[7:0], subword2[15:8]);
sbox u7(w7[31:24], subword2[7:0]); 


sbox u8(w11[23:16], subword3[31:24]);
sbox u9(w11[15:8], subword3[23:16]);
sbox u10(w11[7:0], subword3[15:08]);
sbox u11(w11[31:24], subword3[7:0]); 


sbox u12(w15[23:16], subword4[31:24]);
sbox u13(w15[15:08], subword4[23:16]);
sbox u14(w15[7:0], subword4[15:8]);
sbox u15(w15[31:24], subword4[7:0]); 

sbox u16(w19[23:16],subword5[31:24]);
sbox u17(w19[15:8], subword5[23:16]);
sbox u18(w19[7:0], subword5[15:8]);
sbox u19(w19[31:24], subword5[7:0]); 

sbox u20(w23[23:16], subword6[31:24]);
sbox u21(w23[15:8], subword6[23:16]);
sbox u22(w23[7:0], subword6[15:8]);
sbox u23(w23[31:24], subword6[7:0]); 

sbox u24(w27[23:16], subword7[31:24]);
sbox u25(w27[15:08], subword7[23:16]);
sbox u26(w27[7:0], subword7[15:8]);
sbox u27(w27[31:24], subword7[7:0]); 

sbox u28(w31[23:16], subword8[31:24]);
sbox u29(w31[15:08], subword8[23:16]);
sbox u30(w31[7:0], subword8[15:8]);
sbox u31(w31[31:24], subword8[7:0]); 

sbox u32(w35[23:16], subword9[31:24]);
sbox u33(w35[15:08], subword9[23:16]);
sbox u34(w35[7:0], subword9[15:8]);
sbox u35(w35[31:24], subword9[7:0]); 

sbox u36(w39[23:16], subword10[31:24]);
sbox u37(w39[15:08], subword10[23:16]);
sbox u38(w39[7:0], subword10[15:8]);
sbox u39(w39[31:24], subword10[7:0]); 




assign key_s0={w0,w1,w2,w3};
assign key_s1={w4,w5,w6,w7};
assign key_s2={w8,w9,w10,w11};
assign key_s3={w12,w13,w14,w15};
assign key_s4={w16,w17,w18,w19};
assign key_s5={w20,w21,w22,w23};
assign key_s6={w24,w25,w26,w27};
assign key_s7={w28,w29,w30,w31};
assign key_s8={w32,w33,w34,w35};
assign key_s9={w36,w37,w38,w39};
assign key_s10={w40,w41,w42,w43};



endmodule
