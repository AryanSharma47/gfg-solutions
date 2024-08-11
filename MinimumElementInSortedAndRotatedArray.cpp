//Simple Binary Search
class Solution {
  public:
    int findMin(int arr[], int n) {
        int low = 0,high = n-1;
        int ans = INT_MAX;
        
        while(low <= high)
        {
            int mid = (low+high)/2;
            
            if(arr[low] <= arr[high])
            {
                ans = min(ans,arr[low]);
                break;
            }
            else if(arr[low] <= arr[mid])
            {
                ans = min(ans,arr[low]);
                low = mid+1;
            }
            else
            {
                ans = min(ans,arr[mid]);
                high = mid-1;
            }
        }
        return ans;
    }
};