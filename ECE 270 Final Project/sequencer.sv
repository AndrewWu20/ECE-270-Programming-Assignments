module sequencer(
  input logic clk,
  input logic rst,
  input logic srst,
  input logic go_left,
  input logic go_right,
  output logic [7:0] seq_out
);

  logic [7:0] seq;
  
  always @(posedge clk, posedge rst) begin
    if (rst) begin
      seq = 8'h80;
    end
    else if (srst) begin
      seq = 8'h80;
    end
    else begin
      if (go_right) begin
        seq = {seq[0], seq[7:1]};
      end
      else if (go_left) begin
        seq = {seq[6:0], seq[7]};
      end
      else begin
        seq = seq;
      end
    end
    seq_out <= seq;
  end
endmodule