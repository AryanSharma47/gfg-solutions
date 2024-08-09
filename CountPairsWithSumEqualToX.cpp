//Easiest Approach Using Hash Table
class Solution{
  public:

    int countPairs(struct Node* head1, struct Node* head2, int x) {
        Node *temp1=head1,*temp2=head2;
        unordered_map<int,int> mp;
        int pairs=0;
        while(temp1)
        {
            mp[temp1->data]++;
            temp1=temp1->next;
        }
        while(temp2)
        {
            if(mp[x-temp2->data] > 0)
            pairs++;
            
            temp2=temp2->next;
        }
        return pairs;
    }
};