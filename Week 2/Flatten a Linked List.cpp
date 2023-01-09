Node* merge(Node* a,Node* b){
    
    if(a==nullptr)
    return b;
    if(b==nullptr)
    return a;
    
    Node* res =  nullptr;
    if(a->data < b->data){
        res =a;
        res->bottom = merge(a->bottom,b);
    }
    else{
        res = b;
        res->bottom = merge(a,b->bottom);
    }
    
    res->next = nullptr;
    return res;
    
}
    
    
Node *flatten(Node *root)

{
   // Your code here
   if(root==nullptr || root->next==nullptr)
   return root;
   
   return merge(root,flatten(root->next));
}
