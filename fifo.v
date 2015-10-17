`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:11:20 10/14/2015 
// Design Name: 
// Module Name:    fifo 
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
module fifo(
    input clk,
	 input rstN,
	 input incr,
    //input dataIn,
    output [2:0] dataOut
    );
	 
reg [2:0] grayCnt;
	 
parameter GRAY0 = 3'b000, GRAY1 = 3'b001,GRAY2 = 3'b011,
GRAY3 = 3'b010, GRAY4 = 3'b110, GRAY5 = 3'b111, 
GRAY6 = 3'b101, GRAY7 = 3'b100;
 
assign dataOut = grayCnt;
 
always @ (posedge clk or negedge rstN) begin
	if ( !rstN) begin
		grayCnt <= GRAY0;
	end else if (incr)
	case (grayCnt)
	GRAY0:  grayCnt <= GRAY1;
	GRAY1:  grayCnt <= GRAY2;
	GRAY2:  grayCnt <= GRAY3;
	GRAY3:  grayCnt <= GRAY4;
	GRAY4:  grayCnt <= GRAY5;
	GRAY5:  grayCnt <= GRAY6;
	GRAY6:  grayCnt <= GRAY7;
	GRAY7:  grayCnt <= GRAY0;
	endcase	
end






endmodule
