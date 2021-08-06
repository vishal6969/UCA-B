/*
 * The program performs hexadecimal to decimal conversion
 *
 * Sample Test Case:
 *   
 *   Input: “0xa”
 *   Output: 10
 *
 * NOTE- allowed digits are 0 through 9, 'a' through 'f' and
 *        'A' through 'F'
 *
 * 
 * 
 * @author- 1910990171 Vishal
 * Assignment- 3.9
 * Date- 8/2/2021 mm-dd-yyy   
 * */


#include<stdio.h>
#include "str_len.h"          //custom function to calculate length of string
#include "custom_pow.h"     //custom function to implement pow function



/*
 * function to convert hexadecimal string into decimal integer
 *
 * @params str- hexadecimal string
 *
 * @return decimal_integer- the converted decimal value of str
 * */ 

int htoi(char *str){

	//needful variables
	int decimal_integer = 0;
	int length = str_len(str);


	//loop from end of string to second index (avoiding 0x or 0X)
	for(int i=length-1; i>1; i--){
	
	    int digit;     //to store last digit of hexadecimal
            int values[6] = {10, 11, 12, 13, 14, 15}; 
	
	    //for lower case digits a-f
	    if( (str[i] - 'a') >=0){

	        digit = values[str[i] - 'a'];	    
	    }

            //for upper case digits A-F
	    else if( (str[i] - 'A') >=0){
	    
		digit = values[str[i] - 'A'];
	    }

	    //for digits 0-9
	    else{

		digit = str[i] - '0';
	    }

            //add the digit to the integer number 
            decimal_integer += digit * custom_pow(16, length-1-i);               

	}


	//return decimal integer value of hexadecimal string 
	return decimal_integer;
}



//driver code
int main(){
  
	//hexadecimal string to be converted to decimal integer
	char str[]="0xaa";

	//print the integer value of string
	printf("%d",htoi(str));

	return 0;		
}
