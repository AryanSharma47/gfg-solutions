//Iterative Approach
vector <int> postOrder(Node* root)
{
    stack<Node*> s;
    s.push(root);
    
    vector<int> v;
    
    while(!s.empty())
    {
        Node *temp=s.top();
        s.pop();
        
        v.push_back(temp->data);
        
        if(temp->left)
        s.push(temp->left);
        
        if(temp->right)
        s.push(temp->right);
    }
    reverse(v.begin(),v.end());
    return v;
}


//Recursive Approach
void helper(Node *root,vector<int> &v)
{
    if(root==NULL)
    return;
    
    helper(root->left,v);
    helper(root->right,v);
    v.push_back(root->data);
}

vector <int> postOrder(Node* root)
{
    vector<int> v;
    helper(root,v);
    return v;
}