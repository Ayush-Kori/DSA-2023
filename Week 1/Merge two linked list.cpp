Node* sortedMerge(Node* head1, Node* head2)  
{  
   
    
      if(head1 ==NULL and head2 ==NULL)
        return NULL;
    
    
    Node* temp  = new Node(-1);
    Node* res = temp;
    
    
    
    
    while(head1!=NULL and head2!=NULL){
        
        if(head1->data < head2->data){
            
          Node *new_Node = new Node(head1->data);
            temp->next = new_Node;
            temp = new_Node;
            head1= head1->next;
        
        }
        
        else{
            
           
            Node *new_Node = new Node(head2->data);
            temp->next = new_Node;
            temp = new_Node;
            head2 = head2->next;
            
        }
        
        
    }
    while(head1!=NULL){
        
        
          Node *new_Node = new Node(head1->data);
            temp->next = new_Node;
            temp = new_Node;
            head1= head1->next;
            
        
    }
    
    while(head2!=NULL){
        
          Node *new_Node = new Node(head2->data);
            temp->next = new_Node;
            temp = new_Node;
            head2= head2->next;
        
    }
    return res->next;
     
     
}  