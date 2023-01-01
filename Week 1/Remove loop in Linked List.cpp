class Solution
{
    public:
    //Function to remove a loop in the linked list.
    Node *detectCycle(Node *head) {
  Node *slow = head;
  Node *fast = head;


  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      break;
    }
  }


  if (!fast || !fast->next) {
    return nullptr;
  }


 Node *finder = head;
  while (finder != slow) {
    finder = finder->next;
    slow = slow->next;
  }

  return finder;
}
    
    
    void removeLoop(Node* head)
    {
          
          if(head==NULL)
          return;
          
          Node* x=  detectCycle(head);
          
          if(x==NULL)
          return;
          
          Node* temp = x;
          
          while(temp->next!=x){
             temp = temp->next;
          }
          
          temp->next = NULL;
          
    }
};