//Simple Approach
class Solution {
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> ans;
        int maxi = INT_MIN;
        
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i] >= maxi)
            {
                maxi = arr[i];
                ans.push_back(arr[i]);
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};