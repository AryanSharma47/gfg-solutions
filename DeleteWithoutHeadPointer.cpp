//Easiest Approach || Time Complexity : O(1)
class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       del_node->data=del_node->next->data;
       del_node->next=del_node->next->next;
    }

};