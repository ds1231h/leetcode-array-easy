struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* tmp = head;
    while (tmp != NULL && tmp -> next != NULL)
    {
        if (tmp -> val == tmp -> next -> val)
        {
            tmp -> next = tmp -> next -> next;
        }
        else tmp = tmp -> next;
    }
    return head;
}

/*
 This title requires to remove the duplicates from a sorted list.

 First, we need to confirm this(now) node as well as the next node are not NULL, or we can not compire their value. Besides, if this node's value is equal to the next code's value, then this node' next node will be connected with the next node's next value. This means, the next node move right but this node do not. Otherwise, the list move right together.
 */
