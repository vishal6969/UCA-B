/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    
    struct ListNode* ans = (struct ListNode*)malloc(sizeof(struct ListNode));
    ans->val = 0;
    ans->next = NULL;
    struct ListNode* temp = ans;
    
    
    while(l1 != NULL && l2!=NULL){
        
        if(l1->val < l2->val){
            temp->next = (struct ListNode*) malloc(sizeof(struct ListNode));
            temp->next->val = l1->val;
            temp->next->next = NULL;
            l1 = l1->next;
            temp = temp->next;
        }
        else{ 
            temp->next = (struct ListNode*) malloc(sizeof(struct ListNode));
            temp->next->val = l2->val;    
            temp->next->next = NULL;
            l2 = l2->next;
            temp = temp->next;
        }
    }
    
    while(l1!=NULL){
         struct ListNode* l =(struct ListNode*)malloc(sizeof(struct ListNode));
        l->val = l1->val;
            temp->next = l;
        temp->next->next = NULL;
            l1 = l1->next;
            temp = temp->next;
    }
    
     while(l2!=NULL){
        struct ListNode* l = (struct ListNode*)malloc(sizeof(struct ListNode));
         l->val = l2->val;
            temp->next = l;
         temp->next->next = NULL;
            l2 = l2->next;
            temp = temp->next;
    }
    
    return ans->next;
}
