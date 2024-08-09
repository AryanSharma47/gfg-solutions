//Simple Approach 
// TC : O(n)
class Solution{
    public:
    int findSubArraySum(int Arr[], int n, int k)
    {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int presum = 0,count = 0;
        
        for(int i=0;i<n;i++)
        {
            presum += Arr[i];
            
            int remove = presum-k;
            
            count += mp[remove];
            
            mp[presum]++;
        }
        return count;
    }
};