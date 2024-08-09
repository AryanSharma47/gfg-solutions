//Simple Approach
class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        if(n<3 || m<3)
        return -1;
        
        int maxSum=INT_MIN;
        
        for(int r=1;r<n-1;r++)
        {
            for(int c=1;c<m-1;c++)
            {
                int sum = mat[r-1][c]+mat[r+1][c]+mat[r-1][c-1]+mat[r-1][c+1]+mat[r+1][c-1]+mat[r+1][c+1]+mat[r][c];
                maxSum = max(sum,maxSum);
            }
        }
        return maxSum;
    }
};