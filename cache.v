`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:44:16 06/14/2017 
// Design Name: 
// Module Name:    cache 
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
module cache(address,dataofmemory,dataout,addressout
    );
input [31:0]address;
input [127:0]dataofmemory;
output reg[31:0]dataout;
output reg[31:0]addressout;

reg [156:0] set0 [1:0];
reg [156:0] set1 [1:0];
reg [156:0] set2 [1:0];
reg [156:0] set3 [1:0];
reg [3:0]LRU=0;
reg cachen=1;
reg [31:0]saveAddress;
integer  getoffset;
//wire [7:0] tmp;



always@(address)
begin 
	if(cachen==1)
	begin
		$display ("get address %d", address);
		cachen=0;
		getoffset=address[1:0];
		getoffset=29+(getoffset*32);
			case(address[3:2])
			0:begin
				if(set0[0][0]==1&&set0[0][28:1]==address[31:4])begin
					$display ("hit");
					dataout=set0[0][getoffset+:31];
					$display ("hit data : %b",dataout);
					$display ("hit set0[0]0 :%b",set0[0][60:29]);
					$display ("hit set0[0]1 :%b",set0[0][92:61]);
					$display ("hit set0[0]2 :%b",set0[0][124:93]);
					$display ("hit set0[0]3 :%b",set0[0][156:125]);
					cachen=1;
					end
				else begin
					if(set0[1][0]==1&&set0[1][28:1]==address[31:4])begin
					dataout=set0[1][getoffset+:31];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			1:begin
				if(set1[0][0]==1&&set1[0][28:1]==address[31:4])begin
					dataout=set1[0][getoffset+:31];
					cachen=1;
					end
				else begin
					if(set1[1][0]==1&&set1[1][28:1]==address[31:4])begin
					dataout=set1[1][getoffset+:31];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end			
			end
			2:begin
					if(set2[0][0]==1&&set2[0][28:1]==address[31:4])begin
					dataout=set2[0][getoffset+:31];
					cachen=1;
					end
				else begin
					if(set2[1][0]==1&&set2[1][28:1]==address[31:4])begin
					dataout=set2[1][getoffset+:31];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			3:begin
					if(set3[0][0]==1&&set3[0][28:1]==address[31:4])begin
					dataout=set3[0][getoffset+:31];
					cachen=1;
					end
				else begin
					if(set3[1][0]==1&&set3[1][28:1]==address[31:4])begin
					dataout=set3[1][getoffset+:31];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
					endcase
	end

end
//&& (dataofmemory[31:29]!=3'bxxx) 
always@(dataofmemory)
begin
if(cachen==0) begin
			$display ("get data from memory %b", dataofmemory);
			case(saveAddress[3:2])
			0:begin
			set0[LRU[0]][0]=1;
			set0[LRU[0]][28:1]=saveAddress[31:4];
			set0[LRU[0]][156:29]=dataofmemory;
			LRU[0]=LRU[0]^1;
			end
			1:begin
			set1[LRU[1]][0]=1;
			set1[LRU[1]][28:1]=saveAddress[31:4];
			set1[LRU[1]][156:29]=dataofmemory;
			LRU[1]=LRU[1]^1;			
			end
			
			2:begin
			set2[LRU[2]][0]=1;
			set2[LRU[2]][28:1]=saveAddress[31:4];
			set2[LRU[2]][156:29]=dataofmemory;
			LRU[2]=LRU[2]^1;
			end
			
			3:begin
			set3[LRU[3]][0]=1;
			set3[LRU[3]][28:1]=saveAddress[31:4];
			set3[LRU[3]][156:29]=dataofmemory;
			LRU[3]=LRU[3]^1;
			end

		endcase
			cachen=1;
			dataout=dataofmemory;
end
else begin
	//dataout[31:29]=3'bxxx;
end
end

/*
reg [58:0] set0 [1:0];
reg [58:0] set1 [1:0];
reg [58:0] set2 [1:0];
reg [58:0] set3 [1:0];
reg [58:0] set4 [1:0];
reg [58:0] set5 [1:0];
reg [58:0] set6 [1:0];
reg [58:0] set7 [1:0];
reg [58:0] set8 [1:0];
reg [58:0] set9 [1:0];
reg [58:0] set10 [1:0];
reg [58:0] set11 [1:0];
reg [58:0] set12 [1:0];
reg [58:0] set13 [1:0];
reg [58:0] set14 [1:0];
reg [58:0] set15 [1:0];
reg [0:15]LRU=0;
reg cachen=1;
reg [31:0]saveAddress;
wire [7:0] getoffset;
wire [7:0] tmp;

always@(address)
begin 
	if(cachen==1)
	begin
		cachen=0;
		getofset=address[1:0];
		getofset=27+(getofset*8);
			case(address[5:2])
			0:begin
				if(set0[0][0]==1&&set0[0]==address[31:6])begin
					dataout=set0[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set0[1][0]==1&&set0[1]==address[31:6])begin
					dataout=set0[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			1:begin
				if(set1[0][0]==1&&set1[0]==address[31:6])begin
					dataout=set1[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set1[1][0]==1&&set1[1]==address[31:6])begin
					dataout=set1[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end			
			end
			2:begin
					if(set2[0][0]==1&&set2[0]==address[31:6])begin
					dataout=set2[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set2[1][0]==1&&set2[1]==address[31:6])begin
					dataout=set2[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			3:begin
					if(set3[0][0]==1&&set3[0]==address[31:6])begin
					dataout=set3[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set3[1][0]==1&&set3[1]==address[31:6])begin
					dataout=set3[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			4:begin
					if(set4[0][0]==1&&set4[0]==address[31:6])begin
					dataout=set4[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set4[1][0]==1&&set4[1]==address[31:6])begin
					dataout=set4[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end			
			end
			5:begin
					if(set5[0][0]==1&&set5[0]==address[31:6])begin
					dataout=set5[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set5[1][0]==1&&set5[1]==address[31:6])begin
					dataout=set5[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			6:begin
					if(set6[0][0]==1&&set6[0]==address[31:6])begin
					dataout=set6[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set6[1][0]==1&&set6[1]==address[31:6])begin
					dataout=set6[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			7:begin
					if(set7[0][0]==1&&set7[0]==address[31:6])begin
					dataout=set7[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set7[1][0]==1&&set7[1]==address[31:6])begin
					dataout=set7[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			8:begin
					if(set8[0][0]==1&&set8[0]==address[31:6])begin
					dataout=set8[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set8[1][0]==1&&set8[1]==address[31:6])begin
					dataout=set8[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			9:begin
					if(set9[0][0]==1&&set9[0]==address[31:6])begin
					dataout=set9[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set9[1][0]==1&&set9[1]==address[31:6])begin
					dataout=set9[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			10:begin
					if(set10[0][0]==1&&set10[0]==address[31:6])begin
					dataout=set10[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set10[1][0]==1&&set10[1]==address[31:6])begin
					dataout=set10[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end			
			end
			11:begin
					if(set11[0][0]==1&&set11[0]==address[31:6])begin
					dataout=set11[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set11[1][0]==1&&set11[1]==address[31:6])begin
					dataout=set11[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			12:begin
					if(set12[0][0]==1&&set12[0]==address[31:6])begin
					dataout=set12[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set12[1][0]==1&&set12[1]==address[31:6])begin
					dataout=set12[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			13:begin
					if(set13[0][0]==1&&set13[0]==address[31:6])begin
					dataout=set13[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set13[1][0]==1&&set13[1]==address[31:6])begin
					dataout=set13[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			14:begin
					if(set14[0][0]==1&&set14[0]==address[31:6])begin
					dataout=set14[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set14[1][0]==1&&set14[1]==address[31:6])begin
					dataout=set9[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
			15:begin
					if(set15[0][0]==1&&set15[0]==address[31:6])begin
					dataout=set15[0][getofset:getofset+8];
					cachen=1;
					end
				else begin
					if(set15[1][0]==1&&set15[1]==address[31:6])begin
					dataout=set15[1][getofset:getofset+8];
					cachen=1;
					end
					else begin
					addressout=address;
					saveAddress=address;
					end
						
				
				end
			end
		endcase
	end

end

always@(dataofmemory)
begin
if(cachen==0 && (dataofmemory[31:29]!=3'bxxx) )begin

			case(saveAddress[5:2])
			0:begin
			set0[LRU[0]][0]=1;
			set0[LRU[0]][26:1]=saveAddress[31:6];
			set0[LRU[0]][58:27]=dataofmemory;
			LRU[0]=LRU[0]^1;
			end
			1:begin
			set1[LRU[1]][0]=1;
			set1[LRU[1]][26:1]=saveAddress[31:6];
			set1[LRU[1]][58:27]=dataofmemory;
			LRU[1]=LRU[1]^1;			
			end
			
			2:begin
			set2[LRU[2]][0]=1;
			set2[LRU[2]][26:1]=saveAddress[31:6];
			set2[LRU[2]][58:27]=dataofmemory;
			LRU[2]=LRU[2]^1;
			end
			
			3:begin
			set3[LRU[3]][0]=1;
			set3[LRU[3]][26:1]=saveAddress[31:6];
			set3[LRU[3]][58:27]=dataofmemory;
			LRU[3]=LRU[3]^1;
			end
			4:begin
			set4[LRU[4]][0]=1;
			set4[LRU[4]][26:1]=saveAddress[31:6];
			set4[LRU[4]][58:27]=dataofmemory;
			LRU[4]=LRU[4]^1;			
			end
			5:begin
			set5[LRU[5]][0]=1;
			set5[LRU[5]][26:1]=saveAddress[31:6];
			set5[LRU[5]][58:27]=dataofmemory;
			LRU[5]=LRU[5]^1;
			end
			6:begin
			set6[LRU[6]][0]=1;
			set6[LRU[6]][26:1]=saveAddress[31:6];
			set6[LRU[6]][58:27]=dataofmemory;
			LRU[6]=LRU[6]^1;
			end
			7:begin
			set7[LRU[7]][0]=1;
			set7[LRU[7]][26:1]=saveAddress[31:6];
			set7[LRU[7]][58:27]=dataofmemory;
			LRU[7]=LRU[7]^1;
			end
			8:begin
			set8[LRU[8]][0]=1;
			set8[LRU[8]][26:1]=saveAddress[31:6];
			set8[LRU[8]][58:27]=dataofmemory;
			LRU[8]=LRU[8]^1;
			end
			9:begin
			set9[LRU[9]][0]=1;
			set9[LRU[9]][26:1]=saveAddress[31:6];
			set9[LRU[9]][58:27]=dataofmemory;
			LRU[9]=LRU[9]^1;
			end
			10:begin
			set10[LRU[10]][0]=1;
			set10[LRU[10]][26:1]=saveAddress[31:6];
			set10[LRU[10]][58:27]=dataofmemory;
			LRU[10]=LRU[10]^1;
			end
			11:begin
			set11[LRU[11]][0]=1;
			set11[LRU[11]][26:1]=saveAddress[31:6];
			set11[LRU[11]][58:27]=dataofmemory;
			LRU[11]=LRU[11]^1;
			end
			12:begin
			set12[LRU[12]][0]=1;
			set12[LRU[12]][26:1]=saveAddress[31:6];
			set12[LRU[12]][58:27]=dataofmemory;
			LRU[12]=LRU[12]^1;
			end
			13:begin
			set13[LRU[13]][0]=1;
			set13[LRU[13]][26:1]=saveAddress[31:6];
			set13[LRU[13]][58:27]=dataofmemory;
			LRU[13]=LRU[13]^1;
			end
			14:begin
			set14[LRU[14]][0]=1;
			set14[LRU[14]][26:1]=saveAddress[31:6];
			set14[LRU[14]][58:27]=dataofmemory;
			LRU[14]=LRU[14]^1;
			end
			15:begin
			set15[LRU[15]][0]=1;
			set15[LRU[15]][26:1]=saveAddress[31:6];
			set15[LRU[15]][58:27]=dataofmemory;
			LRU[15]=LRU[15]^1;
			end

		endcase
			cachen=1;
			dataout=dataofmemory;
end
else begin
	dataout[31:29]=3'bxxx;
end
end
*/
endmodule
