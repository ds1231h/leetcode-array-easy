struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* head = tmp;
   
    while (l1 != NULL && l2 != NULL)
    {
        if (l1 -> val < l2 -> val)
        {
            tmp -> next = l1;
            l1 = l1 -> next;
        }
        else
        {
       		tmp -> next = l2;
    	    l2 = l2 -> next;
	    }
        tmp = tmp -> next;
    }
    if (l1 == NULL)
    {
        tmp -> next = l2;
    }
    else
    {
        tmp -> next = l1;
    }
    return head -> next;
}

/*
 Merge two sorted list into a sorted one.
 It is necessary to malloc memory of a struct ListNode, but can be used as two different name-tmp/head.
 Using ListNode* head to merge the new list and return head.
 */
