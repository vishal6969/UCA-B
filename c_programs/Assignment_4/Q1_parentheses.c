/*
 * The program checks whether a given sequence
 * of brackets is valid or not
 *
 * Example:
 *   Input: str = {}()[]    Output: true
 *   Input: str = {([])}    Output: true
 *   Input: str = {[(])}    Output: false
 *
 * 
 *
 * @author 1910990171 Vishal
 * Date- 8/10/2021 mm/dd/yyy
 * Assignment- 4.1
 * */

#include<stdio.h>
#include"char_stack.h"        //custom stack strucuture to store character

//driver code

int main(){

	//string to store the brackets sequence
	char str[50];

	//take input from user
	printf("\nEnter a Sequence of brackets: ");
	scanf("%s", str);

	//declare an empty stack structure
	struct Stack st = {};

	//traverse the whole sequence of brackets
	for(int i = 0; str[i] != '\0'; i++){
	
	    if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
	    
		//push opening braces to the stack and continue taversal
		 push(&st, str[i]);
		 continue;
	    }

	    //check all valid pairs of brackets

	    else if(!isEmpty(&st) && str[i] == ')' && peek(&st) == '('){
	    
		 pop(&st);        //pop element from stack
		 continue;        //continue traversal
	    }

	    else if(!isEmpty(&st) && str[i] == ']' && peek(&st) == '['){
	    
		 pop(&st);        //pop element from stack
		 continue;        //continue traversal
	    }

	    else if(!isEmpty(&st) && str[i] == '}' && peek(&st) == '{'){
	    
		 pop(&st);        //pop element from stack
		 continue;        //continue traversal
	    }

	    //sequence is invalid if there is no match with above cases
	    printf("\nFalse");
	   
	    return 0;      //terminate program
	}

	//when there are brackets left in the stack
	//then it is an invalid sequence
	if(!isEmpty(&st)){
	
	     printf("\nFalse");           

	     return 0;         //terminate program
	}


	//if there was no such case of mismatch
	// from above then it is a valid sequence of brackets
	printf("\nTrue");


	return 0;
}
