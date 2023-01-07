long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long x = 0;
  long long y = 0;
  long long m = 1e9+7;
  Node* p1 = l1;
  Node* p2 = l2;
  
  while(p1){
      x = ((x*10)+p1->data)%m;
      p1 = p1->next;
  }
  
  while(p2){
      y = ((y*10)+p2->data)%m;
      p2 = p2->next;
  }
  
  
  long long ans = (x*y)%m;
  
  return ans;
  
}