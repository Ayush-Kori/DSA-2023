Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
   Node *p1 = head1;
  Node *p2 = head2;
  Node *result = nullptr;
  Node *tail = nullptr;

  while (p1 != nullptr && p2 != nullptr) {
    if (p1->data < p2->data) {
      p1 = p1->next;
    } else if (p1->data > p2->data) {
      p2 = p2->next;
    } else {
      
      if (result == nullptr) {
        result = new Node(p1->data);
        tail = result;
      } else {
        tail->next = new Node(p1->data);
        tail = tail->next;
      }
      p1 = p1->next;
      p2 = p2->next;
    }
  }

  return result;
    
}