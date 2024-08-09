//Easiest Approach || Simple Traversal
/*structure of the node of the DLL is as
struct Node {
	int data;
	struct Node* prev, *next;
};
*/

Node* sortedInsert(Node * head, int x)
{
    Node *newNode=getNode(x);
    if(head->data >= x)
    {
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
        return head;
    }
    
	Node *temp=head;
	while(temp->next!=NULL && temp->next->data < x)
	    temp=temp->next;
	
	if(temp->next==NULL)
	{
	    temp->next=newNode;
	    newNode->prev=temp;
	    return head;
	}
	else
	{
	Node *fwd=temp->next;
	temp->next=newNode;
	newNode->prev=temp;
	newNode->next=fwd;
	fwd->prev=newNode;
	return head;
	}
};