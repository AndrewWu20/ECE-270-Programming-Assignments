module pwm #(parameter int CTRVAL = 256, parameter int CTRLEN = $clog2(CTRVAL))(
    input logic clk,
    input logic rst,
    input logic enable,
    input logic [CTRLEN-1:0] duty_cycle,
    output logic [CTRLEN-1:0] counter,
    output logic pwm_out
);
       
  logic [CTRLEN-1:0] limit;  
  always @ (posedge clk, posedge rst) begin
    if (rst) begin
        counter = 0;
    end
    else if(enable) begin
        counter += 1;
    end
  end
  always_comb begin
    if (counter <= duty_cycle) begin
      pwm_out = 1;
    end
    else begin
      pwm_out = 0;
    end
    if (duty_cycle == '1) begin
        pwm_out = 1;
    end
    else if (duty_cycle == 0) begin
        pwm_out = 0;
    end
  end
endmodule