struct ListNode* rotateRight(struct ListNode* head, int k){

   if(k == 0 || head == NULL)
       return head;
    int size = 0;
    struct ListNode* temp = head;
    struct ListNode* temp1 = head;
    
    while(temp != NULL){
        
        temp = temp->next;
        size++;
    }
   
    int c = 0;
    k = k % size;
    temp = head;
    
     if(size == 1 || size == k || k == 0)
        return head;
    
    
    while(temp1 != NULL){
    
        if(c > k){
            temp = temp->next;
        }
        temp1 = temp1 -> next;
        c++;
    }
    
    temp1 = temp->next;
    temp->next = NULL;
    temp = temp1;
    
    while(temp != NULL && temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = head;
    
    return temp1;
}
