`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:17:39 04/11/2020
// Design Name:   clk_d
// Module Name:   D:/IIST Education/4th Semester/Digital & VLSI - Lab/VLSI/prince_nishant/trial projec/clk_divider/clk_d_tb.v
// Project Name:  clk_divider
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk_d
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clk_d_tb;

	// Inputs
	reg clk_i;

	// Outputs
	wire clk_o;

	// Instantiate the Unit Under Test (UUT)
	clk_devider uut (
		.clk_i(clk_i), 
		.clk_o(clk_o)
	);

	initial begin
		// Initialize Inputs
		clk_i = 0;

		// Wait 100 ns for global reset to finish
		forever #10 clk_i=~clk_i;
		// Add stimulus here

	end
      
endmodule

