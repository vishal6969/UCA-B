struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    
    int c = 0;
    struct ListNode* temp = head;
    struct ListNode* ans = head;
    
    while(temp != NULL){
        
        if(c > n){
            head = head->next;
        }
        temp = temp->next;
        c++;
    }
     if(n == c){
        return ans->next;
    }
    head->next = head->next->next;
    return ans;
}
