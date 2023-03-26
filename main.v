`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:48:14 04/27/2020 
// Design Name: 
// Module Name:    main 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module main(input clock, // clock of the game from FPGA
     input reset, // reset button to reset the game 
     input play, // play button to enable player to play 
     input play2, // play2 button to enable PLAYER2 to play 
     input [3:0] x_position, 
     // positions to play 
    
     output hsync,   // Horizontal synchronous
     output vsync,   // Vertical synchronous
     output  [2:0] red,  // RED 
     output  [2:0] green,  // GREEN
     output  [1:0] blue    // BLUE
  );

wire [3:0] player2_position,player_position;   // individual positions of both players

wire [1:0] pos1,pos2,pos3,
     pos4,pos5,pos6,pos7,pos8,pos9;  //  position registers
     // 01: Player-1
     // 10: Player-2

wire[1:0]who;   //  winner player number 


 wire [15:0] PL2_en;// Player2 decoded signals 
 wire [15:0] PL_en; // Player decoded signals 
 wire illegal_move; //  illegal move detecter signal 
 wire win; // winner signal 
 wire player2_play; // PLAYER2 enabling signal 
 wire player_play; // player enabling signal 
 wire no_space; // no space signal 
 
wire clk2;  // synchronous clock 

// FOR VGA controller
 wire [15:0] H_counter;  // Horizontal counter
wire [15:0] V_counter;   // Vertical Counter
wire v_signal;  // Vertical counter enable signal
 
clk_divider cd1(clock,clk2);  // clk2 devider to get 25MHz from FPGA clock

 // individual position identifier
 P_position P1(play,play2,x_position,player_position,player2_position);   
 
 // position registers
 position_registers position_reg_unit(clk2,reset,illegal_move,PL2_en[9:1],PL_en[9:1],pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9);
 
 // winner detector 
 winner_detector win_detect_unit(pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9,win,who);
 
 // position decoder for PLAYER2 
 position_decoder pd1(player2_position,player2_play,PL2_en);
 
 // position decoder for player  
 position_decoder pd2(player_position,player_play,PL_en); 
 
 // illegal move detector
  illegal_move_detector imd_unit(play,play2,pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9, PL2_en[9:1], PL_en[9:1], illegal_move);
 
 // no space detector 
 nospace_detector nsd_unit(pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9,no_space); 
 
 
 // FSM controller
 fsm_controller tic_tac_toe_controller(
     clk2,// clock of the circuit 
     reset,// reset 
     play, // player plays 
     play2,// PLAYER2 plays 
     illegal_move,// illegal move detected 
     no_space, // no_space detected 
     win, // winner detected 
     player2_play, // enable PLAYER2 to play 
     player_play // enable player to play 
     );
		  

// VGA Controller Units

//Horizontal counter
H_count hc(clk2,v_signal,H_counter);

//Vertical Counter
V_count vc(clk2,v_signal,V_counter);

//VGA controller main unit
VGA_colour VGA1({pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9},illegal_move,no_space,who,H_counter,V_counter,hsync,vsync,red,green,blue);

endmodule
