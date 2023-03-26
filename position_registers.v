`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:38:04 04/27/2020 
// Design Name: 
// Module Name:    position_registers 
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
module position_registers(
   input clock, // clock of the game 
      input reset, // reset the game 
      input illegal_move, // need to stop when an illegal move is detected 
      input [9:1] PL2_en, // Player2 enable signals 
      input [9:1] PL_en, // Player enable signals 
      output reg[1:0] pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9// positions stored
    );

// Position 1 
 always @(posedge clock or posedge reset)   // Active high logic for reset
 begin
  if(reset) 
   pos1 <= 2'b00;
  else begin
   if(illegal_move==1'b1)
    pos1 <= pos1;// keep previous position
   else if(PL2_en[1]==1'b1)
    pos1 <= 2'b10; // store player2 data 
   else if (PL_en[1]==1'b1)
    pos1 <= 2'b01;// store player data 
   else 
    pos1 <= pos1;// keep previous position
  end 
 end 
 // Position 2 
 always @(posedge clock or posedge reset)    // Active high logic for reset
 begin
  if(reset) 
   pos2 <= 2'b00;
  else begin
   if(illegal_move==1'b1)
    pos2 <= pos2;// keep previous position
   else if(PL2_en[2]==1'b1)
    pos2 <= 2'b10; // store player2 data 
   else if (PL_en[2]==1'b1)
    pos2 <= 2'b01;// store player data 
   else 
    pos2 <= pos2;// keep previous position
  end 
 end 
// Position 3 
 always @(posedge clock or posedge reset)       // Active high logic for reset
 begin
  if(reset) 
   pos3 <= 2'b00;
  else begin
   if(illegal_move==1'b1)
    pos3 <= pos3;// keep previous position
   else if(PL2_en[3]==1'b1)
    pos3 <= 2'b10; // store player2 data 
   else if (PL_en[3]==1'b1)
    pos3 <= 2'b01;// store player data 
   else 
    pos3 <= pos3;// keep previous position
  end 
 end  
 // Position 4 
 always @(posedge clock or posedge reset)       // Active high logic for reset
 begin
  if(reset) 
   pos4 <= 2'b00;
  else begin
   if(illegal_move==1'b1)
    pos4 <= pos4;// keep previous position
   else if(PL2_en[4]==1'b1)
    pos4 <= 2'b10; // store player2 data 
   else if (PL_en[4]==1'b1)
    pos4 <= 2'b01;// store player data 
   else 
    pos4 <= pos4;// keep previous position
  end 
 end 
 // Position 5 
 always @(posedge clock or posedge reset)      // Active high logic for reset
 begin 
  if(reset) 
   pos5 <= 2'b00;
  else begin
   if(illegal_move==1'b1)
    pos5 <= pos5;// keep previous position
   else if(PL2_en[5]==1'b1)
    pos5 <= 2'b10; // store player2 data 
   else if (PL_en[5]==1'b1)
    pos5 <= 2'b01;// store player data 
   else 
    pos5 <= pos5;// keep previous position
  end 
 end 
 // Position 6 
 always @(posedge clock or posedge reset)        // Active high logic for reset
 begin
  if(reset) 
   pos6 <= 2'b00;
  else begin
   if(illegal_move==1'b1)
    pos6 <= pos6;// keep previous position
   else if(PL2_en[6]==1'b1)
    pos6 <= 2'b10; // store player2 data 
   else if (PL_en[6]==1'b1)
    pos6 <= 2'b01;// store player data 
   else 
    pos6 <= pos6;// keep previous position
  end 
 end 
 // Position 7 
 always @(posedge clock or posedge reset)       // Active high logic for reset
 begin
  if(reset) 
   pos7 <= 2'b00;
  else begin
   if(illegal_move==1'b1)
    pos7 <= pos7;// keep previous position
   else if(PL2_en[7]==1'b1)
    pos7 <= 2'b10; // store player2 data 
   else if (PL_en[7]==1'b1)
    pos7 <= 2'b01;// store player data 
   else 
    pos7 <= pos7;// keep previous position
  end 
 end 
 // Position 8 
 always @(posedge clock or posedge reset)          // Active high logic for reset
 begin
  if(reset) 
   pos8 <= 2'b00;
  else begin
   if(illegal_move==1'b1)
    pos8 <= pos8;// keep previous position
   else if(PL2_en[8]==1'b1)
    pos8 <= 2'b10; // store player2 data 
   else if (PL_en[8]==1'b1)
    pos8 <= 2'b01;// store player data 
   else 
    pos8 <= pos8;// keep previous position
  end 
 end 
 // Position 9 
 always @(posedge clock or posedge reset)      // Active high logic for reset
 begin
  if(reset) 
   pos9 <= 2'b00;
  else begin
   if(illegal_move==1'b1)
    pos9 <= pos9;// keep previous position
   else if(PL2_en[9]==1'b1)
    pos9 <= 2'b10; // store player2 data 
   else if (PL_en[9]==1'b1)
    pos9 <= 2'b01;// store player data 
   else 
    pos9 <= pos9;// keep previous position
  end 
 end  

endmodule
