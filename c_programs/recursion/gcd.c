/*
 * This program finds gcd of two numbers using recursion
 *
 * Example:
 *   GCD(10, 15) = 5
 *
 * @author 1910990171 Vishal
 * Assignment- 3.2
 * Date- 8/4/2021 mm/dd/yyyy
 * */

#include<stdio.h>

/*
 * The function returns gcd of two numbers
 *
 * @params
 * a- number1
 * b- number2
 * */

int GCD(int a,int b){

	//if a is divisible by b then a is gcd of a,b
	if(a % b == 0){
	
	    return b;
	}
 
	//call the GCD function again 
	return GCD(b, a%b);
}



//driver code
int main(){

	//initialise two numbers
	int a = 8;
	int b = 20;

	//call GCD function and print result
	printf("GCD- %d", GCD(a, b));

}
