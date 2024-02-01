`default_nettype none
// Empty top module

module top (
  // I/O ports
  input  logic hz100, reset,
  input  logic [20:0] pb,
  output logic [7:0] left, right,
         ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0,
  output logic red, green, blue,

  // UART ports
  output logic [7:0] txdata,
  input  logic [7:0] rxdata,
  output logic txclk, rxclk,
  input  logic txready, rxready
);

  // Your code goes here...
  /*ha h1(.a(pb[0]), .b(pb[1]), .s(right[0]), .co(right[1]));
  //fa f1(.a(pb[0]), .b(pb[1]), .ci(pb[2]), .s(right[0]), .co(right[1]));
  //fa4 f41(.a(pb[3:0]), .b(pb[7:4]), .ci(pb[19]), .s(right[3:0]), .co(right[4]));
  //fa8 f81(.a(pb[7:0]), .b(pb[15:8]), .ci(pb[19]), .s(right[7:0]), .co(red));
  //addsub8 as1(.a(pb[7:0]), .b(pb[15:8]), .op(pb[18]), .s(right[7:0]), .co(red));
  logic co;
  logic [3:0] s;
  bcdadd1 ba1(.a(pb[3:0]), .b(pb[7:4]), .ci(pb[19]), .co(co), .s(s));
  ssdec s0(.in(s), .out(ss0[6:0]), .enable(1));
  ssdec s1(.in({3'b0,co}), .out(ss1[6:0]), .enable(1));
  ssdec s5(.in(pb[7:4]), .out(ss5[6:0]), .enable(1));
  ssdec s7(.in(pb[3:0]), .out(ss7[6:0]), .enable(1));
  logic co;
  logic [15:0] s;
  bcdadd4 ba1(.a(16'h9876), .b(16'h3333), .ci(0), .co(red), .s(s));
  ssdec s0(.in(s[3:0]),   .out(ss0[6:0]), .enable(1));
  ssdec s1(.in(s[7:4]),   .out(ss1[6:0]), .enable(1));
  ssdec s2(.in(s[11:8]),  .out(ss2[6:0]), .enable(1));
  ssdec s3(.in(s[15:12]), .out(ss3[6:0]), .enable(1));
  logic [3:0] out;
  bcd9comp1 cmp1(.in(pb[3:0]), .out(out));
  ssdec s0(.in(pb[3:0]), .out(ss0[6:0]), .enable(1));
  ssdec s1(.in(out),     .out(ss1[6:0]), .enable(1));*/
  logic [15:0] s;
  bcdaddsub4 bas4(.a(16'h0000), .b(16'h0001), .op(1), .s(s));
  ssdec s0(.in(s[3:0]),   .out(ss0[6:0]), .enable(1));
  ssdec s1(.in(s[7:4]),   .out(ss1[6:0]), .enable(1));
  ssdec s2(.in(s[11:8]),  .out(ss2[6:0]), .enable(1));
  ssdec s3(.in(s[15:12]), .out(ss3[6:0]), .enable(1));


endmodule
  
module ha(
  input a,
  input b,
  output s,
  output co
);
  
  assign s = (a ^ b);
  assign co = (a & b);
  
endmodule

module fa(
  input a,
  input b,
  input ci,
  output s,
  output co
);
  
  assign s = (a ^ b ^ ci);
  assign co = (((a ^ b) & ci) | (a & b));
  
endmodule

module fa4(
  input [3:0] a,
  input [3:0] b,
  input ci,
  output [3:0] s,
  output co
);

  logic [3:0] co_bit;
  fa fa3(.a(a[3]), .b(b[3]), .ci(co_bit[2]), .s(s[3]), .co(co));
  fa fa2(.a(a[2]), .b(b[2]), .ci(co_bit[1]), .s(s[2]), .co(co_bit[2]));
  fa fa1(.a(a[1]), .b(b[1]), .ci(co_bit[0]), .s(s[1]), .co(co_bit[1]));
  fa fa0(.a(a[0]), .b(b[0]), .ci(ci), .s(s[0]), .co(co_bit[0]));
  
endmodule

module fa8(
  input [7:0] a,
  input [7:0] b,
  input ci,
  output [7:0] s,
  output co
);

  logic [1:0] co_bit;
  fa4 fa41(.a(a[7:4]), .b(b[7:4]), .ci(co_bit[0]), .s(s[7:4]), .co(co_bit[1]));
  fa4 fa40(.a(a[3:0]), .b(b[3:0]), .ci(ci), .s(s[3:0]), .co(co_bit[0]));
  
endmodule

module addsub8(
  input [7:0] a,
  input [7:0] b,
  input op,
  output [7:0] s,
  output co
);

  logic [7:0] b_inverse;
  assign b_inverse = ~b;
  logic [7:0] b_final;
  always_comb begin
    if (op) begin
      b_final = b_inverse;
    end
    else begin
      b_final = b;
    end
  end
  fa8 add_sub(.a(a), .b(b_final), .ci(op), .s(s), .co(co));
  
endmodule

module bcdadd1(
  input [3:0] a,
  input [3:0] b, 
  input ci,
  output [3:0] s,
  output co
);
  
  logic [3:0] a_final;
  logic [3:0] b_final;
  logic co_temp;
  logic x_temp;
  fa4 f41(.a(a), .b(b), .ci(ci), .s(b_final), .co(co_temp));
  assign x_temp = (b_final[3] & b_final[2] | (b_final[3] & b_final[1]) | (co_temp));
  assign a_final = {1'b0, x_temp, x_temp, 1'b0};
  fa4 f42(.a(a_final), .b(b_final), .ci(1'b0), .s(s));
  assign co = x_temp;

endmodule

module bcdadd4(
  input [15:0] a,
  input [15:0] b, 
  input ci,
  output [15:0] s,
  output co
);

  logic [3:0] co_temp;
  bcdadd1 u4(.a(a[3:0]), .b(b[3:0]), .ci(ci), .co(co_temp[0]), .s(s[3:0]));
  bcdadd1 u3(.a(a[7:4]), .b(b[7:4]), .ci(co_temp[0]), .co(co_temp[1]), .s(s[7:4]));
  bcdadd1 u2(.a(a[11:8]), .b(b[11:8]), .ci(co_temp[1]), .co(co_temp[2]), .s(s[11:8]));
  bcdadd1 u1(.a(a[15:12]), .b(b[15:12]), .ci(co_temp[2]), .co(co), .s(s[15:12]));

endmodule

module bcd9comp1(
  input logic [3:0] in,
  output logic [3:0] out
);

  always_comb begin
    case (in)
    4'b1001: out = 4'b0000;
    4'b1000: out = 4'b1001;
    4'b0111: out = 4'b0010;
    4'b0110: out = 4'b0011;
    4'b0101: out = 4'b0100;
    4'b0100: out = 4'b0101;
    4'b0011: out = 4'b0110;
    4'b0010: out = 4'b0111;
    4'b0001: out = 4'b1000;
    4'b0000: out = 4'b1001;
    default: out = 4'b0000;
    endcase
  end

endmodule

module bcdaddsub4(
  input [15:0] a,
  input [15:0] b, 
  input op,
  output [15:0] s
);

  logic [15:0] a_comp;
  logic [15:0] b_comp;
  logic [15:0] b_final;
  bcd9comp1 bcmp4(.in(b[15:12]), .out(b_comp[15:12]));
  bcd9comp1 bcmp3(.in(b[11:8]), .out(b_comp[11:8]));
  bcd9comp1 bcmp2(.in(b[7:4]), .out(b_comp[7:4]));
  bcd9comp1 bcmp1(.in(b[3:0]), .out(b_comp[3:0]));
  always_comb begin
    if (op) begin
      b_final = b_comp;
    end
    else begin
      b_final = b;
    end
  end
  bcdadd4 ba1(.a(a), .b(b_final), .ci(op), .s(s));

endmodule

module ssdec(
  input logic [3:0] in,
  input logic enable,
  output [6:0] out
);

logic [6:0] SEG7 [15:0];

          assign SEG7[4'h0] = 7'b0111111;
          assign SEG7[4'h1] = 7'b0000110;
          assign SEG7[4'h2] = 7'b1011011;
          assign SEG7[4'h3] = 7'b1001111;
          assign SEG7[4'h4] = 7'b1100110;
          assign SEG7[4'h5] = 7'b1101101;
          assign SEG7[4'h6] = 7'b1111101;
          assign SEG7[4'h7] = 7'b0000111;
          assign SEG7[4'h8] = 7'b1111111;
          assign SEG7[4'h9] = 7'b1100111;
          assign SEG7[4'ha] = 7'b1110111;
          assign SEG7[4'hb] = 7'b1111100;
          assign SEG7[4'hc] = 7'b0111001;
          assign SEG7[4'hd] = 7'b1011110;
          assign SEG7[4'he] = 7'b1111001;
          assign SEG7[4'hf] = 7'b1110001;
          
          assign out = enable ? SEG7[in[3:0]] : 7'b0000000;

endmodule
  
