class Solution{
    public:
    int lenOfLongSubarr(int A[],  int n, int k) 
    { 
        unordered_map<int,int> mp;
        long long sum = 0;
        int len = 0;
        
        for(int i=0;i<n;i++)
        {
            sum  += A[i];
            
            if(sum == k)
            len = max(len,i+1);
            if(mp.find(sum-k) != mp.end())
            len = max(len,i-mp[sum-k]);
            if (mp.find(sum) == mp.end())
            mp[sum] = i;
        }
        return len;
    } 

};