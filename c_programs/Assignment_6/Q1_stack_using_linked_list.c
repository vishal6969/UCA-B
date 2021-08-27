/*
 * The program implements a stack using linked list structure
 *
 *
 *
 * @author 1910990171 Vishal
 * Assignment- 6.1
 * Date- 08/27/2021 mm/dd/yyyy
 * */

#include<stdio.h>
#include<stdlib.h>

//structure of a node to be used in stack

typedef struct Node node;
struct Node{

	int data;          //to store data of node
	node* next;        //to be used as a pointer to the next node in the linked list 
};


//structure of stack
typedef struct Stack{

	node* head;         //top of the stack
}Stack;

//function to push elements to the stack

void push(Stack* stack, int n){

	//when stack is just initialised
	if(stack->head == NULL){
	
		stack->head = (node*) malloc( sizeof(node));
		stack->head->next = NULL;                       //next pointing to nothing
		stack->head->data = n;                          //add data to stack

		return;
	}

	//create new node for to store new stack element
	node* temp = (node*) malloc( sizeof(node));
	temp->data = n;
	temp->next = NULL;


	//swap new node with head
	temp->next = stack->head;
	stack->head = temp;

}



//function to pop elements from stack

int pop(Stack* stack){

	//when stack is empty return -1
	if(stack->head == NULL){
	
		printf("Error: Stack is Empty");
		return -1;
	}

	int n = stack->head->data;                 //store data of head node
	stack->head = stack->head->next;                   //remove head node and jump to the next node

	return n;
}



//function to peek stack top element

int peek(Stack* stack){

	//when stack is empty return -1
	if(stack->head == NULL){
	
		printf("Error: Stack is Empty");
		return -1;
	}
	
	return stack->head->data;
}



//function to check if stack is empty

int isEmpty(Stack* stack){

	if(stack->head == NULL){
	
		return 1;                //1 means stack is Empty
	}

	return 0;                        //0 means stack is not Empty
}



//driver code

int main(){

	Stack stack = {};

	push(&stack, 69);                     //push operation on stack

       //check functionality of peek pop and isEmpty
        printf("\nPeek: %d", peek( &stack));
        printf("\nEmpty: %d", isEmpty( &stack));
        printf("\nPop: %d", pop( &stack));
	printf("\nEmpty: %d", isEmpty( &stack));
}
