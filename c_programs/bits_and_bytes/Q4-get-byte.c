/*
 * The program extracts specific byte from a
 * given hexadecimal word or number
 *
 * Example:
 *   Input: getByte(0x12345678, 1)
 *   Output: 56
 *
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 3.4
 * Date- 8/12/2021 mm/dd/yyyy
 * */

#include<stdio.h>

/*
 * The function takes hexadecimal word/number
 * and extracts a particular byte from it
 *
 *
 * @params
 *   word- hexadecimal word/number to extract byte from
 *   n- byte number with 0 indexing
 * */

int getByte(int word, int n){

	word = word >> (n * 8);        //shift word 8 bits right

	word = word << 24;             //shift word 24 bits left

	word = word >> 24;             //shift word 24 bits right

	
	return word;            //return extracted byte
}




//driver code

int main(){

	//variable to store hexadecimal word/number
	int word;

	//take input of word/number from user
	printf("\nEnter Hexdecimal word/number: ");
	scanf("%x", &word);

	//byte number
	int n;

	//take input of byte number from user
	printf("\nEnter byte number: ");
	scanf("%d", &n);

	
	//display extracted byte
	printf("\nExtracted Byte: %x", getByte(word, n));

}
