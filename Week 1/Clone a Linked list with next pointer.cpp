
Node* copyList(Node* head){

 // step 1 create a clone list
 Node* cloneHead = NULL;
 Node* cloneTail = NULL;

 Node* temp  = head;

 while(temp!=NULL){

    insertAtTail(cloneHead,cloneTail,temp->data);
    temp = temp->next;
 }

 // create a map
   
    unordered_map<Node*,Node*> oldToNewNode;

    temp = head;
      
     Node* temp2 =  

}