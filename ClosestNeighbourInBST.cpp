//First Approach Using Inorder Traversal
class Solution {
  public:
    void inorder(Node *root,vector<int> &v)
    {
        if(root==NULL)
        return;
        inorder(root->left,v);
        v.push_back(root->key);
        inorder(root->right,v);
    }
    
    int findMaxForN(Node* root, int n) {
        vector<int> v;
        inorder(root,v);
        
        for(int i=v.size()-1;i>=0;i--)
        {
           if(v[i] <= n)
           return v[i];
        }
        return -1;
    }
};


//Second Approach Using Recursion
class Solution {
  public:
    void helper(Node *root,int n,int &ans)
    {
       if(root==NULL)
       return;
       
       if(root->key == n)
       {
           ans=root->key;
           return;
       }
       
       else if(root->key < n)
       {
           ans=root->key;
           helper(root->right,n,ans);
       }
       else
       {
           helper(root->left,n,ans);
       }
       return;
    }
    
    int findMaxForN(Node* root, int n) {
        int ans=-1;
        
        helper(root,n,ans);
        
        if(ans==-1)
        return -1;
        else
        return ans;
    }
};