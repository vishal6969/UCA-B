/*
 * The program evaluates and displays the result of 
 * a reverse polish expression
 *
 * Example:
 *   Input: 2 3 4 + *
 *   Output: 14      2 * (3 + 4)
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 3.15
 * Date- 8/6/2021 mm/dd/yyyy
 * */

#include<stdio.h>
#include"stack.h"        //custom stack structure


/*
 * driver code that evaluates the expression
 *
 *
 * @params
 *   argc- local variable that keeps count of command line arguements
 *   argv- array of strings passed as command line arguements
 * */

int main(int argc, char *argv[]){

	struct Stack stack = {};     //declare a stack structure

	//loop through all the arguements from command line
	for(int i=1; i < argc; i++){
	
	     char *str = argv[i];     //one single arguement
	     int number = 0;          //variable to store number
             int isNumber = 0;        //to mark if it was actually a number	     

	     printf("\n%s",str);
	     //loop to check and convert the numbers in string 
	     //into integer value
	     for(int j = 0; str[j] != '\0'; j++){
	     
		  int temp = str[j] - '0'; // numerical value of character 
		  
		  //if it is a valid number
		  if(temp >=0 && temp <= 9){
		  
	              number = number * 10 + temp;    //form number
		      isNumber = 1;         //update it as a number
		  }
	     }


	     //push number to the stack if it was a number
	     if(isNumber){
		
		  push(&stack, number);
	     }

	     //else if it is a possible operator
	     else {

		  //pop two numbers from stack
		  int a = pop(&stack);    
		  int b = pop(&stack);

		  int c;      //to store resultant number

		  //use switch to perform specific operation
		  switch(str[0]){
		  
		      case '+':
			  c = b + a;         //addition
			  break;
		      
		      case '-':
			  c = b - a;        //subtraction
			  break;

		      case 'x':
			  c = b * a;         //multiplication
			  break;
		      
		      case '/':
			  c = b / a;
			  break;

		      default:          //if its not an operator
			  printf("\nEnter Valid Expression (+ - x /)");
			  return 0;
			  break;
		  }
	        
		  
		  //push result to stack
	          push(&stack, c);
	       }

	}


	//print the value of expression
	printf("\nAnswer: %d", pop(&stack));
}
