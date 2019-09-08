struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *temp;
    struct ListNode *pPre,*pCur;
    pCur = head;
    pPre = NULL;
    while(pCur !=NULL){
        temp = pCur->next;
        pCur->next = pPre;
        pPre = pCur;
        pCur = temp;
    }
    return pPre;
}


struct ListNode* reverseList(struct ListNode* head){
    if (!head || !(head -> next)) {
            return head;
        }
    struct ListNode* node = reverseList(head -> next);  
    head -> next -> next = head;
    head -> next = NULL;  /* Tail pointing NULL*/
    return node;
}
