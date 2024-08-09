//Using Binary Search
class Solution {
  public:
    bool search(vector<int> &arr, int n, int x, int pos)
    {
        int low = 0,high = n-1;
        
        while(low <= high)
        {
            int mid = low+(high-low)/2;
            
            if(arr[mid] == x && mid != pos)
            return true;
            
            else if(arr[mid] < x)
            low = mid+1;
            
            else
            high = mid-1;
        }
        return false;
    }
    
    int findPair(int n, int x, vector<int> &arr) 
    {
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            int target = arr[i]+x;
            if(search(arr,n,target,i))
            return 1;
        }
        return -1;
    }
};


//Using Hash Table
class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) 
    {
        unordered_map<int,int> mp;
        
        for(auto i : arr)
        {
            mp[i]++;
            
            if(x == 0 && mp[i] == 2)
            return 1;
        }
        
        if(x == 0)
        return -1;
        
        for(auto j : mp)
        {
            if(mp.find(x+j.first) != mp.end())
            return 1;
        }
        return -1;
    }
};