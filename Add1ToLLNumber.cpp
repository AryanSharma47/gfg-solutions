//Simple Approach
class Solution {
  public:
    Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        
        while(curr)
        {
            Node *fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
    
    Node* addOne(Node* head) {
        Node *temp = reverse(head);
        Node *org = temp;
        int car = 1;
        
        while(temp->next)
        {
            temp->data = (temp->data+car);
            car = temp->data / 10;
            temp->data = (temp->data)%10;
            
            temp = temp->next;
        }
        
        //Last Node
        temp->data = (temp->data+car);
        car = temp->data / 10;
        temp->data = (temp->data)%10;
        
        if(car > 0)
        {
            Node *newNode = new Node(car);
            temp->next = newNode;
        }
        
        return reverse(org);
    }
};