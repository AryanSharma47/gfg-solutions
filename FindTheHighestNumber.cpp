//Simple Approach || TC : O(Log n) || SC : O(1)
class Solution {
public:
    
    int search(vector<int> arr,int s,int e,int highest)
    {
        int low = 0, high = e-1;
        
        while(low < high)
        {
            int mid = low+(high-low)/2;
            
            if(arr[mid] < arr[mid+1])
            low = mid+1;
            else
            high = mid;
        }
        return arr[low];
    }
    
    int findPeakElement(vector<int>& a) 
    {
        int highest = 0;
        return search(a,0,a.size(),highest);
    }
};