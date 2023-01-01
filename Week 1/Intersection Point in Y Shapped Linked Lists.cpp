

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    
     if(head1==NULL || head2==NULL)
     return NULL;
     
     Node* a = head1;
     Node* b = head2;
     
     
     while(a!=b){
         
             if (a == NULL) {
            a = head2;
           } else {
               a = a->next;
             }
             b=b==NULL?head1:b->next;
             
     }
    
    return a->data;
    
}

