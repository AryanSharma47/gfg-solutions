//Using map
class Solution {
  public:
    Node *createTree(vector<int> parent) {
        
        unordered_map<int,Node*> mp;
        Node *root = NULL;
        
        for(int i=0;i<parent.size();i++)
        mp[i] = new Node(i);
        
        for(int i=0;i<parent.size();i++)
        {
            if(parent[i] == -1)
            root = mp[i];
            else
            {
                if(mp[parent[i]]->left == NULL)
                mp[parent[i]]->left = mp[i];
                else
                mp[parent[i]]->right = mp[i];
            }
        }
        return root;
    }
};