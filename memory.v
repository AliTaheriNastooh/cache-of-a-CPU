`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:44:39 06/14/2017 
// Design Name: 
// Module Name:    memory 
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
module memory(address,write,data_in,data_out,enable,clk
    );
input enable;
input [31:0]address;
input write;
input [31:0]data_in;
output reg [127:0]data_out;
input clk;

reg [31:0] memory [1023:0];
reg [7:0]counter=0;
reg [127:0] tmp;
reg [31:0] save_address;
integer i;
initial
begin
memory[0]=0;
memory[1]=1;
for(i=2 ;i<1024;i=i+1)
begin
	memory[i]=i+23;
end
end
always@(posedge clk)begin
	if(write==1)begin
		memory[address]<=data_in;
	end
	else begin
		
		if(enable==1)begin
			if(counter==0) begin
				$display ("get address miss");			
				save_address=address;
				counter=8;

				data_out[31:29]=3'bxxx;
			end
			else begin
			if(counter==10)begin
				counter=0;
				tmp[31:0]=memory[address];
				tmp[63:32]=memory[address+1];
				tmp[95:64]=memory[address+2];
				tmp[127:96]=memory[address+3];
				
				data_out=tmp;
				$display ("dataOut");
			end
			else begin
				
				counter=counter+1;
				//data_out[31:29]=3'bxxx;
			end
			end
		end
	end
end
endmodule
