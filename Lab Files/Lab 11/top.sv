`default_nettype none

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

  // Step 1.5
  // Instantiate the Lunar Lander and set up a slower clock

endmodule

module lunarlander #(
  parameter FUEL=16'h800,
  parameter ALTITUDE=16'h4500,
  parameter VELOCITY=16'h0,
  parameter THRUST=16'h5,
  parameter GRAVITY=16'h5
)(
  input logic hz100, clk, rst,
  input logic [19:0] in,
  output logic [63:0] ss,
  output logic crash, land
);

  // Step 1.1
  // Use your bcdaddsub4 module to calculate landing parameters
  
  // Step 1.2
  // Set up a modifiable thrust register
  
  // Step 1.3
  // Set up the state machine logic for the lander
  
  // Step 1.4
  // Set up the display mechanics

endmodule
