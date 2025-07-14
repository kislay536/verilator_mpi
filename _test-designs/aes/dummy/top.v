module regfile(); endmodule
module alu(); endmodule
module cpu(); alu u1(); regfile rf(); endmodule
module top(); cpu c(); endmodule
