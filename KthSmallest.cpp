//Simple Approach
class Solution {
  public:
    // k : find kth smallest element and return using this function without sorting
    int kthSmallest(vector<int> &arr, int k) {
        int maxi=*max_element(arr.begin(), arr.end());
        vector<int> map(maxi+1,0);
        
        for(int i=0;i<arr.size();i++)
        map[arr[i]]++;
        
        for(int i=0;i<map.size();i++)
        {
            if(map[i] != 0)   
            k--;
            if(k == 0)   
            return i;
        }
        
        return 0;
    }
};