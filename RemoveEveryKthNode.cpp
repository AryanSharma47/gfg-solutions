//Simple Approach
class Solution {
    public:
    Node* deleteK(Node *head,int k){
      int i =1;
      if(i == k)
      return NULL;
      
      Node *temp = head;
      
      while(temp && temp->next)
      {
          if(i+1 == k)
          {
              temp->next = temp->next->next;
              i = 0;
          }
          
          i++;
          temp = temp->next;
      }
      return head;
    }
};