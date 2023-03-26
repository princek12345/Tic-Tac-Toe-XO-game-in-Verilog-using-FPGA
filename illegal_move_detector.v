`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:43:28 04/27/2020 
// Design Name: 
// Module Name:    illegal_move_detector 
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
module illegal_move_detector(
	input play,            // player-1 enable signal
	input player2,         // player-2 enable signal
   input [1:0] pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9,   // position registers
   input [9:1] PL2_en, PL_en,   // decoded positions of both player
   output wire illegal_move    // illegal move signal
    );
wire temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9;
wire temp11,temp12,temp13,temp14,temp15,temp16,temp17,temp18,temp19;
wire temp21,temp22;
// player : illegal moving    
assign temp1 = (pos1[1] | pos1[0]) & PL_en[1];
assign temp2 = (pos2[1] | pos2[0]) & PL_en[2];
assign temp3 = (pos3[1] | pos3[0]) & PL_en[3];
assign temp4 = (pos4[1] | pos4[0]) & PL_en[4];
assign temp5 = (pos5[1] | pos5[0]) & PL_en[5];
assign temp6 = (pos6[1] | pos6[0]) & PL_en[6];
assign temp7 = (pos7[1] | pos7[0]) & PL_en[7];
assign temp8 = (pos8[1] | pos8[0]) & PL_en[8];
assign temp9 = (pos9[1] | pos9[0]) & PL_en[9];
// player2 : illegal moving  
assign temp11 = (pos1[1] | pos1[0]) & PL2_en[1];
assign temp12 = (pos2[1] | pos2[0]) & PL2_en[2];
assign temp13 = (pos3[1] | pos3[0]) & PL2_en[3];
assign temp14 = (pos4[1] | pos4[0]) & PL2_en[4];
assign temp15 = (pos5[1] | pos5[0]) & PL2_en[5];
assign temp16 = (pos6[1] | pos6[0]) & PL2_en[6];
assign temp17 = (pos7[1] | pos7[0]) & PL2_en[7];
assign temp18 = (pos8[1] | pos8[0]) & PL2_en[8];
assign temp19 = (pos9[1] | pos9[0]) & PL2_en[9];
// intermediate signals 
assign temp21 =((((((((temp1 | temp2) | temp3) | temp4) | temp5) | temp6) | temp7) | temp8) | temp9);
assign temp22 =((((((((temp11 | temp12) | temp13) | temp14) | temp15) | temp16) | temp17) | temp18) | temp19);
// output illegal move 
assign illegal_move = temp21 | temp22 | (play & player2);   
endmodule 


