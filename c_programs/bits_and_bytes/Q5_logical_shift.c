/*
 * The program performs logical shift operation on a number
 * and shifts n bits of the number to x
 *
 * legal operators: ~ & ^ | + << >>
 *
 * Example:
 *    Input: logicalShift( 0x87654321, 4) 
 *    Output: 0x8765432
 *
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 3.5
 * Date- 8/18/2021 mm/dd/yyyy  
 * */

#include<stdio.h>

int logicalShift(int x, int n){

	//32 bit value with MSB off
	int temp  = 0x7fffffff;

	//shift one bit right to check if its MSB is on
	x = x >> 1;

	//remove the MSB if its on to avoid interruption in shifting of bits
	x = x & temp;


	//shift n-1 bits to right
	x = x >> (n-1);

	return x;
}




//driver code

int main(){

	//value to perform logical shift
	int x = 0x87654321;

	//number of bits to shift
	int n = 4;

	//display output
	printf("\nOutput: %x", logicalShift(x, n));
}
