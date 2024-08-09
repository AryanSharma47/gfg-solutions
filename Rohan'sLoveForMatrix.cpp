//Simple Approach
class Solution {
  public:
    int firstElement(int n) {
        int f=1,s=1,ans=0;
        if(n <=2)
        return 1;
        
        for(int i=0;i<n-2;i++)
        {
            ans = (f+s)%1000000007;
            f = s;
            s = ans;
        }
        return ans;
    }
};