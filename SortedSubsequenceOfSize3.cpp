//Optimal Approach
//TC : O(n) || SC : O(n)
class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        int n = arr.size();
        vector<int> left(n,0) , right(n,0);
        
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        
        for(int i=1;i<n;i++)
        left[i] = min(left[i-1],arr[i]);
        
        for(int i=n-2;i>=0;i--)
        right[i] = max(right[i+1],arr[i]);
        
        for(int i=1;i<n-1;i++)
        {
            if(left[i-1]<arr[i] && arr[i]<right[i+1])
            return {left[i-1],arr[i],right[i+1]};
        }
        return {};
    }
};