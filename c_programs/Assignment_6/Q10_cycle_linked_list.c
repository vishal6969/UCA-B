/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    int c = 0;
    
    while(slow!=NULL && fast!= NULL && fast->next!= NULL){
       
          slow = slow->next;
          fast = fast->next->next;
        if(slow == fast){
            c=1;
            break;
        }
    }
    
    while(c){
        if(head == fast){
            return head;
        }
        head = head->next;
        fast = fast->next;
    }
    
    return NULL;
}
