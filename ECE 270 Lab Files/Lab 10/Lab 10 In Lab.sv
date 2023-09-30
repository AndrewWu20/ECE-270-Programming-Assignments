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
  logic W_PRESSED;
  logic X_PRESSED;
  logic Y_PRESSED;
  assign W_PRESSED = pb[16];
  assign X_PRESSED = pb[17];
  assign Y_PRESSED = pb[18];
  logic hz4;
  clock_4hz clk4 (.clk(hz100), .rst(reset), .hz4(hz4));
  //assign green = hz4; // only for testing within prelab, comment out when starting the lab
  //logic [4:0] keycode;
  //logic strobe;
  //scankey sk1 (.clk(hz100), .rst(reset), .in(pb[19:0]), .strobe(strobe), .out(keycode));
  //assign right[0] = strobe; // only for testing within prelab, comment out when starting the lab
  //assign right[5:1] = keycode; // only for testing within prelab, comment out when starting the lab
  logic [4:0] keycode;
  logic strobe, is_empty;
  scankey sk (.clk(hz100), .rst(reset), .in(pb[19:0]), .out(keycode), .strobe(strobe));
  logic [31:0] cbo;
  logic [55:0] buf_ss;
  logic [31:0] passphrase;
  logic charbuf_en;

  // first, we define our state machine as a new type.
  typedef enum logic [SIZE-1:0] { STATE0=0, STATE1=1, STATE=2 ... } fsm_t;
  // then we use the new type to create an instance of a finite state machine.
  fsm_t fsm;
  
  always_ff @(posedge strobe, posedge reset) begin
    if (reset == 1'b1) begin
      dcl_fsm <= INIT;
      passphrase <= 32'b0;
      charbuf_en <= 1'b1;
    end
    else if (W_PRESSED == 1'b1) begin
      if (dcl_fsm == INIT) begin
        passphrase <= cbo;
        dcl_fsm <= SECURE;
      end
      else if (dcl_fsm == SECURE) begin
        charbuf_en <= 1'b0;
        if (passphrase == cbo) begin
          dcl_fsm <= OPEN;
        end
        else begin
          dcl_fsm <= ALARM;
        end
      end
    end
    else if (Y_PRESSED) begin
      if (dcl_fsm == OPEN) begin
        charbuf_en <= 1'b1;
        dcl_fsm <= SECURE;
      end
    end
  end
  
  assign blue = (dcl_fsm == SECURE);
  assign green = (dcl_fsm == OPEN);
  assign red = (hz4 & dcl_fsm == ALARM);
  
  charbuf cb (.clk(strobe), .rst(reset), .enable(1'b1), 
              .clr(W_PRESSED), .bksp(X_PRESSED),
              .is_ctrl(|pb[19:16]), .in_char(keycode[3:0]), 
              .is_empty(is_empty), .out(cbo));
  
  // display charbuf
  logic [55:0] buf_ss;
  ssdec s0 (.in(cbo[3:0]), .enable(1'b1), .out(buf_ss[6:0]));
  ssdec s1 (.in(cbo[7:4]), .enable(|cbo[31:4]), .out(buf_ss[13:7]));
  ssdec s2 (.in(cbo[11:8]), .enable(|cbo[31:8]), .out(buf_ss[20:14]));
  ssdec s3 (.in(cbo[15:12]), .enable(|cbo[31:12]), .out(buf_ss[27:21]));
  ssdec s4 (.in(cbo[19:16]), .enable(|cbo[31:16]), .out(buf_ss[34:28]));
  ssdec s5 (.in(cbo[23:20]), .enable(|cbo[31:20]), .out(buf_ss[41:35]));
  ssdec s6 (.in(cbo[27:24]), .enable(|cbo[31:24]), .out(buf_ss[48:42]));
  ssdec s7 (.in(cbo[31:28]), .enable(|cbo[31:28]), .out(buf_ss[55:49]));

  // for testing only - comment out the lines below when starting the lab.
  //assign red = is_empty;
  //assign {ss7[6:0], ss6[6:0], ss5[6:0], ss4[6:0], ss3[6:0], ss2[6:0], ss1[6:0], ss0[6:0]} = buf_ss;
  
endmodule

// Add more modules down here...
module clock_4hz(
  input logic clk,
  input logic rst,
  output reg hz4
);

  logic [6:0] counter;
  
  always @(posedge clk or posedge rst) begin
    if (rst) begin
      counter <=0;
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
    out[3] = |in[15:8] | in[18] | in[19];
    out[2] = |in[7:4] | |in[15:12];
    out[1] = in[2] | in[3] | in[6] | in[7] | in[10] | in[11] | in[14] | in[15];
    out[0] = in[1] | in[3] | in[5] | in[7] | in[9] | in[11] | in[13] | in[15] | in[17] | in[19];
  end
  assign strobe = strobe_new[1];
endmodule

module charbuf(
  input logic clk,
  input logic rst,
  input logic enable,
  input logic clr,
  input logic bksp,
  input logic is_ctrl,
  input logic [3:0] in_char,
  output logic is_empty,
  output logic [31:0] out
);

  always_ff @(posedge clk) begin
    if ((rst == 1'b1) | (clr == 1'b1)) begin
      out = 32'b0;
    end
    else if ((enable == 1'b1) & (bksp == 1'b1)) begin
      out = {4'b0000, out[31:4]};
    end
    else if ((enable == 1'b1) & (is_ctrl == 1'b0)) begin
      out = {out[27:0], in_char};
    end
  end
  assign is_empty = (out == 32'b0);
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