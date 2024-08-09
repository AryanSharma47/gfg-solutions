//Simple Approach
class Solution
{
    public:
    void inorder(Node *root,vector<int> &v)
    {
        if(root ==NULL)
        return;
        
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    
    vector<int> serialize(Node *root) 
    {
        vector<int> v;
        
        if(root == NULL)
        return v;
        
        
        inorder(root,v);
        
        return v;
    }
    
    
    Node* construct(vector<int> A, int s, int e)
    {
        if(s > e)
        {
            return NULL;
        }
        int mid = s + (e - s)/2;
        Node* root = new Node(A[mid]);
        root -> left = construct(A, s, mid - 1);
        root -> right = construct(A,mid + 1, e);
        
        return root;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
         int n = A.size() - 1;
        Node* root = construct(A, 0, n);
        
       return root;
    }

};