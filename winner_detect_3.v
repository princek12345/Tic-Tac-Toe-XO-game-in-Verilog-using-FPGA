`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:45:56 04/27/2020 
// Design Name: 
// Module Name:    winner_detect_3 
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
module winner_detect_3(    // inner module of winner detector
input [1:0] pos0,pos1,pos2,  // 3 positions to check the winner
output wire winner,         // 1 bit winner signal
output wire [1:0]who        // 2 bit number of player who wins
    );

wire [1:0] temp0,temp1,temp2;
wire temp3;
assign temp0[1] = !(pos0[1]^pos1[1]);   // for checking if both bit are same by XNOR
assign temp0[0] = !(pos0[0]^pos1[0]);   
assign temp1[1] = !(pos2[1]^pos1[1]);   
assign temp1[0] = !(pos2[0]^pos1[0]);   
assign temp2[1] = temp0[1] & temp1[1];  // for checking both temp variable
assign temp2[0] = temp0[0] & temp1[0];  
assign temp3 = pos0[1] | pos0[0];       // to check non-empty position 
// winner if 3 positions are similar and should be 01 or 10 
assign winner = temp3 & temp2[1] & temp2[0];
// determine who the winner is 
assign who[1] = winner & pos0[1];
assign who[0] = winner & pos0[0];

endmodule
