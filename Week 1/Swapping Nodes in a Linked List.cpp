  ListNode* swapNodes(ListNode* head, int k) {
        
       ListNode* curr = head;
       ListNode* left = head;
       ListNode* right = head;

       int counter = 1;

       while(curr!=NULL){

          if(counter<k)
          left = left->next;

          if(counter>k)
          right = right->next;

          curr = curr->next;
          
          counter++;
      

       }

       int temp = left->val;
        left->val = right->val;
        right->val = temp;

        return head;

        

    }