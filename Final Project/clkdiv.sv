module clkdiv #(parameter BITLEN = 8)(
  input logic clk,
  input logic rst,
  input logic [BITLEN-1:0] lim,
  output logic hzX
);

  logic [BITLEN-1:0] count;
  always @ (posedge clk, posedge rst) begin
    if (rst) begin
      hzX <= 0;
      count <= 0;
    end
    else begin
      count <= count + 1;
      if(count == lim) begin
        hzX <= ~hzX;
        count <= 0;
      end
    end
  end
endmodule