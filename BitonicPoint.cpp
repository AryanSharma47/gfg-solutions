//Easiest Approach || Time Complexity : O(logn)
class Solution{
public:
	int findMaximum(int arr[], int n) {
	    int l=0,r=n-1;
	    while(l<=r)
	    {
	        int mid=l+(r-l)/2;
	        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
	        return arr[mid];
	        
	        else if(arr[mid]<arr[mid+1])
	        l=mid+1;
	        
	        else if(arr[mid]<arr[mid-1])
	        r=mid-1;
	    }
	}
};