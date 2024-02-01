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
    
  endtask

  function logic [383:0] str_to_logic (input string msg);
    for (integer i = 0; i < 48; i++)
      str_to_logic[i*8+:8] = msg[47-i];
    return str_to_logic;
  endfunction

  // Step 3
  initial begin
    // TODO: Initialize all inputs to zero
  end
  always begin
    // TODO: toggle clk every 5ns
  end

  // Step 4: driver code
  initial begin
    $dumpfile("tb_charbuf.vcd");
    $dumpvars(0, tb_charbuf);
    
    // TODO: initialize all variables
    
    // TODO: step 3.1 - assert rst for 1 clock cycle
    msg = "Power-on reset test before clock edge";
    rst = 1; #4;
    check_outputs;
    #6;
    
    // TODO: step 3.2 - deassert rst for 1 clock cycle
    msg = "Post-reset test";
    
    
    // TODO: step 3.3 - test clr
    msg = "Synchronous clr reset test";
    
    
    // TODO: step 3.4 - attempt to add a character to the buffer with no enable
    msg = "Clock in 5, no enable";
    
    
    // TODO: step 3.5 - attempt to add all possible characters to the buffer
    // buffer with enable
    copy_msg = 0;

    // start here
    
    copy_msg = 1;
    
    // TODO: step 3.6 - test bksp
    msg = "Backspace with enable";
    
    
    // TODO: step 3.7 - test bksp no enable
    msg = "Backspace with no enable";
    
    
    // TODO: step 3.8 - test clr again
    msg = "Post-operation synchronous clr reset test";
    
    
    // TODO: step 3.9 - test inserting a control character
    msg = "is_ctrl=1, insert char";
    
    
    // TODO: step 3.10 - final async reset test
    msg = "Final reset test";
    
    // wait some more time so that the full reset can be seen.
    #50;
    $display("charbuf score: %0d/%0d tests", passed, total);
    $finish(passed != total);
  end

endmodule
