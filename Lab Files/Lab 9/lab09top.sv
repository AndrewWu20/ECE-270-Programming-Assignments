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

  // Your code goes here...
  logic flash;
  logic hz1;
  logic [7:0] ctr;

  //assign blue = flash;

  always_ff @ (posedge hz100, posedge reset) begin
    if (reset == 1'b1) begin 
      hz1 <= 1'b0;
    end 
    else begin 
      hz1 <= (ctr == 8'd49);
    end
  end

  always_ff @ (posedge hz1, posedge reset) begin 
    if(reset == 1'b1) begin 
      flash <= 1'b0;
    end 
    else begin 
      flash <= ~flash;
    end
  end

  count8du c8_1(.CLK(hz100), .RST(reset), .DIR(1'b0), .MAX(8'd49), .E(1'b1), .Q(ctr[7:0]));
  hangman hg (.hz100(hz100), .reset(pb[19]), .hex(pb[15:10]), .ctrdisp(ss7[6:0]), .letterdisp({ss3[6:0], ss2[6:0], ss1[6:0], ss0[6:0]}), .win(green), .lose(red), .flash(flash));

endmodule

// Add more modules down here...

module count8du(
  input logic CLK,
  input logic RST,
  input logic DIR,
  input logic [7:0] MAX,
  input logic E,
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
    if (E == 1'b0) begin
      next_Q = Q;
    end
    else begin
      if (DIR == 0) begin
        if (Q == 8'b00000000) begin
          next_Q = MAX;
        end
        else begin
          next_Q[7] = Q[7] ^ &(~Q[6:0]);
          next_Q[6] = Q[6] ^ &(~Q[5:0]);
          next_Q[5] = Q[5] ^ &(~Q[4:0]);
          next_Q[4] = Q[4] ^ &(~Q[3:0]);
          next_Q[3] = Q[3] ^ &(~Q[2:0]);
          next_Q[2] = Q[2] ^ &(~Q[1:0]);
          next_Q[1] = Q[1] ^ ~Q[0];
          next_Q[0] = ~Q[0];
        end
      end
      else begin
        if (Q == MAX) begin
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
  end
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