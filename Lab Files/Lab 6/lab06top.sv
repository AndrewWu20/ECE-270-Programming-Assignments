`default_nettype none
// Empty top module

module top (
  // I/O ports
  input  logic hz100, reset,
  input  logic [20:0] pb,
  output logic [7:0] left, right,
         ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0,
  output logic red, green, blue,

  // Ports from/to UART
  output logic [7:0] txdata,
  input  logic [7:0] rxdata,
  output logic txclk, rxclk,
  input  logic txready, rxready
);

  // Your code goes here...
  prienc16to4 u1(.in(pb[15:0]), .out(right[3:0]), .strobe(green));  
  ssdec sd(.in(right[3:0]), .enable(green), .out(ss0[6:0]));
  count8du c8_1(.CLK(hz100), .RST(reset), .DIR(1'b0), .Q(right[7:0]));
  
endmodule

// Add more modules down here...
module prienc16to4(
  input logic [15:0] in,
  output logic [3:0] out,
  output logic strobe
);      

assign {out, strobe} = in[15] == 1 ? 5'b11111:
                      in[14] == 1 ? 5'b11101:
                      in[13] == 1 ? 5'b11011:
                      in[12] == 1 ? 5'b11001:
                      in[11] == 1 ? 5'b10111:
                      in[10] == 1 ? 5'b10101:
                      in[9] == 1 ? 5'b10011:
                      in[8] == 1 ? 5'b10001:
                      in[7] == 1 ? 5'b01111:
                      in[6] == 1 ? 5'b01101:
                      in[5] == 1 ? 5'b01011:
                      in[4] == 1 ? 5'b01001:
                      in[3] == 1 ? 5'b00111:
                      in[2] == 1 ? 5'b00101:
                      in[1] == 1 ? 5'b00011:
                      in[0] == 1 ? 5'b00001:
                           5'b00000;
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

module count8du(
  input logic CLK,
  input logic RST,
  input logic DIR,
  output logic [7:0] Q
);

  logic [7:0] next_Q;
  
  always_ff @ (posedge CLK, posedge RST) begin
    if (RST == 1'b1)
      Q <= 8'b0;
    else
      Q <= next_Q;
  end
  
  always_comb begin
    if (DIR == 0) begin
      if (Q == 8'b00000000) begin
        next_Q = 8'd99;
      end
      else begin
        next_Q[7] = Q[7] ^ (&~Q[6:0]);
        next_Q[6] = Q[6] ^ (&~Q[5:0]);
        next_Q[5] = Q[5] ^ (&~Q[4:0]);
        next_Q[4] = Q[4] ^ (&~Q[3:0]);
        next_Q[3] = Q[3] ^ (&~Q[2:0]);
        next_Q[2] = Q[2] ^ (&~Q[1:0]);
        next_Q[1] = Q[1] ^ ~Q[0];
        next_Q[0] = ~Q[0];
      end
    end
    else begin
      if (Q == 8'd99) begin
        next_Q = 0;
      end
      else begin
        next_Q[7] = Q[7] ^ (&Q[6:0]);
        next_Q[6] = Q[6] ^ (&Q[5:0]);
        next_Q[5] = Q[5] ^ (&Q[4:0]);
        next_Q[4] = Q[4] ^ (&Q[3:0]);
        next_Q[3] = Q[3] ^ (&Q[2:0]);
        next_Q[2] = Q[2] ^ (&Q[1:0]);
        next_Q[1] = Q[1] ^ Q[0];
        next_Q[0] = ~Q[0];
      end
    end
  end
endmodule