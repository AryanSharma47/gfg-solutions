//Simple Approach
class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        int n = arr.size();
        vector<int> ans(n,0);
        vector<int> sorted;
        
        for(int i=n-1;i>=0;i--)
        {
            auto it = lower_bound(sorted.begin(),sorted.end(),arr[i]);
            ans[i] = distance(sorted.begin(),it);
            sorted.insert(it,arr[i]);
        }
        return ans;
    }
};