

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
     
       Node* s = head;
       Node* end = head;
       
       while(end->next!=NULL){
           end = end->next;
       }
       
       for(int i=1 ; i<=k ;i++){
           
           end->next = s;
           s = s->next;
           end = end->next;
           end->next = NULL;
           
       }
       
       
       
       
        return s;
        
    }
};
    