/*
 * The programs prints every 3rd number from fibonacci series upto n times
 *
 *
 * Expected output:
 * n = 3 : 2,8,34
 *
 * Explanation: fib series is 1,1,2,3,5,8,13,21,34…. 3rd in this
 * series is 2, 6th is 8 and 9th is 34. 
 *
 * @author 1910990171 Vishal
 * Assignment- 5.4.1
 * Date- 8/4/2021 mm/dd/yyyy
 * */

#include<stdio.h>

int FIB[100000];         //array to store calculated fibonacci numbers
int count = 0;       //variable to keep count of fibonacci numbers printed
/*
 * The function performs the recursive calls
 * to find fibonacci numbers and print every third number
 *
 * @params 
 * n- total fibonacci numbers to be printed
 * */

void fib(int a, int b, int n){

	//end function if sufficient numbers are already printed
	if(count == n){
	
	    return;
	}

	//next number 
	int c = a + b;

	printf("%d ",c);     //display number

	//move two numbers ahead in the series
	a = b;
	b = c;
	c = a + b;

	a = b;
	b = c;
	c = a+b;
        
	count++;     //increment count of total numbers printed

	fib(b, c, n);     //call fib function to print next number
}


//driver code

int main(){

	//total numbers to printed from the series
	int n = 4;

	//calling the recursive function to start 
	//printing the numbers from series
	fib(1, 1, n);

}
