// Fill out the module below.
`timescale 1ms/10us
module tb_charbuf();

  // Variables to be passed in as inputs and outputs to DUT
  logic clk, rst, enable, clr, bksp, is_ctrl;
  logic [3:0] in_char;
  logic is_empty;
  logic [31:0] out;

  // Instantiate design-under-test
  charbuf dut (.clk(clk), .rst(rst), .enable(enable), .clr(clr), .bksp(bksp), 
               .is_ctrl(is_ctrl), .in_char(in_char), .is_empty(is_empty), 
               .out(out));

  // TODO: Write task check_outputs
  string message = "";
  logic [383:0] msg;
  bit copy_msg = 1;
  integer passed, total;
  logic [31:0] expected_out;
  logic expected_is_empty;

  // TODO: Step 2
  task check_outputs;
    if (copy_msg) begin // If you want to copy the message
      message = msg;
    end
    else begin  // Otherwise
      msg = str_to_logic(message);
    end
    if(out == expected_out) begin
      passed = passed + 1;
      $display("PASS: %s --- got out = 32'h%x, expected out = 32'h%x", message, out, expected_out);
    end
    else begin
      $display("FAIL: %s --- got out = 32'h%x, expected out = 32'h%x", message, out, expected_out);
    end
    if(is_empty == expected_is_empty) begin
      passed = passed + 1;
      $display("PASS: %s --- got is_empty = 1'b%1d, expected is_empty = 1'b%1d", message, is_empty, expected_is_empty);
    end
    else begin
      $display("FAIL: %s --- got is_empty = 1'b%1d, expected is_empty = 1'b%1d", message, is_empty, expected_is_empty);
    end
    total = total + 2;
  endtask

  function logic [383:0] str_to_logic (input string msg);
    for (integer i = 0; i < 48; i++)
      str_to_logic[i*8+:8] = msg[47-i];
    return str_to_logic;
  endfunction

  // Step 3
  initial begin
    // TODO: Initialize all inputs to zero
    clk = 0;
    rst = 0;
    enable = 0;
    clr = 0;
    bksp = 0;
    is_ctrl = 0;
    in_char = 0;
  end
  always begin
    // TODO: toggle clk every 5ns
    clk = #5 ~clk;
  end

  // Step 4: driver code
  initial begin
    $dumpfile("tb_charbuf.vcd");
    $dumpvars(0, tb_charbuf);
    
    // TODO: initialize all variables
    passed = 0;
    total = 0;
    expected_out = 32'b0;
    expected_is_empty = 1;
    // TODO: step 3.1 - assert rst for 1 clock cycle
    msg = "Power-on reset test before clock edge";
    rst = 1; #4;
    check_outputs;
    #6;
    
    // TODO: step 3.2 - deassert rst for 1 clock cycle
    msg = "Post-reset test";
    rst = 0; #10;
    check_outputs;    
    
    // TODO: step 3.3 - test clr
    msg = "Synchronous clr reset test";
    clr = 1; #4;
    check_outputs;
    #6;
    check_outputs;
    
    // TODO: step 3.4 - attempt to add a character to the buffer with no enable
    msg = "Clock in 5, no enable";
    clr = 0; #4;
    in_char = 4'd5; #6;
    check_outputs;
    
    // TODO: step 3.5 - attempt to add all possible characters to the buffer
    // buffer with enable
    copy_msg = 0;
    enable = 1;
    for (integer i = 1; i < 16; i++) begin
      expected_out = ({expected_out[27:0], 4'b0} | {28'b0, 4'(i)});
      expected_is_empty = !(|(expected_out));
      message = $sformatf("Clock in %0d, enabled", i);
      in_char = 4'(i); #6;
      check_outputs; #4;
    end
    copy_msg = 1;
    
    // TODO: step 3.6 - test bksp
    msg = "Backspace with enable";
    expected_out = {4'b0, expected_out[31:4]};
    expected_is_empty = !(|(expected_out));
    bksp = 1; #10;
    check_outputs;
    
    // TODO: step 3.7 - test bksp no enable
    msg = "Backspace with no enable";
    enable = 0; #10;
    check_outputs;
    
    // TODO: step 3.8 - test clr again
    msg = "Post-operation synchronous clr reset test";
    clr = 1;
    expected_out = 0;
    expected_is_empty = 1; #10;
    check_outputs;
    
    // TODO: step 3.9 - test inserting a control character
    msg = "is_ctrl=1, insert char";
    is_ctrl = 1;
    in_char = 4'd5; #10;
    check_outputs;
    
    // TODO: step 3.10 - final async reset test
    msg = "Final reset test";
    rst = 1; #10;
    check_outputs;
    
    // wait some more time so that the full reset can be seen.
    #50;
    $display("charbuf score: %0d/%0d tests", passed, total);
    $finish(passed != total);
  end

endmodule
