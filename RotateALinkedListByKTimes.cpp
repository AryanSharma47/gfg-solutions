//Simple Approach
class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        Node *slow = head;
        Node *fast = NULL,*temp = NULL;
        
        while(k-- > 1)
        slow = slow->next;
        
        if(!slow->next)
        return head;
        
        fast = temp = slow->next;
        slow->next = NULL;
        
        while(fast->next)
        fast = fast->next;
        
        fast->next = head;
        head = temp;
        
        return head;
    }
};