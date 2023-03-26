`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:16:36 05/05/2020
// Design Name:   main
// Module Name:   D:/IIST Education/4th Semester/Digital & VLSI - Lab/Project/Tic-toc-toe/tic_toc_toe/main_tb.v
// Project Name:  tic_toc_toe
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module main_tb;

	// Inputs
	reg clock;   // clock of FPGA 50MHz
	reg reset;   // Global reset
	reg play;    // player-1 signal
	reg play2;   // player-2 signal
	reg [3:0] x_position; // position 

	// Outputs
	wire hsync;   // Horizontal sync
	wire vsync;   // Vertical Sync
	wire [2:0] red;  // RED
	wire [2:0] green;  //GREEN
	wire [1:0] blue;   //BLUE

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clock(clock), 
		.reset(reset), 
		.play(play), 
		.play2(play2), 
		.x_position(x_position), 
		.hsync(hsync), 
		.vsync(vsync), 
		.red(red), 
		.green(green), 
		.blue(blue)
	);

	initial begin
	clock=0;
	forever #10 clock=~clock;    // clock of 50 MHz => time period = 20 ns
	end

	initial begin
		// Initialize Inputs
		
		reset = 1;
		play = 0;
		play2 = 0;
		x_position = 1;

		// Waiting time = 18 ms > 16.667 ms
		#18000000;
      
		reset = 0;
		play = 1;
		play2 = 0;
		x_position = 1;


		// Waiting time = 18 ms > 16.667 ms
		#18000000;
      
		play = 0;
		play2 = 0;
		x_position = 5;

		// Waiting time = 18 ms > 16.667 ms
		#18000000;
			
		play = 0;
		play2 = 1;
		x_position = 5;

		// Waiting time = 18 ms > 16.667 ms
		#18000000;
      
		play = 1;
		play2 = 0;
		x_position = 2;

		// Waiting time = 18 ms > 16.667 ms
		#18000000;
      
		play = 0;
		play2 = 1;
		x_position = 7;

		// Waiting time = 18 ms > 16.667 ms
		#18000000;
      
		play = 1;
		play2 = 1;
		x_position = 8;

		// Waiting time = 18 ms > 16.667 ms
		#18000000;
      
		play = 1;
		play2 = 0;
		x_position = 3;

		// Waiting time = 18 ms > 16.667 ms
		#18000000;
      
		play = 0;
		play2 = 1;
		x_position = 9;

		#18000000;
      
		$finish;
		
	end
    
endmodule

