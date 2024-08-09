//Easiest Approach || Runs on all test cases
class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        return q>2*n ? 0 : n-abs(n-q+1);
    }
};