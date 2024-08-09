//Simple Recursive Approach
class Solution
{
    public:
    
    Node *helper(int in[],int post[],int inStart,int inEnd,int &postInd,unordered_map<int,int> &indexMap)
    {
        if(inStart > inEnd)
        return NULL;
        
        Node *root = new Node(post[postInd--]);
        
        if(inStart == inEnd)
        return root;
        
        int inInd = indexMap[root->data];
        
        root->right = helper(in,post,inInd+1,inEnd,postInd,indexMap);
        root->left = helper(in,post,inStart,inInd-1,postInd,indexMap);
        
        return root;
    }
    
    Node *buildTree(int in[], int post[], int n) {
       unordered_map<int,int> indexMap(n);
       
       if(n <=0)
       return NULL;
       
       for(int i=0;i<n;i++)
       indexMap[in[i]] = i;
       
       int postInd = n-1;
       
       return helper(in,post,0,n-1,postInd,indexMap);
    }
};