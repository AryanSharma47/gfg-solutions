//Simple Logic Using Map
class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        unordered_map<int,int> mp;
        vector<int> arr3;
        for(int i=0;i<n;i++)
        {
            if(mp.find(arr1[i]) == mp.end())
            mp[arr1[i]++];
        }
        
        for(int i=0;i<m;i++)
        {
            if(mp.find(arr2[i]) == mp.end())
            mp[arr2[i]++];
        }
        
        for(auto num :mp)
        arr3.push_back(num.first);
        
        sort(arr3.begin(),arr3.end());
        return arr3;
    }
};