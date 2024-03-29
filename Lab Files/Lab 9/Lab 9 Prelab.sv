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
  count8du c8_1(.CLK(hz100), .RST(reset), .Q(right[7:0]));
  
endmodule

// Add more modules down here...
module count8du(
  input logic CLK,
  input logic RST,
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
    if (Q == 8'b01100011) begin
      next_Q = 8'b00000000;
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
endmodule