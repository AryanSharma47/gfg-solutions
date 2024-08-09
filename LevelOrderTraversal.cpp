//Easiest Approach
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      vector<int> v;
      queue<Node*> q;
      q.push(root);
      
      while(!q.empty())
      {
          Node *node=q.front();
          v.push_back(node->data);
          q.pop();
          
          if(node->left)
          q.push(node->left);
          
          if(node->right)
          q.push(node->right);
          
      }
      return v;
    }
};