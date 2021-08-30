/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    
    if(head == NULL){
        return NULL;
    }
    struct ListNode* ans = (struct ListNode*)malloc(sizeof(struct ListNode));
    
    ans->val = 0;
    ans->next = head;
    
    head = ans;
    
    while(head != NULL && head->next != NULL){
        
        int temp = 200;
        
        if(head->next->next != NULL && head->next->val == head->next->next->val)
            temp = head->next->val;
        
        while(head != NULL && head->next != NULL &&
               head->next->val == temp){
            
            head->next = head->next->next;
            
        }
        
        if(temp == 200)
        head = head->next;
    }
    
    return ans->next;
}
