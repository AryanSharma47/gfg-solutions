//Easiest Solution
class Solution {
  public:
    vector<int> Series(int n) {
        int mod=1e9+7;
        vector<int>ans;
       
        if(n==1)
        {
        ans.push_back(0);
        ans.push_back(1);
        return ans;
        }
        
        if(n==2)
        {
        ans.push_back(0);
        ans.push_back(1);
        ans.push_back(1);
        return ans;
        }
        if(n>2)
        {
            ans.push_back(0);
            ans.push_back(1);
        }
        for(int i=2;i<=n;i++)
        {
            ans.push_back((ans[i-1]+ans[i-2])%mod);
        }
        return ans;
    }
};
