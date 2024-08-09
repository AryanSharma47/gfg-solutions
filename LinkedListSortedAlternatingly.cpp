//Easiest Approach || Time Complexity : O(n)
class Solution
{
    public:
    void insert(Node* &newHead,Node* &newTail,int d)
    {
        Node *newNode=new Node(d);
        if(newHead==NULL)
        {
            newHead=newNode;
            newTail=newNode;
        }
        else
        {
            newTail->next=newNode;
            newTail=newNode;
        }
    }
    
    void sort(Node **head)
    {
         vector<int> v;
         
         Node *temp=*head;
         while(temp!=NULL)
         {
            v.push_back(temp->data);
            temp=temp->next;
         }
         
         std::sort(v.begin(),v.end());
         
         Node *newHead=NULL,*newTail=NULL;
         
         for(int i=0;i<v.size();i++)
         {
             insert(newHead,newTail,v[i]);
         }
         *head=newHead;
    }
};