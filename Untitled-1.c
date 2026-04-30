

struct ListNode* removeElements(struct ListNode* head, int val) {
    
    // Create a dummy node to handle deletion of head
    struct ListNode dummy;
    dummy.next = head;
    
    struct ListNode* current = &dummy;
    
    while (current->next != NULL) {
        
        if (current->next->val == val) {
            struct ListNode* temp = current->next;
            current->next = temp->next;
            free(temp);
        } 
        else {
            current = current->next;
        }
    }
    
    return dummy.next;
}
