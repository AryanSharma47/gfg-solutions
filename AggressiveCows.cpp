//Simple Brute Force
class Solution {
public:
    bool possible(vector<int> arr,int dist,int cows)
    {
        int myCows = 1,last = arr[0];
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-last >= dist)
            {
                myCows++;
                last = arr[i];
            }
        }
        return myCows >= cows;
    }

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int limit= stalls[n-1]-stalls[0];
        
        for(int i=1;i<=limit;i++)
        {
            if(possible(stalls,i,k))
            continue;
            else
            return i-1;
        }
        return limit;
    }
};


//Optimal Approach
//Binary Search
class Solution {
public:
    bool possible(vector<int> arr,int dist,int cows)
    {
        int myCows = 1,last = arr[0];
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-last >= dist)
            {
                myCows++;
                last = arr[i];
            }
        }
        return myCows >= cows;
    }
    
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int low = 1,high = stalls[n - 1] - stalls[0];
        
        
        while(low <= high)
        {
            int mid = (low+high)/2;
            
            if(possible(stalls,mid,k))
            low = mid+1;
            else
            high =  mid-1;
        }
        return high;
    }
};