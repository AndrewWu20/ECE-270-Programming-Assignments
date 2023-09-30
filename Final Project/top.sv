module top (
  // I/O ports
  input  logic hz2m, hz100, reset,
  input  logic [20:0] pb,
  /* verilator lint_off UNOPTFLAT */
  output logic [7:0] left, right,
         ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0,
  output logic red, green, blue,

  // UART ports
  output logic [7:0] txdata,
  input  logic [7:0] rxdata,
  output logic txclk, rxclk,
  input  logic txready, rxready
);

  //Your code goes here...
 
  logic strobe;
  logic set_edit;
  logic set_play;
  logic set_raw;
  logic bpm_clk;
  logic prev_bpm_clk;
  logic sample_clk;
  logic [4:0] keycode;
  logic [1:0] mode;
  logic [7:0] edit_seq_out;
  logic [2:0] edit_seq_out_enc;
  logic [3:0] edit_play_smpl [7:0];
  logic [7:0] play_seq_out;
  logic [7:0] seq_out;
  logic [2:0] seq_sel;
  logic [3:0] raw_play_smpl;
  logic [3:0] play_smpl;
  logic [31:0] enable_ctr;
  logic [7:0] sample_data [4:0];
  logic [7:0] kick_clap_sum;
  logic [7:0] hihat_snare_sum;
  logic [7:0] total_signal;
  logic [5:0] final_signal;
 
  scankey sk1(
    .clk(hz2m),
    .rst(reset),
    .in(pb[19:0]),
    .out(keycode),
    .strobe(strobe)
  );
 
    assign set_play = keycode[1] & keycode[4] & ~keycode[2] & ~keycode[3] & ~keycode[0];
    assign set_raw = keycode[4] & ~keycode[0] & ~keycode[1] & ~keycode[2] & ~keycode[3];
    assign set_edit = keycode[0] & keycode[1] & keycode[4] & ~keycode[2] & ~keycode[3];

  controller c1(
    .clk(strobe),
    .rst(reset),
    .set_edit(set_edit),
    .set_play(set_play),
    .set_raw(set_raw),
    .mode(mode)
  );

    assign red = (mode == 2'b10);
    assign green = (mode == 2'b01);
    assign blue = (mode == 2'b00);

  sequencer sq1(
    .clk(strobe),
    .rst(reset),
    .srst(mode[1] | mode[0]),
    .go_left(pb[11]),
    .go_right(pb[8]),
    .seq_out(edit_seq_out)
  );

  prienc8to3 p1(
    .in(edit_seq_out),
    .out(edit_seq_out_enc)
  );
 
    assign {ss0[5], ss0[1], ss0[4], ss0[2]} = edit_play_smpl[0];
    assign {ss1[5], ss1[1], ss1[4], ss1[2]} = edit_play_smpl[1];
    assign {ss2[5], ss2[1], ss2[4], ss2[2]} = edit_play_smpl[2];
    assign {ss3[5], ss3[1], ss3[4], ss3[2]} = edit_play_smpl[3];
    assign {ss4[5], ss4[1], ss4[4], ss4[2]} = edit_play_smpl[4];
    assign {ss5[5], ss5[1], ss5[4], ss5[2]} = edit_play_smpl[5];
    assign {ss6[5], ss6[1], ss6[4], ss6[2]} = edit_play_smpl[6];
    assign {ss7[5], ss7[1], ss7[4], ss7[2]} = edit_play_smpl[7];
 
  sequence_editor se1(
    .clk(strobe),
    .rst(reset),
    .mode(mode),
    .set_time_idx(seq_sel),
    .tgl_play_smpl(pb[3:0]),
    .seq_smpl_1(edit_play_smpl[0]),
    .seq_smpl_2(edit_play_smpl[1]),
    .seq_smpl_3(edit_play_smpl[2]),
    .seq_smpl_4(edit_play_smpl[3]),
    .seq_smpl_5(edit_play_smpl[4]),
    .seq_smpl_6(edit_play_smpl[5]),
    .seq_smpl_7(edit_play_smpl[6]),
    .seq_smpl_8(edit_play_smpl[7])
  );

    assign right[1] = seq_out[0];
    assign right[3] = seq_out[1];
    assign right[5] = seq_out[2];
    assign right[7] = seq_out[3];
    assign left[1] = seq_out[4];
    assign left[3] = seq_out[5];
    assign left[5] = seq_out[6];
    assign left[7] = seq_out[7];
 
  clkdiv #(20) clk1(
    .clk(hz2m),
    .rst(reset),
    .lim(20'd499999),
    .hzX(bpm_clk)
  );
 
  sequencer sq2(
    .clk(bpm_clk),
    .rst(reset),
    .srst(~mode[0]),
    .go_left(0),
    .go_right(1),
    .seq_out(play_seq_out)
  );
             
  always_ff @ (posedge hz2m, posedge reset) begin
    if (reset) begin
      seq_out <= 0;
    end
    else if (mode == 2'b0) begin
      seq_out <= edit_seq_out;
    end
    else if (mode == 2'b1) begin
      seq_out <= play_seq_out;
    end
  end
 
  prienc8to3 p2(
    .in(seq_out),
    .out(seq_sel)
  );
 
  assign raw_play_smpl[0] = pb[0];
  assign raw_play_smpl[1] = pb[1];
  assign raw_play_smpl[2] = pb[2];
  assign raw_play_smpl[3] = pb[3];

  always_ff @ (posedge hz2m, posedge reset) begin
    if (reset) begin
      play_smpl <= 4'b0;
    end
    else if (mode == 2'b0) begin
      play_smpl <= 4'b0;
    end
    else if (mode == 2'b1) begin
      play_smpl <= ((enable_ctr <= 900000) ? edit_play_smpl[seq_sel] : 4'b0) | raw_play_smpl;
    end
    else if (mode == 2'b10) begin
      play_smpl <= raw_play_smpl;
    end
  end
 
  clkdiv clk2(
    .clk(hz2m),
    .rst(reset),
    .lim(8'd127),
    .hzX(sample_clk)
  );
 
  sample #(
    .SAMPLE_FILE("../audio/kick.mem"),
    .SAMPLE_LEN(4000)
  ) sample_kick (
    .clk(sample_clk),
    .rst(reset),
    .enable(play_smpl[3]),
    .out(sample_data[0])
  );
 
  sample #(
    .SAMPLE_FILE("../audio/clap.mem"),
    .SAMPLE_LEN(4000)
  ) sample_clap (
    .clk(sample_clk),
    .rst(reset),
    .enable(play_smpl[2]),
    .out(sample_data[1])
  );
 
  sample #(
    .SAMPLE_FILE("../audio/hihat.mem"),
    .SAMPLE_LEN(4000)
  ) sample_hihat (
    .clk(sample_clk),
    .rst(reset),
    .enable(play_smpl[1]),
    .out(sample_data[2])
  );
 
  sample #(
    .SAMPLE_FILE("../audio/snare.mem"),
    .SAMPLE_LEN(4000)
  ) sample_snare (
    .clk(sample_clk),
    .rst(reset),
    .enable(play_smpl[0]),
    .out(sample_data[3])
  );
 
  always_comb begin
    kick_clap_sum = sample_data[0] + sample_data[1];
    hihat_snare_sum = sample_data[2] + sample_data[3];
    if ((sample_data[0][7] == 1'b1) & (sample_data[1][7] == 1'b1) & (kick_clap_sum[7] == 1'b0)) begin
      kick_clap_sum = -128;
    end
    else if ((sample_data[0][7] == 1'b0) & (sample_data[1][7] == 1'b0) & (kick_clap_sum[7] == 1'b1)) begin
      kick_clap_sum = 127;
    end
    if ((sample_data[2][7] == 1'b1) & (sample_data[3][7] == 1'b1) & (hihat_snare_sum[7] == 1'b0)) begin
      hihat_snare_sum = -128;
    end
    else if ((sample_data[2][7] == 1'b0) & (sample_data[3][7] == 1'b0) & (hihat_snare_sum[7] == 1'b1)) begin
      hihat_snare_sum = 127;
    end
    total_signal = kick_clap_sum + hihat_snare_sum;
    if ((kick_clap_sum[7] == 1'b1) & (hihat_snare_sum[7] == 1'b1) & (total_signal[7] == 1'b0)) begin
      total_signal = -128;
    end
    else if ((kick_clap_sum[7] == 1'b0) & (hihat_snare_sum[7] == 1'b0) & (total_signal[7] == 1'b1)) begin
      total_signal = 127;
    end    
    total_signal = total_signal ^ 8'd128;
    total_signal = total_signal >> 2;
  end
  assign final_signal = total_signal[5:0];

  pwm #(64) pwm1(
    .clk(hz2m),
    .rst(reset),
    .enable(1'b1),
    .counter(),
    .duty_cycle(final_signal),
    .pwm_out(right[0])
  );

  always_ff @(posedge hz2m, posedge reset) begin
    if (reset) begin
        prev_bpm_clk <= 0;
        enable_ctr <= 0;
    end
    // otherwise, if we're in PLAY mode
    else if (mode == 2'b1) begin
        // if we're on a rising edge of bpm_clk, indicating 
        // the beginning of the beat, reset the counter.
        if (~prev_bpm_clk && bpm_clk) begin
          enable_ctr <= 0;
          prev_bpm_clk <= 1;
        end
        // if we're on a falling edge of bpm_clk, indicating 
        // the middle of the beat, set the counter to half its value
        // to correct for drift.
        else if (prev_bpm_clk && ~bpm_clk) begin
            enable_ctr <= 499999;
            prev_bpm_clk <= 0;
        end
        // otherwise count to 1 million, and reset to 0 when that value is reached.
        else begin
            enable_ctr <= (enable_ctr == 999999) ? 0 : enable_ctr + 1;
        end
    end
    // reset the counter so we start on time again.
    else begin
        prev_bpm_clk <= 0;
        enable_ctr <= 0;
    end

    // in the portion of code where you assign play_smpl on a clock edge, add this:
    //play_smpl <= ((enable_ctr <= 900000) ? edit_play_smpl[seq_sel] : 4'b0) | raw_play_smpl;
  end
 
endmodule

