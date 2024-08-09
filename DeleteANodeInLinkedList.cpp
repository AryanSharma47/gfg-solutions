//Easy Approach || Simple Logic

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

Node* deleteNode(Node *head,int x)
{
     if(x == 1){
        return head->next ; 
    }
    Node *temp=head;
    int c=1;
    while(c<x-1)
    {
        temp=temp->next;
        c++;
    }
    temp->next=temp->next->next;
    return head;
}