//Using Recursion 
bool search(Node* root, int x) {
    if(root == NULL)
     return false;
     
    if(root->data == x)
    return true;
    
    if(root->data < x)
     return search(root->right,x);
     
    if(root->data > x)
     return search(root->left,x);
     
}

//Iterative Approach
bool search(Node* root, int x) {
    if(root == NULL)
    return false;
    
    Node *curr=root;
    while(curr!=NULL)
    {
        if(curr->data == x)
        return true;
        
        else if(curr->data < x)
        curr=curr->right;
        
        else
        curr=curr->left;
    }
    return false;
}