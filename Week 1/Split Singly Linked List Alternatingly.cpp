void alternatingSplitList(struct Node* head) 
{
    //Your code here
   
     Node* odd=new Node(0);
    Node* even=new Node(0);
    int c=0;
    Node* temp=head;
    Node* firstp=odd;
    Node* secondp=even;
    while(temp){
        if(c%2==0){
            firstp->next=temp;
            firstp=firstp->next;
        }else{
            secondp->next=temp;
            secondp=secondp->next;
        }
        temp=temp->next;
        c++;
    }
    firstp->next=NULL;
    secondp->next=NULL;
    a=odd->next;
    b=even->next;
   
    
}