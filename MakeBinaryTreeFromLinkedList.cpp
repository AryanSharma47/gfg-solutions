//Simple Approach
class Solution {
  public:
    void convert(Node *head, TreeNode *&root) {
        queue<TreeNode*> q;
        
        if(head == NULL)
        return;
        
        root = new TreeNode(head->data);
        q.push(root);
        head = head->next;
        
        while(head && !q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            
            if(head)
            {
                TreeNode *lt = new TreeNode(head->data);
                temp->left = lt;
                q.push(lt);
                head = head->next;
            }
            if(head)
            {
                TreeNode *rt = new TreeNode(head->data);
                temp->right = rt;
                q.push(rt);
                head = head->next;
            }
        }
        
    }
};