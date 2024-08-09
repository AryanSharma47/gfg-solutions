//Simple Solution
class Solution {
  public:
    vector<int> arr1,arr2;
    void inorder(Node *root,vector<int> &arr)
    {
        if(!root)
        return;
        
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    
    vector<int> merge(Node *root1, Node *root2) {
        inorder(root1,arr1);
        inorder(root2,arr2);
        
        
        int n = arr1.size(),m = arr2.size();
        
        vector<int> ans(n+m,0);
        
        int i = 0, j = 0, k = 0;

        while (i < n && j < m) 
        {
            if (arr1[i] < arr2[j]) 
            ans[k++] = arr1[i++];
            else 
            ans[k++] = arr2[j++];
            
        }
        while (i < n) 
        ans[k++] = arr1[i++];
        while (j < m) 
        ans[k++] = arr2[j++];

        return ans;
    }
};