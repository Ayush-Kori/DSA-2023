  ListNode* swapPairs(ListNode* head) {
        
        
        
        
        if(head==NULL)
            return 0;
        
        if(head->next==NULL)
            return head;
        
            
        ListNode* temp =head;
        ListNode* temp1 = head->next;
          
        ListNode* temp2 = swapPairs(temp1->next);
        
        temp1->next = temp;
        temp->next = temp2;
        
        return temp1;
    } 