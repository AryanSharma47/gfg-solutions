//TC : O(Logx) || SC : O(1)
class Solution {
  public:
    long long reversedBits(long long x) {
       long long dec=0;
       int i=0,j=0;
       vector<int> bin(32,0);
       
       while(x)
       {
           bin[i++]=x%2;
           x=x/2;
       }
       
       for(int i=31;i>=0;i--)
       dec += bin[i]*pow(2,j++);
       
       return dec;
    }
};