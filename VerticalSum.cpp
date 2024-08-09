//Simple Recursive Approach
class Solution{
  public:
    map<int,int>mp;
    
    void solve(Node *root,int pos)
    {
        if(root == NULL)
        return;
        
        mp[pos] += root->data;
        
        solve(root->left,pos-1);
        solve(root->right,pos+1);
    }
    
    vector <int> verticalSum(Node *root) 
    {
        solve(root,0);
        
        vector<int> res;
        
        for(auto it : mp)
        res.push_back(it.second);
        
        return res;
    }
};