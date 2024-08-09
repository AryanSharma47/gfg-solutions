//Simple Logic
class Solution {
  public:
    int min_operations(vector<int>nums)
    {
       int n=nums.size(),lis=1;
        vector<int>dp(n,1);
        
        for(int i=1;i<n;i++) 
        {
            for(int j=0;j<i;j++) 
            {
                if(i-j<=nums[i]-nums[j]) 
                  dp[i]=max(dp[i],dp[j]+1);
            }
            lis=max(lis,dp[i]);
        }
        return n-lis;
	}
};