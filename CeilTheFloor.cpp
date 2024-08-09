//Simple Ceil and Floor of a number
class Solution {
  public:
    int findFloor(vector<int> arr,int x)
    {
        int ans = INT_MIN,n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] <= x)
            {
                ans = max(arr[i],ans);
            }
        }
        return ans == INT_MIN ? -1 : ans;
    }
    
    int findCeil(vector<int> arr,int x)
    {
        int ans = INT_MAX,n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] >= x)
            {
                ans = min(arr[i],ans);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
    
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int fl = findFloor(arr,x);
        int cl = findCeil(arr,x);
        
        return {fl,cl};
    }
};