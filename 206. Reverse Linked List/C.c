struct ListNode* reverseList(struct ListNode* head){
    if(NULL == head || NULL == head -> next){
        return head;
    }
    struct ListNode *p = head -> next;
    head -> next = NULL;
    struct ListNode *newhead=reverseList(p);
    p -> next = head;

    return newhead;
}