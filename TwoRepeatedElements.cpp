//TC : O(n) || SC : O(1)
class Solution {
  public:
    vector<int> twoRepeated (int arr[], int n) {
        vector<int> v;
        for(int i=0;i<n+2;i++)
        {
            int ind=abs(arr[i]);
            if(arr[ind-1] > 0)
            arr[ind-1] =- arr[ind-1];
            else
            v.push_back(abs(arr[i]));
        }
        return v;
    }
};