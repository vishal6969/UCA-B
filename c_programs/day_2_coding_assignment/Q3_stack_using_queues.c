
//queue implementation
struct Queue{

        int size;
        int head;
        int tail;
        int* arr;
};
struct Queue* getQueue(){
    
    struct Queue* q = (struct Queue*)malloc(1 * sizeof(struct Queue));
    
            q->size = 101;
            q->head = 0;
            q->tail = 0;

            q->arr = (int*) malloc(q->size * sizeof(int)); 
    
    return q;
}
void enqueue(struct Queue *q, int n){
        //pointers to the members of queue structure
        int *size = &q->size;
        int *tail = &q->tail;
        int *head = &q->head;
    
    //    printf("%d",*size);
        q->arr[*tail] = n;     //add element to the back of queue

        *tail = (*tail + 1) % *size;                 //update tail
}
int isEmpty(struct Queue *q){

        return q->tail == q->head;
}
int dequeue(struct Queue *q){
        //when queue is empty print error
        if(isEmpty(q)){
             return -1;
        }
        int head = q->arr[q->head];     //store head of queue
           q->head = (q->head + 1) % q->size;      //update head of queue
        return head;       //return head of queue
}
int peek(struct Queue *q){
        //when queue is empty print error
        if(isEmpty(q)){
            return -1;
        }
        return q->arr[q->head];           //return head of queue
}


//stack implementation using queue
typedef struct {
    
    //queues
    struct Queue* q1;
    struct Queue* q2;
} MyStack;

/** Initialize your data structure here. */


MyStack* myStackCreate() {
    
    
    MyStack *st = (MyStack*)malloc(1 * sizeof(MyStack)); 
    st->q1 = getQueue();
    st->q2 = getQueue();
    return st;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
    
    if(!isEmpty(obj->q1)){
        enqueue(obj->q1, x);
    }
    else{
        enqueue(obj->q2, x);
    }
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
    
    int c = -1; 
    if(!isEmpty(obj->q1)){
        
        while(1){
            c = dequeue(obj->q1);
            
            if(isEmpty(obj->q1)){
                return c;
            }
            enqueue(obj->q2, c);
        }
    }
    else if(!isEmpty(obj->q2)){
        
        while(1){
            c = dequeue(obj->q2);
            
            if(isEmpty(obj->q2)){
                return c;
            }
            enqueue(obj->q1, c);
        }
        
    }
        return c;
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
  
    int c = -1; 
    if(!isEmpty(obj->q1)){
        
        while(1){
            c = dequeue(obj->q1);
            enqueue(obj->q2, c);
             
            if(isEmpty(obj->q1)){
                return c;
            }
        }
    }
    else if(!isEmpty(obj->q2)){
        
        while(1){
            c = dequeue(obj->q2);
            enqueue(obj->q1, c);
              
            if(isEmpty(obj->q2)){
                return c;
            }
    
        }
    }
       
        return c;
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
  
    return isEmpty(obj->q1) && isEmpty(obj->q2); 
}

void myStackFree(MyStack* obj) {
    
    free(obj->q1->arr);
    free(obj->q2->arr);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/
