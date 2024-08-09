//Easiest Approach || Beginner Friendly || Time Complexity : O(n)
class Solution {
public:
    //pair is present in <utility> header
    //pair is used to store two values which can be of different types
    pair<long long, long long> getMinMax(long long a[], int n) {
        long long min=*min_element(a,a+n);
        long long max=*max_element(a,a+n);
        pair<long long,long long> pair1(min,max);
        return pair1;
    }
};