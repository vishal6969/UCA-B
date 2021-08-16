
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize){
    
    if(nums == NULL || numsSize == 0){
        *returnSize = 0;
        return NULL;
    }
    int temp = numsSize - k + 1;
    *returnSize = temp;
    int* result = (int*) malloc(temp * sizeof(int));
    int x = 0;
    
    int* q = (int*) malloc(numsSize * sizeof(int));
    int head = 0;
    int tail = -1;
    
    for(int i = 0; i < numsSize; i++){
        
        while(tail>=head && nums[i] > nums[q[tail]]){
            tail--;
        }
        
        q[++tail] = i;
        
        if(i - x + 1 == k)
        result[x++] = nums[q[head]];
    
        while(head <= tail && (i - q[head] + 1) >= k){
            head++;
        }
    }   
    
    free(q);
    return result;
}
