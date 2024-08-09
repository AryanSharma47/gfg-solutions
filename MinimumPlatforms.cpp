//Best Approach || Time Complexity : O(nLogn) || Space Complexity : O(1)
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int aindex=0,dindex=0;
    	int platform=0;
    	while(aindex<n && dindex<n)
    	{
    	    if(arr[aindex]<=dep[dindex])
    	    platform++;
    	    else
    	    dindex++;
    	    
    	    aindex++;
    	}
    	return platform;
    }
};