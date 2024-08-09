//First Approach Using While Loop
class Solution {
  public:
    int minValue(Node* root) {
        while(root->left)
        root=root->left;
        
        return root->data;
    }
};


//Second Approach Using Recursion || One Liner Code
class Solution {
  public:
    int minValue(Node* root) {
        return root->left ? minValue(root->left) : root->data;
    }
};