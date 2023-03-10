class Solution
{
    public:
    
   
    
    struct node *reverse (struct node* head, int k)
    { 
        // Complete this method
       node* prev = NULL;
       node* curr = head;
       node* next;
       
       int count =0;
        while(curr!=nullptr and count<k){
            
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
            
        }
        
        
        if(next!=NULL){
            head->next = reverse(next,k);
        }
        
        return prev;
        
    }
};
