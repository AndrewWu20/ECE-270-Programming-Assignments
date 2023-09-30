
module sequence_editor (
    input clk,
    input rst,
    input [1:0] mode,
    input [2:0] set_time_idx,
    input [3:0] tgl_play_smpl,
    output reg [3:0] seq_smpl_1,
    output reg [3:0] seq_smpl_2,
    output reg [3:0] seq_smpl_3,
    output reg [3:0] seq_smpl_4,
    output reg [3:0] seq_smpl_5,
    output reg [3:0] seq_smpl_6,
    output reg [3:0] seq_smpl_7,
    output reg [3:0] seq_smpl_8
);
  
  always @ (posedge clk, posedge rst) begin
    if (rst) begin
      seq_smpl_1 = 4'b0;
      seq_smpl_2 = 4'b0;
      seq_smpl_3 = 4'b0;
      seq_smpl_4 = 4'b0;
      seq_smpl_5 = 4'b0;
      seq_smpl_6 = 4'b0;
      seq_smpl_7 = 4'b0;
      seq_smpl_8 = 4'b0;
    end
    else begin
      if (mode == 2'd0) begin
        case (set_time_idx)
          0: seq_smpl_1 = (seq_smpl_1 ^ tgl_play_smpl);
          1: seq_smpl_2 = (seq_smpl_2 ^ tgl_play_smpl);
          2: seq_smpl_3 = (seq_smpl_3 ^ tgl_play_smpl);
          3: seq_smpl_4 = (seq_smpl_4 ^ tgl_play_smpl);
          4: seq_smpl_5 = (seq_smpl_5 ^ tgl_play_smpl);
          5: seq_smpl_6 = (seq_smpl_6 ^ tgl_play_smpl);
          6: seq_smpl_7 = (seq_smpl_7 ^ tgl_play_smpl);
          7: seq_smpl_8 = (seq_smpl_8 ^ tgl_play_smpl);
        endcase
      end
    end
  end
endmodule