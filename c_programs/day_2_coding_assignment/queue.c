/*
 * The program implements a queue data structure.
 * 
 * functions:
 *    enqueue- add element to the end of the queue
 *    dequeue- remove and return the front of queue
 *    peek- return but not remove the front element
 *    isEmpty- returns 1 if queue is Empty otherwise 0
 *
 *
 *
 * @author 1910990171 Vishal
 * Date- 8/8/2021 mm/dd/yyyy
 * */

#include<stdio.h>
#include<stdlib.h>
#define default_size 10          //default initial size of queue

/*
 * The structure stores the actual data array to 
 * implement the queue and information regardin the same
 *
 *
 * members:
 *   head- it stores the front index of the queue
 *   tail- it stores the end index of the queue
 *   arr- array to store all the elements of queue
 *   size- to keep track of size of queue 
 * */

struct Queue{
	
	int size;
	int head;
	int tail;
	int *arr;
};




/*
 * The function implements enqueue operation
 * 
 *
 * @params
 *   q- pointer to the actual queue structure
 *   n- element that needs to be added to the queue
 * */

void enqueue(struct Queue *q, int n){

	//pointers to the members of queue structure 
	int *size = &q->size;
	int *tail = &q->tail;
	int *head = &q->head;

	//when queue is initialised without any given size
	if(*size == 0){
	
	    *size = default_size;
	    *head = 0;
	    *tail = 0;

	    q->arr = (int*) malloc(*size * sizeof(int));     //allocate memory to queue 
	}
        
	//when queue is full display error
	else if(*head == *tail && *head != 0){
	
	    printf("\nError: Queue is full");

	    return;      //abort operation      
	}


	q->arr[*tail] = n;     //add element to the back of queue
	
	*tail = (*tail + 1) % *size;                 //update tail
	
}





/*
 * The function tells whether queue is empty
 *
 * @params
 *   q- pointer to the stack structure variable
 *
 * @return
 *   0 for false  (queue has elements)
 *   1 for true   (queue is empty)
 * */

int isEmpty(struct Queue *q){

        
	return q->tail == q->head;   
}



/*
 * The function implements dequeue operation
 *
 *
 * @params
 *    q- pointer to the actual queue structure
 * 
 * @return
 *     head of the queue
 * */

int dequeue(struct Queue *q){

	//when queue is empty print error
	if(isEmpty(q)){
	
	     printf("\nError: Queue is Empty");

	     return -1;
	}

	int head = q->arr[q->head];     //store head of queue

	q->head = (q->head + 1) % q->size;      //update head of queue
	
	
	return head;       //return head of queue
}



/*
 * The function implements peek operation
 *
 *
 * @params
 *   q- pointer to the actual queue structure
 *
 * @return
 *     head of the queue
 * */

int peek(struct Queue *q){

	
	//when queue is empty print error
	if(isEmpty(q)){
	
	     printf("\nError: Queue is Empty");

	     return -1;
	}


	return q->arr[q->head];           //return head of queue
}




//driver code

int main(){

	struct Queue q = {};      //declare queue structure

	//add element to queue
	enqueue(&q, 69);

	//peek 
	printf("\nPeek: %d", peek(&q));     //69


	/*
	 * Remove comments to see the cyclic behavious of queue
	 *
	 *  for(int i=1; i<69; i++){
	 *	enqueue(&q, i);
	 *      printf("\nDequeue: %d", dequeue(&q));
	 *  }
	 * */
	


	//remove element from queue
	printf("\nDequeue: %d", dequeue(&q));    //69

	//isEmpty
	printf("\nEmpty: %d", isEmpty(&q));         //1


	return 0;
}
