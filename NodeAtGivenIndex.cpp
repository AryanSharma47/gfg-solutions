//Simple Approach || Easy Logic
/*
struct node
{
    int data;
    struct node* next;  
    node(int x){
        data = x;
        next = NULL;
    }
}; 
*/

int GetNth(struct node* head, int index){
  while(index>1)
  {
      head=head->next;
      index--;
  }
  return head->data;
}