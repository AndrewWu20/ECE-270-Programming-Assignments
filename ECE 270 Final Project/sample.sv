module sample #(
  parameter SAMPLE_FILE = "../audio/kick.mem",
  parameter SAMPLE_LEN = 4000
  )
  (input logic clk, 
  input logic rst,
  input logic enable,
  output logic [7:0] out
);
 
  logic [7:0] audio_mem [4095:0];
  initial $readmemh(SAMPLE_FILE, audio_mem, 0, SAMPLE_LEN);
  logic [11:0] index;
  logic prev_en;
  always @ (posedge clk, posedge rst) begin
    if (rst) begin
        index <= 0;
        prev_en <= 0;
    end
    else begin
        prev_en <= enable;
        if (prev_en && enable) begin
           index <= (index >= SAMPLE_LEN) ? 0 : index + 1; 
        end
        else if (prev_en && ~enable) begin
            index <= 0;
        end
        else begin
            index <= index;
        end
    end
  end

  always_ff @ (posedge clk) begin
    out <= audio_mem[index];
  end
endmodule