/*
 * The program converts infix mathematical
 * expression to postfix
 *
 * Example:
 *   Input: str = (1 + ((3 - 1) * (4 / 2 ) ))
 *   Output: 1 3 1 - 4 2 / * +
 *
 * 
 *
 * @author 1910990171 Vishal
 * Date- 8/10/2021 mm/dd/yyy
 * Assignment- 4.2
 * */

#include<stdio.h>
#include"char_stack.h"        //custom stack strucuture to store character

//driver code

int main(){

	//string to get the expression
	char str[50];

	//string to store resultant postfix expression
	char result[50];

	//take input from user
	printf("\nEnter Infix Expression: ");
	scanf("%s", str);

	//declare an empty stack structure
	struct Stack st = {};

	int  k = 0;         //iterator to keep track of resultant string 

	//traverse the whole expression
	for(int i = 0; str[i] != '\0'; i++){
	    
	    //when it is an opening bracket ignore it
	    // and continue traversal
	    if(str[i] == '('){
	    
	       continue;
	    }

            //when it is a closing bracket
	    else if(str[i] == ')'){
	    
	       //pop operator from stack and add it to the result
	       result[k++] = pop(&st);

	       continue;
	    }

	    //when it is an operator push to the stack
	    else if(str[i] == '+' || str[i] == '-' ||	    
	            str[i] == '*' || str[i] == '/'){

		push(&st, str[i]);
		
		continue;
	    }

	    //when it is a number directly add it to the resutlt
	    result[k++] = str[i];
            	    
	}

	result[k] = '\0';      //end the result string

	//resultant postfix expression
	printf("\nPostfix Expression: %s", result);


	return 0;
}
