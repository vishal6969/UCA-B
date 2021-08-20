/*
 * The program prints first n even numbers from the 
 * fibonacci series
 *
 * Example:
 *   Input: fib_n_even(2)
 *   Output: 2 8
 *
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 8.1
 * Date- 8/20/2021 mm/dd/yyyy
 * */

#include<stdio.h>


long long fib[92];         //array to store the fibonacci series



 //The function does preprocessing of the fibonacci
 //series and stores it in the fib array
 
void preprocess(){

	long a = -1;
	long b = 1;

	//fill the fib array with the fibonacci series
	for(int i = 0; i < 92; i++){
	
	    long long c = a + b;         //create next number from previous two

	    fib[i] = c;

	    a = b;             //update a and b
	    b = c;
	}
}



/*
 * The function takes a number n and prints
 * first n even numbers from the fibonacci series
 * */

void fib_n_even(int n){

	printf("\n");        //new line


	//print n even numbers one by one
	for(int i = 1; i <= n; i++){
	
            printf("%lld ", fib[i * 3]);      //print every third number from
	                                      //series because after every two number
					      //there is an even number in the series
	}
}



//driver code

int main(){

	int n = 1;

	//call the preprocessing function
	preprocess();

	//take input from user while it is a valid input
	while(n > 0){
	
	    printf("\nEnter number(0 to EXIT): ");

	    scanf("%d", &n);

            //call fib_n_even to display n even numbers from series
	    fib_n_even(n);	    
	}

     
	return 0;
}
