//Simple Approach
class Solution
{
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
        int mod=1e9+7;
        vector<long long> v(n+1);
        v[0]=v[1]=1;
        
        for(int i=2;i<=n;i++)
        {
            v[i]=0;
            for(int j=0;j<i;j++)
            {
               v[i]=(v[i]+((v[j] * v[i-j-1])%mod))%mod;
            }
        }
        return v[n];
    }
};