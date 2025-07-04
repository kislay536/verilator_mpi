Vround/round.sv
aes_main.v
aes_key_expand_128.v
lastround.v
mixcolumn.v
round.v
sbox.v
shiftrows.v
subbytes.v
sim_main.cpp
--top-module aes_main
--prefix Vaes_main
-Mdir obj_dir
--mod-prefix Vaes_main
--hierarchical-block round,round
--threads 1
--cc
"-Wall" "--cc" "--exe" "--Wno-fatal"
