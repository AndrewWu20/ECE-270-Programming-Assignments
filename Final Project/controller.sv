module controller(
  input clk,
  input rst,
  input set_edit,
  input set_play,
  input set_raw,
  output logic [1:0] mode
);

  typedef enum logic [1:0] { EDIT=2'd0, PLAY=2'd1, RAW=2'd2 } sysmode_t;
  always @(posedge clk, posedge rst) begin
    if (rst) begin
      mode <= EDIT;
    end
    else if (set_edit == 1'b1) begin
      mode <= EDIT;
    end
    else if (set_play == 1'b1) begin
      mode <= PLAY;
    end
    else if (set_raw == 1'b1) begin
      mode <= RAW;
    end
  end
endmodule
