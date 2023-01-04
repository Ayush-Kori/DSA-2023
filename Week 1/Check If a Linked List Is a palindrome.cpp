class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    Node* findMid( Node* head){
        Node* slow = head;
        Node* fast = head->next;
        while( fast and fast->next ){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    Node* reverse( Node* head ){
       
        Node*prev=NULL;
         Node*curr=head;
       Node*forward=NULL;
    
    while(curr !=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        
    }
    return prev;
       
    }
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        if( !head or !head->next ) 
            return true;
        Node* mid = findMid(head);
        Node* newHead = reverse(mid->next);
        mid->next = NULL;
        
        while( head and newHead ){
            
            if( (head->data) != (newHead->data) )
                return false;
            
            head = head->next;
            newHead = newHead->next;
        }
        return true;
    }
};