//Simple Approach
vector<int> reverseLevelOrder(Node *root)
{
    vector<int> v;
    
    if(root == NULL)
    return v;
    
   queue<Node*> q;
   q.push(root);
   
   while(!q.empty())
   {
       int s = q.size();
       for(int i=0;i<s;i++)
       {
           Node *front = q.front();
           q.pop();
           
           v.push_back(front->data);
           
           if(front->right)
           q.push(front->right);
           
           if(front->left)
           q.push(front->left);
       }
       
    }
   
   reverse(v.begin(),v.end());
   
   return v;
}