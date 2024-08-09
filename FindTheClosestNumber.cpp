//Simple Approach
class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        int max = INT_MAX;
        int ans = 0;
        
        for(int i=0;i<n;i++)
        {
            if(abs(arr[i]-k) <= max)
            {
                max = abs(arr[i]-k);
                ans = arr[i];
            }
        }
        return ans;
    } 
};