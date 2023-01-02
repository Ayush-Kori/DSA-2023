

void deleteAlt(struct Node *head){
    // Code here
    
    // Node* curr = head;
    
    
    while(head and head->next){
        
        head->next = head->next->next;
        head = head->next;
        
    }
}
