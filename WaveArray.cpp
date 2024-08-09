//Easiest Approach || Time Complexity : O(n)
class Solution{
    public:
    void convertToWave(int n, vector<int>& arr){
        for(int i=1;i<n;i=i+2)
            swap(arr[i-1],arr[i]);
    }
};