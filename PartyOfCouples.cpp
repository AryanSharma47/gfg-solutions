//First Approach || Space efficient
class Solution{
    public:
    int findSingle(int n, int arr[]){
        int res=arr[0];
        
        for(int i=1;i<n;i++)
        res = res^arr[i];
        
        return res;
    }
};

//Second Approach
class Solution{
    public:
    int findSingle(int n, int arr[]){
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        
        for(const auto& people : mp)
        {
            if(people.second != 2)
            return people.first;
        }
        return -1;
    }
};