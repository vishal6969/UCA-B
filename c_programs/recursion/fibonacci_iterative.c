/*
 * The programs prints every 3rd number from fibonacci series upto n times
 * using iterative way
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


//driver code

int main(){

	//total numbers to printed from the series
	int n = 4;

	int a = 1;
	int b = 0;
	//loop to print the numbers
	for(int i=1; i <= n * 3; i++){
	
	   //create next number in series by adding previous two
	      int c = a + b;
	   
	      //check if the number is 3rd 
	      if(i % 3 == 0){
	      
		  printf("%d ", c);      //print if it is 3rd number in series
	      }

	      //update a and b to next numbers
	      a = b;
	      b = c;
	}
    
        
        return 0;	
}
