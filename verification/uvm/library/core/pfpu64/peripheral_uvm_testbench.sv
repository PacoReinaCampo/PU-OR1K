// Adder RTL verified with UVM
`include "uvm_macros.svh"
import uvm_pkg::*;

`include "peripheral_uvm_agent.sv"
`include "peripheral_uvm_coverage.sv"
`include "peripheral_uvm_environment.sv"
`include "peripheral_uvm_interface.sv"
`include "peripheral_uvm_sequence.sv"
`include "peripheral_uvm_test.sv"

module peripheral_uvm_testbench;
  // Declaration of Local Fields
  bit clk_i;

  // Clock Generation
  always #1 clk_i = ~clk_i;

  initial begin
    clk_i = 0;
  end

  // Creatinng instance of interface, in order to connect DUT and testcase
  peripheral_uvm_interface vif (clk_i);

  // Peripheral_adder DUT Instantation
  pu_or1k_pfpu64_top #(
    .OPTION_OPERAND_WIDTH (64),
    .OPTION_FTOI_ROUNDING ("CPP")
  ) pfpu64_top (
    .clk            (vif.clk),
    .rst            (vif.rst),
    .flush_i        (vif.flush_i),
    .padv_decode_i  (vif.padv_decode_i),
    .padv_execute_i (vif.padv_execute_i),

    .op_fpu_i          (vif.op_fpu_i),
    .round_mode_i      (vif.round_mode_i),
    .rfa_i             (vif.rfa_i),
    .rfb_i             (vif.rfb_i),
    .fpu_result_o      (vif.fpu_result_o),
    .fpu_arith_valid_o (vif.fpu_arith_valid_o),
    .fpu_cmp_flag_o    (vif.fpu_cmp_flag_o),
    .fpu_cmp_valid_o   (vif.fpu_cmp_valid_o),
    .fpcsr_o           (vif.fpcsr_o)
  );

  // Starting the execution uvm phases
  initial begin
    run_test();
  end

  initial begin
    // Set the Interface instance Using Configuration Database
    uvm_config_db#(virtual peripheral_uvm_interface)::set(uvm_root::get(), "*", "intf", vif);

    // Enable wave dump
    $dumpfile("dump.vcd");
    $dumpvars(0);
  end

endmodule
