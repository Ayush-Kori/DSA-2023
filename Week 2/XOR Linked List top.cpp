struct Node *insert(struct Node *head, int data) {
    // Code here
     Node* temp = new Node(data);
     temp->npx = head;
     if(head!=NULL){
         head->npx = XOR(temp,head->npx);
     }
     
     return temp;
}

vector<int> printList(struct Node *head) {
    // Code here
    
    vector<int> v;
    struct Node* prev = NULL;
    
    while(head!=NULL){
        
        v.push_back(head->data);
        Node* t = head;
        head = (XOR(prev,head->npx));
        prev = t;
    }
    
    return v;
   
}