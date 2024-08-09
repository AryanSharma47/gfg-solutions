//Simple Approach
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        if(head == NULL || head->next == NULL)
        return head;
        
        Node *slow = head;
        Node *fast = head;
        Node *prev = NULL;
        
        while(fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next;
        delete slow;
        
        return head;
    }
};