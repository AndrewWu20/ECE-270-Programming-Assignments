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
  logic hz4;
  clock_4hz clk4 (.clk(hz100), .rst(reset), .hz4(hz4));
  assign green = hz4;
  
endmodule

// Add more modules down here...
module clock_4hz(
  input logic clk,
  input logic rst,
  output reg hz4
);

  logic [6:0] count;
  
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      count <=0;
      hz4 <= 0;
    end else begin
      count <= count + 1;
      if (count == 12) begin
        count <= 0;
        hz4 <= ~hz4;
      end
    end
  end
endmodule