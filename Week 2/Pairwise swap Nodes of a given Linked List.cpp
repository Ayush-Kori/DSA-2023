

void pairWiseSwap(Node* head){

    // swap data of a at lest two nodes 
    Node* head = temp;

    while (temp!=NULL and temp->next)
    {
        swap(temp->data, temp->next->data);
        temp = temp->next->next;
    }
    

}