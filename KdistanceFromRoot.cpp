//Simple approach
class Solution
{
    public:
    void solve(Node *root,int k,vector<int> &v)
    {
        if(root == NULL)
        return;
        
        if(k == 0)
        v.push_back(root->data);
        
        solve(root->left,k-1,v);
        solve(root->right,k-1,v);
    }
    
    vector<int> Kdistance(struct Node *root, int k)
    {
      vector<int> v;
      
      if(root == NULL)
      return v;
      
      if(k == 0)
      {
          v.push_back(root->data);
          return v;
      }
      
      solve(root,k,v);
      return v;
    }
};