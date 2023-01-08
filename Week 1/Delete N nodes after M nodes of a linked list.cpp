class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here  
       Node* curr = head;
       Node* prev = head;
       
       while(curr!=NULL){
           for(int i=0;i<M and curr!=NULL;i++){
               prev = curr;
               curr = curr->next;
           }
           for(int j=0;j<N and curr!=NULL;j++){
               curr = curr->next;
           }
           
           prev->next = curr;
       }
       
       
    }
};
