//Simple Approach
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int,int> mp;
        
        for(auto i : nums)
        mp[i%k]++;
        
        for(auto i : nums)
        {
            int r = i%k;
            int c = (k-r)%k;
            
            if((r==c && mp[r]%2!=0) || (r!=c && mp[c]!=mp[r]))
            return false;
        }
        return true;
    }
};