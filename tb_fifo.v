`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:28:41 10/14/2015
// Design Name:   fifo
// Module Name:   C:/Users/ProBook/Documents/fpga/xilinx_projects/fifo/tb_fifo.v
// Project Name:  fifo
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fifo
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_fifo;

	// Inputs
	reg clk;
	reg rstN;
	integer i;
	integer f;
	// Outputs
	wire [2:0] dataOut;

	// Instantiate the Unit Under Test (UUT)
	fifo uut (
		.clk(clk), 
		.rstN(rstN), 
		//.incr(incr), 
		.dataOut(dataOut)
	);

	initial begin
		f = $fopen("fifo_output.txt","w");
	
		// Initialize Inputs
		clk = 0;
		rstN = 1;
		

		// Wait 100 ns for global reset to finish
		#100;
		
		$display($time, " << Starting the Simulation >>");
	   $monitor ("Input: %g\t  %b Output: %d \r\n", $time, rstN , dataOut);
      $fwrite(f,"Input: %g\t  %b Output: %d \r\n", $time, rstN , dataOut);                                                                                                        
		#1000 rstN = 1;
			
		// Add stimulus here
		#1000 rstN = 0;
		#1000 rstN = 1;
	   for (i = 0; i < 16; i = i +1) begin
		
		$fwrite(f,"Input: %g\t  %b,\t", $time, rstN );                                                                                                        
			
		#1000 $fwrite(f,"Output: %d,\r\n", dataOut);                                                                                                        
		// incr = ~incr;
				
				
				
		end
		$display($time, " << Ending the Simulation >>");
		$fclose(f);  
      $finish;
		
	end
	
	always
    #500 clk = ~clk;   // every 100 nanoseconds invert
	
endmodule

