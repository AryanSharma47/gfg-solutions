class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
         if(n==1) 
         return 0;
        sort(arr,arr+n);
        int diff=abs(arr[0]-arr[n-1]);
        int small=arr[0]+k;
        int large=arr[n-1]-k;
        for(int i=1;i<n;i++)
        {
            int minimum=min(small,arr[i]-k);
            int maximum=max(large,arr[i-1]+k);
            
            if(minimum<0)
            continue;
            
            diff=min(diff,maximum-minimum);
        }
        return diff;
    }
};