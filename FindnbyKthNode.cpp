//Easiest Approach || Simple Logic
/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
int getLength(struct Node*head)
{
    struct Node *temp=head;
    double len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}

int fractional_node(struct Node *head, int k)
{
    struct Node *temp=head;
    double len=getLength(head);
    double ans=ceil(len/k);
    while(ans>1)
    {
        temp=temp->next;
        ans--;
    }
    return temp->data;
}