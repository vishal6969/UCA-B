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


/*
 * helper function to calculate length of string
 *
 * @params
 *   str- string whose length to be calculate
 *
 * @return 
 *   length- length of string
 * */

int str_len(char *str){

	//variable to store length of string
	int length=0;

	//loop till the end of string and increment length 
	while(str[length]!='\0'){
	
	     length++;
	}

	return length;
}



/*
 * helper function to implement power function
 *
 * @params
 *   base-  integer whose power is to be calculated
 *   power-  exponential power of integer to be calculated
 *
 * @return
 *   result-  base multiplied power times
 * */

int custom_pow(int base, int power){

	//variable to store the final result
	int result = 1;


	for(int i=0; i<power; i++){
	
	     	result *= base;    //multiply base power times
	}


	return result;          
}



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
            
	
	    //switch statement to determine last digit
	    //of hexadecimal as a decimal value
            switch (str[i]){
	    
		 case 'a':
		 case 'A':
		 digit = 10;    //decimal value of 'a' or 'A'
	         break;
	         
	         case 'b':
		 case 'B':
		 digit = 11;     //decimal value of 'b' or 'B'
		 break;

		 case 'c':
		 case 'C':
		 digit = 12;     //decimal value of 'c' or 'C'
		 break;


		 case 'd':
		 case 'D':
		 digit = 13;     //decimal value of 'd' or 'D'
		 break;


		 case 'e':
		 case 'E':
		 digit = 14;      //decimal value of 'e' or 'E'
		 break;


		 case 'f':
		 case 'F':
		 digit = 15;      //decimal value of 'f' or 'F'
		 break;

		 default:
		 digit = str[i] - '0';   //character to integer
		 break;
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
