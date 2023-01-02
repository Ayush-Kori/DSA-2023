
struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    
    Node* p1 = head1;
    Node* p2 = head2;
    
    map<int,int> mp;
    
    while(p1){
        
        int x = p1->data;
        mp[x]++;
        p1 = p1->next;
    }
    
    
     while(p2){
        
        int x = p2->data;
        mp[x]++;
        p2 = p2->next;
        
    }
    
    
    Node* temp = new Node(0);
    Node* dummy = temp;
    for(auto it: mp){
        
        Node* y = new Node(it.first);
        temp->next = y;
        temp = temp->next;
        
    }
    
    return dummy->next;
}