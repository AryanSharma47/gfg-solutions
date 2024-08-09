//Simple Approach
void solve(Node *root,vector<int> &v)
{
    if(root == NULL)
    return;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        int s = q.size();
        for(int i=0;i<s;i++)
        {
            Node *front = q.front();
            q.pop();
            
            if(front->left && !front->right)
            v.push_back(front->left->data);
            
            if(front->right && !front->left)
            v.push_back(front->right->data);
            
            if(front->left)
            q.push(front->left);
            
            if(front->right)
            q.push(front->right);
        }
    }
    sort(v.begin(),v.end());
}

vector<int> noSibling(Node* node)
{
    vector<int> ans;
    
    if(node == NULL)
    return {-1};

    solve(node,ans);
    
    if(ans.size() == 0)
    return {-1};
    else
    return ans;
}