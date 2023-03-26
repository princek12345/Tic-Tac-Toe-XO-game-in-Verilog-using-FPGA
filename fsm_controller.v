`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:39:58 04/27/2020 
// Design Name: 
// Module Name:    fsm_controller 
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
module fsm_controller(
   input clock,// clock of the circuit 
     input reset,// reset 
     input play, // player plays 
     input play2,// PLAYER2 plays 
     input illegal_move,// illegal move detected 
     input no_space, // no_space detected 
     input win, // winner detected 
     output reg player2_play, // enable PLAYER2 to play 
     output reg player_play // enable player to play 
      );

// FSM States 
parameter IDLE=2'b00;
parameter PLAYER=2'b01;
parameter PLAYER2=2'b10;
parameter GAME_DONE=2'b11;

reg[1:0] current_state, next_state;

// current state registers 
always @(posedge clock or posedge reset) 
begin 
 if(reset)
  current_state <= IDLE;
 else 
  current_state <= next_state;
end 
 // next state 
always @(*)
 begin
 case(current_state)
 IDLE: begin 
  if(reset==1'b0 && play == 1'b1)
   next_state <= PLAYER; // player to play 
  else 
   next_state <= IDLE;
  player_play <= 1'b0;
  player2_play <= 1'b0;
 end 
 PLAYER:begin 
  player_play <= 1'b1;
  player2_play <= 1'b0;
  if(illegal_move==1'b0)
   next_state <= PLAYER2; // PLAYER2 to play 
  else 
   next_state <= IDLE;
 end 
 PLAYER2:begin 
  player_play <= 1'b0;
  if(play2==1'b0) begin 
   next_state <= PLAYER2;
   player2_play <= 1'b0;
  end
  else if(win==1'b0 && no_space == 1'b0)
  begin 
   next_state <= IDLE;
   player2_play <= 1'b1;// PLAYER2 to play when play2=1
  end 
  else if(no_space == 1 || win ==1'b1)
  begin 
   next_state <= GAME_DONE; // game done 
   player2_play <= 1'b1;// PLAYER2 to play when play2=1
  end  
 end 
 GAME_DONE:begin // game done
  player_play <= 1'b0;
  player2_play <= 1'b0; 
  if(reset==1'b1) 
   next_state <= IDLE;// reset the game to IDLE 
  else 
   next_state <= GAME_DONE;  
 end 
 default: next_state <= IDLE; 
 endcase
 end
endmodule 
