`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:57:20 06/16/2017
// Design Name:   Main
// Module Name:   C:/Users/ali taheri/Desktop/verilog/compute_arcitucture_project/test1.v
// Project Name:  compute_arcitucture_project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test1;

	// Inputs
	reg clk;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
   always begin 
   #5 clk=~clk;
	end	
endmodule

