//Simple Binary Search Solution
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        long long int low  = 1,high = n;
        
        while(low <= high)
        {
            long long int mid = (low+high)/2;
            
            if((mid*mid) <= n)
            low = mid+1;
            else
            high = mid-1;
        }
        return high;
    }
};