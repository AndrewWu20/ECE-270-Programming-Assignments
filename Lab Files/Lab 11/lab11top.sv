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
  logic hz4;
  clock_4hz clk4 (.clk(hz100), .rst(reset), .hz4(hz4));
  lunarlander #(16'h800, 16'h4500, 16'h0, 16'h5) ll (
        .hz100(hz100), .clk(hz4), .rst(reset), .in(pb[19:0]), .crash(red), .land(green),
        .ss({ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0})
      );
endmodule

module lunarlander #(
  parameter FUEL=16'h800,
  parameter ALTITUDE=16'h4500,
  parameter VELOCITY=16'h0,
  parameter THRUST=16'h5,
  parameter GRAVITY=16'h5
)(
  input logic hz100,
  input logic clk, 
  input logic rst,
  input logic [19:0] in,
  output logic [63:0] ss,
  output logic crash, 
  output logic land
);

  logic [15:0] alt;
  logic [15:0] new_alt; 
  logic [15:0] vel;
  logic [15:0] new_vel; 
  logic [15:0] fuel;
  logic [15:0] new_fuel; 
  logic [15:0] thrust;
  logic [15:0] manual_thrust;
  logic [15:0] vartemp;
  // Step 1.1
  // Use your bcdaddsub4 module to calculate landing parameters
  bcdaddsub4 newalt(.a(alt), .b(vel), .op(1'b0), .s(new_alt));
  bcdaddsub4 newvel1(.a(vel), .b(GRAVITY), .op(1'b1), .s(vartemp));
  bcdaddsub4 newvel2(.a(vartemp), .b(thrust), .op(1'b0), .s(new_vel));
  bcdaddsub4 newfuel (.a(fuel), .b(thrust), .op(1'b1), .s(new_fuel));
  // Step 1.2
  // Set up a modifiable thrust register
  logic [4:0] key;
  logic strobe;
  scankey setkey(.clk(hz100), .rst(rst), .in(in), .strobe(strobe), .out(key));
  always_ff @ (posedge strobe, posedge rst) begin
    if(rst) begin
      manual_thrust <= THRUST;
    end
    else if(key < 5'd10) begin
      manual_thrust <= {12'b0, key[3:0]};
    end
  end
  // Step 1.3
  // Set up the state machine logic for the lander
  typedef enum logic [2:0] {INIT=0, CALC=1, SET=2, CHK=3, HLT=4} flight_t;
  logic [2:0] flight;
  logic nland, ncrash;
  always_ff @ (posedge clk, posedge rst) begin
    if (rst) begin
      flight <= INIT;
      crash <= 0;
      land <= 0;
      ncrash <= 0;
      nland <= 0;
      fuel <= FUEL;
      alt <= ALTITUDE;
      vel <= VELOCITY;
      thrust <= THRUST;
    end
    else begin
      if (flight == INIT) begin
        flight <= CALC; 
      end
      else if (flight == CALC) begin  
        flight <= SET;  
      end
      else if (flight == SET) begin
        alt <= new_alt;
        vel <= new_vel;
        if (new_fuel[15]) begin 
          fuel <= 0;  
        end
        else begin 
          fuel <= new_fuel; 
        end
        if ((new_fuel[15]) | (fuel == 0)) begin 
          thrust <= 0;  
        end
        else begin
          thrust <= manual_thrust;
        end
        flight <= CHK;
      end
      else if (flight == CHK) begin
        if ((new_alt[15]) & (thrust <= 5) & (new_vel > 16'h9970)) begin 
          nland <= 1; 
          flight <= HLT;  
        end
        else begin
          if (new_alt[15]) begin  
            ncrash <= 1;  
            flight <= HLT;  
          end
          else begin
            flight <= CALC;
          end
        end
      end
      else if (flight == HLT) begin
        land <= nland;
        crash <= ncrash;
        alt <= 0;
        vel <= 0;
      end
    end
  end
  // Step 1.4
  // Set up the display mechanics
  logic [23:0] lookupmsg [3:0];
  logic [1:0] sel;
  logic [15:0] val;
  logic [63:0] val_disp;
  logic [63:0] neg_val_disp;
  logic [15:0] neg_val;
  always_comb begin
    lookupmsg[0] = 24'b011101110011100001111000;
    lookupmsg[1] = 24'b001111100111100100111000;
    lookupmsg[2] = 24'b011011110111011101101101;
    lookupmsg[3] = 24'b011110000111011001010000;
    case (sel)
    0: val = alt;
    1: val = vel;
    2: val = fuel;
    3: val = thrust;
    endcase
  end
  bcdaddsub4 negval(.a(0), .b(val), .op(1'b1), .s(neg_val));
  display_32_bit dispval(.in({16'b0, val}), .out(val_disp));
  display_32_bit negdispval(.in({16'b0, neg_val}), .out(neg_val_disp));
  always_comb begin
    if(val[15]) begin
      ss = {lookupmsg[sel], 8'b0, 8'b01000000, neg_val_disp[23:0]};
    end
    else begin
      ss = {lookupmsg[sel], 8'b0, val_disp[31:0]};
    end
  end
  always_ff @ (posedge strobe, posedge rst) begin
    if(rst) begin
      sel <= 0;
    end
    else begin
      if (key == 5'b10000) begin
        sel <= 3;
      end
      else if (key == 5'b10001) begin
        sel <= 2;
      end
      else if (key == 5'b10010) begin
        sel <= 1;
      end
      else if (key == 5'b10011) begin
        sel <= 0;
      end
    end
  end
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

  logic co_bit_1;
  logic co_bit_2;
  logic co_bit_3;
  fa fa0(.a(a[0]), .b(b[0]), .ci(ci), .s(s[0]), .co(co_bit_1));
  fa fa1(.a(a[1]), .b(b[1]), .ci(co_bit_1), .s(s[1]), .co(co_bit_2));
  fa fa2(.a(a[2]), .b(b[2]), .ci(co_bit_2), .s(s[2]), .co(co_bit_3));
  fa fa3(.a(a[3]), .b(b[3]), .ci(co_bit_3), .s(s[3]), .co(co));
  
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

  logic co_temp_1;
  logic co_temp_2;
  logic co_temp_3;
  bcdadd1 u4(.a(a[3:0]), .b(b[3:0]), .ci(ci), .co(co_temp_1), .s(s[3:0]));
  bcdadd1 u3(.a(a[7:4]), .b(b[7:4]), .ci(co_temp_1), .co(co_temp_2), .s(s[7:4]));
  bcdadd1 u2(.a(a[11:8]), .b(b[11:8]), .ci(co_temp_2), .co(co_temp_3), .s(s[11:8]));
  bcdadd1 u1(.a(a[15:12]), .b(b[15:12]), .ci(co_temp_3), .co(co), .s(s[15:12]));

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

module scankey(
  input logic clk,
  input logic rst,
  input logic [19:0] in,
  output logic [4:0] out,
  output logic strobe
);

  logic [1:0] strobe_new;
  logic strobe_input;
  assign strobe_input = |(in[19:0]);
  
  always_ff @(posedge clk) begin
    if (rst == 1'b1) begin
      strobe_new <= 2'b00;
    end
    else begin
      strobe_new <= (strobe_new << 1) | {1'b0, strobe_input};
    end
  end
  
  always_comb begin
    out[4] = |(in[19:16]);
    out[3] = |in[15:8];
    out[2] = |in[7:4] | |in[15:12];
    out[1] = in[2] | in[3] | in[6] | in[7] | in[10] | in[11] | in[14] | in[15] | in[18] | in[19];
    out[0] = in[1] | in[3] | in[5] | in[7] | in[9] | in[11] | in[13] | in[15] | in[17] | in[19];
  end
  assign strobe = strobe_new[1];
endmodule

module display_32_bit (input logic [31:0] in, output logic [63:0] out);
  ssdec s0(.in(in[3:0]), .enable(1'b1), .out(out[6:0]));
  ssdec s1(.in(in[7:4]), .enable(|in[31:4]), .out(out[14:8]));
  ssdec s2(.in(in[11:8]), .enable(|in[31:8]), .out(out[22:16]));
  ssdec s3(.in(in[15:12]), .enable(|in[31:12]), .out(out[30:24]));
  ssdec s4(.in(in[19:16]), .enable(|in[31:16]), .out(out[38:32]));
  ssdec s5(.in(in[23:20]), .enable(|in[31:20]), .out(out[46:40]));
  ssdec s6(.in(in[27:24]), .enable(|in[31:24]), .out(out[54:48]));
  ssdec s7(.in(in[31:28]), .enable(|in[31:28]), .out(out[62:56]));
endmodule

module clock_4hz(
  input logic clk,
  input logic rst,
  output reg hz4
);

  logic[6:0] counter;
  always @(posedge clk, posedge rst) begin  
    if(rst) begin
      counter <= 0;
      hz4 <= 0;
    end
    else begin
      counter <= counter + 1;
      if (counter == 12) begin
        counter <= 0;
        hz4 <= ~hz4;
      end
    end
  end
endmodule