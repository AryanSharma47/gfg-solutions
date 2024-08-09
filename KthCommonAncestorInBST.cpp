//Simple Approach
class Solution
{
    public:
    void solve(Node *root,int x,int y,vector<int> &v)
    {
        if(root==NULL)
        return;
        
        v.push_back(root->data);
        
        if(x<root->data && y<root->data)
        solve(root->left,x,y,v);
        
        if(x>root->data && y>root->data)
        solve(root->right,x,y,v);
    }
    
    int kthCommonAncestor(Node *root, int k,int x, int y)
    {
        vector<int> v;
        solve(root,x,y,v);
        
        reverse(v.begin(),v.end());
        return (v.size() < k) ? -1 : v[k-1];
    }
};

