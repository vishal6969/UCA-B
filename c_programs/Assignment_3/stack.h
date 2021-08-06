/*
 * The program implements stack funcionalities
 * 
 * functions:
 *   push- add an element to the stack
 *   pop- remove and return the topmost element in stack
 *   peek- return the topmost element in stack
 *   isEmpty- return true if stack is empty otherwise return false 
 *
 *
 * @author 1910990171 Vishal
 * Practice Assignment
 * Date- 8/6/2021 mm/dd/yyyy
 * */

#include<stdio.h>
#include<stdlib.h>
#define DEFAULT_SIZE 10
/*
 * The structure initiales the array to store 
 * stack elements and holds information variables of stack
 *
 * arr- array to store the stack elements
 * size- size of the stack
 * top- topmost index location of stack
 * */
struct Stack{

        int size; 
	int *arr;     //declare array to implement the stack 
	int top;     
};



/*
 * The function implements push functionality of stack
 * to add an element in the stack
 *
 * @params
 *  n- element that needs to be pushed to the stack
 *  st- stack structure variable 
 * */

void push(struct Stack *st, int n){

	
	//declare pointers to the actual stack variables
	int *size = &(st->size);
	int *top = &(st->top);
//	int *arr = st->arr;
 
	//when stack is empty
	if(*size == 0){

	    *size = DEFAULT_SIZE;         //initialise size of array
	   
	    st->arr = (int*) malloc(*size * sizeof(int));   //allocate memory to array
	}

	//when stack if full
	if(*top == *size - 1){
	
             *size = *size * 2;
	     st->arr = (int*) malloc(*size * sizeof(int));
	}
        //update top and element to the stack
	*top = *top + 1;
        st->arr[*top] = n;	
}



/*
 * The function implements pop functionality of stack
 * 
 * @params
 *   st- pointer to the stack structure variable
 *
 * @return
 *   n- topmost element of the stack
 * */

int pop(struct Stack *st){

	//when stack is Empty print error
	if(st->top < 0){
	
            printf("\nError: Stack is Empty");

	    return -1;
	}
	//declare pointers to the actual stack variables
	int *top = &(st->top);
	int *arr = st->arr;

	int n = arr[*top];      //topmost element in stack

	*top = *top - 1;     //update top


	return n;
}



/*
 * The function implements peek functionality of stack
 *
 * @params
 *   st- pointer to the stack structure variable
 *
 * @return
 *   n- topmost element in stack
 * */

int peek(struct Stack *st){

	//when stack is Empty print error
	if(st->top < 0){
	
            printf("\nError: Stack is Empty");

	    return -1;
	}

	//store the topmost element of stack in n
        int n = st->arr[st->top];


	return n;
}



/*
 * The function tells whether stack is empty
 *
 * @params
 *   st- pointer to the stack structure variable
 *
 * @return
 *   0 for false  (stack has elements)
 *   1 for true   (stack is empty)
 * */

int isEmpty(struct Stack *st){

         //if top is -1 it returns 1 otherwise 0
	return st->top == -1;   
}

