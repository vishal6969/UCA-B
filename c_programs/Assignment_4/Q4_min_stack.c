


typedef struct {
    
    int top;
    int mtop;
    int size;
    int msize;
    long *arr;
    long *marr;
} MinStack;

/** initialize your data structure here. */

MinStack* minStackCreate() {
    
    MinStack* st = (MinStack*) malloc(1 * sizeof(MinStack));
    st->size = 10;
    st->msize = 10;
    st->top = -1;
    st->mtop = 0;
    st->arr = (long*) malloc(10 * sizeof(long));
    st->marr = (long*) malloc(10*sizeof(long));
    
    st->marr[0] =LONG_MAX; 
    return st;
}

void minStackPush(MinStack* obj, int val) {
  
    if(obj->top >= (obj->size-1)){
        obj->size *= 2;
        obj->arr = (long*) realloc(obj->arr, obj->size * sizeof(long));
    }
    
    if(obj->mtop >= (obj->msize-1)){
        obj->msize *= 2;
        obj->marr = (long*) realloc(obj->marr, obj->msize * sizeof(long));
    }
    
    if(val <= obj->marr[obj->mtop]){
        
      
        obj->marr[obj->mtop + 1] = val;
        obj->mtop += 1;
    }
    
    obj->top += 1;
    obj->arr[obj->top] = val;
    
}

void minStackPop(MinStack* obj) {
  
    if(obj->arr[obj->top] == obj->marr[obj->mtop]){
        
        obj->mtop -= 1;
    }
    obj->top -= 1;
}

int minStackTop(MinStack* obj) {
  
    return (int) obj->arr[obj->top];
}

int minStackGetMin(MinStack* obj) {
    
 
    return (int) obj->marr[obj->mtop];
}

void minStackFree(MinStack* obj) {
    
    free(obj->arr);
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
