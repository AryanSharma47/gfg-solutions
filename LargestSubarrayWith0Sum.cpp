//Simple Approach
class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {
        unordered_map<int,int> first_occ;
        int presum = 0;
        int maxLen = 0;
        
        for(int i=0;i<n;i++)
        {
            presum += arr[i];
            
            if(presum == 0)
            maxLen = i+1;
            else if(first_occ.find(presum) != first_occ.end())
            maxLen = max(maxLen,i-first_occ[presum]);
            else
            first_occ[presum] = i;
        }
        return maxLen;
    }
};