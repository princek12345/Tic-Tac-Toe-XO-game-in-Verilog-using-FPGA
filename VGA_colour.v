`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:18:33 06/22/2020 
// Design Name: 
// Module Name:    datapath 
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
module VGA_colour(
	 input [17:0] pos,     // all position registers
	 input illegal_move,   // illegal move signal
	 input no_space,       // no space signal
	 input [1:0] who,      // winner player number
    input [15:0] H_counter,    // Horizontal counter
	 input [15:0] V_counter,    // vertical counter
	 output hsync,
	 output vsync,
	 output reg [2:0] red,      // RED
    output reg [2:0] green,    // GREEN
    output reg [1:0] blue      // BLUE
 );

wire [1:0] pos1,pos2,pos3,
     pos4,pos5,pos6,pos7,pos8,pos9;   // position registers extractions
	  
assign pos1 = pos[17:16];	  
assign pos2 = pos[15:14];	  
assign pos3 = pos[13:12];	  
assign pos4 = pos[11:10];	  
assign pos5 = pos[9:8];	  
assign pos6 = pos[7:6];	  
assign pos7 = pos[5:4];	  
assign pos8 = pos[3:2];	  
assign pos9 = pos[1:0];	  

assign hsync = (H_counter < 96 ) ? 1 : 0;
assign vsync = (V_counter < 2 ) ? 1 : 0;

always @ (*) begin
 if ((H_counter > 143 && H_counter < 784 && V_counter > 31 && V_counter < 511 ))  begin   // Display pixel ranges
	
	if  (((H_counter > 150 && H_counter < 153) || (H_counter > 303 && H_counter < 306) || (H_counter > 456 && H_counter < 459) || (H_counter > 609 && H_counter < 612)) && V_counter > 44 && V_counter < 506) 
	begin                       // Board outline pixels
	 red<=3'b111;
	 green<=3'b111;
	 blue<=2'b11;
	end
	
   else if (((H_counter > 153 && H_counter < 303) || (H_counter > 306 && H_counter < 456) || (H_counter > 459 && H_counter < 609)) && ((V_counter > 44 && V_counter < 47) || (V_counter > 197 && V_counter < 200) || (V_counter > 350 && V_counter < 353) || (V_counter > 503 && V_counter < 506) ))
	begin                    // Board outline pixels
	 red<=3'b111;
	 green<=3'b111;
	 blue<=2'b11;
	end
	
	else if ((H_counter > 622 && H_counter < 627))
	begin                   // Side pannel pixels
	 red<=3'b111;
	 green<=3'b111;
	 blue<=2'b11;
	end
	
// pos1 
	else if(H_counter > 168 && H_counter < 288 && V_counter > 62 && V_counter < 182)
	begin
	case (pos1) 
	
	2'b01:begin           // If player-1 occupied position - RED
	  red<=3'b111;
	  green<=3'b000;
	  blue<=2'b00;
	end
	
	2'b10:begin          // If player-2 occupied position - GREEN
	  red<=3'b000;
	  green<=3'b111;
	  blue<=2'b00;
	end
	
	default:begin      // If position is non occupied - BLACK
	  red<=3'b000;
	  green<=3'b000;
	  blue<=2'b00;
	end
	
	endcase
	end

//pos2
	else if(H_counter > 321 && H_counter < 441 && V_counter > 62 && V_counter < 182)
	begin
	case (pos2) 
	
	2'b01:begin           
	 red<=3'b111;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	2'b10:begin
	 red<=3'b000;
	 green<=3'b111;
	 blue<=2'b00;
	end
	
	default:begin
	 red<=3'b000;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	endcase
	end
	
	
	//pos3
	else if(H_counter > 474 && H_counter < 594 && V_counter > 62 && V_counter < 182)
	begin
	case (pos3) 
	
	2'b01:begin
	 red<=3'b111;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	2'b10:begin
	 red<=3'b000;
	 green<=3'b111;
	 blue<=2'b00;
	end
	
	default:begin
	 red<=3'b000;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	endcase
	end
	
	//pos4
	else if(H_counter > 168 && H_counter < 288 && V_counter > 215 && V_counter < 335)
	begin
	case (pos4) 
	
	2'b01:begin
	 red<=3'b111;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	2'b10:begin
	 red<=3'b000;
	 green<=3'b111;
	 blue<=2'b00;
	end
	
	default:begin
	 red<=3'b000;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	endcase
	end

	//pos5
	else if(H_counter > 321 && H_counter < 441 && V_counter > 215 && V_counter < 335)
	begin
	case (pos5) 
	
	2'b01:begin
	 red<=3'b111;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	2'b10:begin
	 red<=3'b000;
	 green<=3'b111;
	 blue<=2'b00;
	end
	
	default:begin
	 red<=3'b000;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	endcase
	end

	//pos6
	else if(H_counter > 474 && H_counter < 594 && V_counter > 215 && V_counter < 335)
	begin
	case (pos6) 
	
	2'b01:begin
	 red<=3'b111;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	2'b10:begin
	 red<=3'b000;
	 green<=3'b111;
	 blue<=2'b00;
	end
	
	default:begin
	 red<=3'b000;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	endcase
	end

	//pos7
	else if(H_counter > 168 && H_counter < 288 && V_counter > 368 && V_counter < 488)
	begin
	case (pos7) 
	
	2'b01:begin
	 red<=3'b111;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	2'b10:begin
	 red<=3'b000;
	 green<=3'b111;
	 blue<=2'b00;
	end
	
	default:begin
	 red<=3'b000;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	endcase
	end

	//pos8
	else if(H_counter > 321 && H_counter < 441 && V_counter > 368 && V_counter < 488)
	begin
	case (pos8) 
	
	2'b01:begin
	 red<=3'b111;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	2'b10:begin
	 red<=3'b000;
	 green<=3'b111;
	 blue<=2'b00;
	end
	
	default:begin
	 red<=3'b000;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	endcase
	end

	//pos9
	else if(H_counter > 474 && H_counter < 594 && V_counter > 368 && V_counter < 488)
	begin
	case (pos9) 
	
	2'b01:begin
	 red<=3'b111;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	2'b10:begin
	 red<=3'b000;
	 green<=3'b111;
	 blue<=2'b00;
	end
	
	default:begin
	 red<=3'b000;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	endcase
	end

 // Side pannel 
	else if(H_counter > 642 && H_counter < 762 && V_counter > 47 && V_counter < 503)
	begin       
	
	//illegal Move
	if (illegal_move==1'b1)   // If illegal move detected - BLUE 
	begin
	 red<=3'b000;
	 green<=3'b000;
	 blue<=2'b11;
	end
	
	//no Space
	if (no_space==1'b1)    // If no space detected (or draw) - YELLOW 
	begin
	 red<=3'b111;
	 green<=3'b111;
	 blue<=2'b00;
	end
	
	// winner
	case (who)           // Indentify winner by player number 
	
	2'b01:begin          // RED for player-1
	 red<=3'b111;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	2'b10:begin          // GREEN for player-2
	 red<=3'b000;
	 green<=3'b111;
	 blue<=2'b00;
	end
	
	default:begin        // If winner not detected and places are empty 
	 red<=3'b000;
	 green<=3'b000;
	 blue<=2'b00;
	end
	
	endcase
	end

	else 
	begin
	 red<=3'b000;
	 green<=3'b000;
	 blue<=2'b00;
	end

end
end 

endmodule
