struct ListNode* swapPairs(struct ListNode* head){
    
    struct ListNode *pGuardNode = (struct ListNode*)malloc(sizeof(struct ListNode)) ;
    struct ListNode*pre = pGuardNode;
    pGuardNode->next = head;
    while (pre->next && pre->next->next) {
        struct ListNode *t = pre->next->next;
        pre->next->next = t->next;
        t->next = pre->next;
        pre->next = t; /*in the first loop change pGuardNode->next*/
            
        pre = t->next;
    }
    return pGuardNode->next;

struct ListNode* swapPairs(struct ListNode* head){
    
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode *p = head->next;
    head->next = swapPairs(head->next->next);
    p->next = head;
    return p;
}
