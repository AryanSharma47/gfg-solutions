/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/
//Easy Approach || Simple Logic
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head==NULL || head->next==NULL)
        return head;
        
        struct Node* prev=NULL;
        struct Node* curr=head;
        while(curr!=NULL)
        {
            struct Node* fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        return prev;
    }
    
};