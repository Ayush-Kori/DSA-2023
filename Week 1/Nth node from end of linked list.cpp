int length (Node* head){
    
    int count = 0;
    
    while(head){
        head = head->next;
        count++;
    }
    
    return count;
    
}


int getNthFromLast(Node *head, int n)
{
       // Your code here
       
       int l = length(head);
       
       int m = l - n;
       
       
       if(n>l)
        return -1;
       
       while(m){
           
             
           head = head->next;
          
           m--;
       }


   
       
       return head->data;
       
       
       
}