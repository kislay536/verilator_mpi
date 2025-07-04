--cc
-Mdir obj_dir/Vround 
aes_main.v
aes_key_expand_128.v
lastround.v
mixcolumn.v
round.v
sbox.v
shiftrows.v
subbytes.v
 --prefix Vround
 --mod-prefix Vround
 --top-module round
 --lib-create round
 --hierarchical-child 1
--hierarchical-block round,round
"-Wall" "--Wno-fatal"
