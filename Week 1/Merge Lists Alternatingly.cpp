void mergeList(struct Node **p, struct Node **q)
{
     // Code here
    
     Node* t1 = (*p), *t2 = (*q), *temp;
 while(t1 && t2){
   temp = t2->next;
   t2->next = t1->next;
   t1->next = t2;
   t1 = t2->next;
   t2 = temp;
   *q = t2;
 } 
    
}