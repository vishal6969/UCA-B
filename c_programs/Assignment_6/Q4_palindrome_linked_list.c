bool isPalindrome(struct ListNode* head){
    
    if(head == NULL)
        return false;
    struct  ListNode* temp = head;
    int size = 0;
    
    while(temp != NULL){
        temp = temp->next;
        size++;
    }
    if(size == 1)
        return true;
    
    int arr[size / 2];
    int i = 0;
    
    for(i = 0; i < size/2; i++){
        
        arr[i] = head->val;
        head = head->next;
    }
    
    if(size%2 == 1)
        head = head->next;
    
    while(head != NULL){
        if(arr[--i] != head->val){
            return false;
        }
        head = head->next;
    }
    return true;
}
