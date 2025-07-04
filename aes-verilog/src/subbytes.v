module subbytes(data,s_data_out);
	 input [127:0]data;
	 output  [127:0]s_data_out;
		
		
     sbox q0(data[127:120],s_data_out[127:120] );
     sbox q1( data[119:112],s_data_out[119:112] );
     sbox q2( data[111:104],s_data_out[111:104] );
     sbox q3( data[103:96],s_data_out[103:96] );
     
     sbox q4( data[95:88],s_data_out[95:88] );
     sbox q5( data[87:80],s_data_out[87:80] );
     sbox q6( data[79:72],s_data_out[79:72] );
     sbox q7( data[71:64],s_data_out[71:64] );
     
     sbox q8( data[63:56],s_data_out[63:56] );
     sbox q9( data[55:48],s_data_out[55:48] );
     sbox q10(data[47:40],s_data_out[47:40] );
     sbox q11(data[39:32],s_data_out[39:32] );
     
     sbox q12(data[31:24],s_data_out[31:24] );
     sbox q13(data[23:16],s_data_out[23:16] );
     sbox q14(data[15:8],s_data_out[15:8] );
     sbox q15(data[7:0],s_data_out[7:0] );
	  

endmodule
