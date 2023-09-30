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