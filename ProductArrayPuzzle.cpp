//Simple Approach
class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        long long int n = nums.size();
        vector<long long int> front(n+1,1);
        front[n-1] = nums.back();
        
        for(int i=n-2;i>=0;i--)
        front[i] = front[i+1]*nums[i];
        
        long long int prev = 1;
        vector<long long int> ans(n);
        
        for(int i=0;i<n;i++)
        {
            ans[i] = prev*front[i+1];
            prev *= nums[i];
        }
        return ans;
    }
};
