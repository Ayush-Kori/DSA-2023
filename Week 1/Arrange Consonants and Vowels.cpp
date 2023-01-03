struct Node* arrange(Node *head)
{
   //Code here
   Node* temp = new Node(-1);
   Node* vow = temp;
   
   Node* temp1 = new Node(-1);
   Node* con = temp1;
   Node* con1 = con;
   
   while(head){
       
       
       if(head->data=='a' || head->data == 'e' || head->data == 'i'
         || head->data == 'o' || head->data == 'u'){
              
              temp->next = new Node(head->data);
              temp = temp->next;
              
          }
          
        else{
            
           con->next = new Node(head->data);
           con = con->next;  
            
        } 
        
        head = head->next;
       
   }
   
   
     temp->next = temp1->next;
     
     return vow->next;
}
