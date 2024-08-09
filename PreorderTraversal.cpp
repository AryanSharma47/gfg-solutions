//Iterative Approach
vector <int> preorder(Node* root)
{
  vector<int> v;
  stack<Node*> s;
  
  s.push(root);
  while(!s.empty())
  {
      root=s.top();
      s.pop();
      v.push_back(root->data);
      
      if(root->right)
      s.push(root->right);
      
      if(root->left)
      s.push(root->left);
      
  }
  return v;
}


//Recursive Approach
void helper(Node *root,vector<int> &v)
{
    if(root==NULL)
    return;
    
    v.push_back(root->data);
    helper(root->left,v);
    helper(root->right,v);
}

vector <int> preorder(Node* root)
{
  vector<int> v;
  helper(root,v);
  return v;
}