//Simple Approach
class Solution {
  public:
    bool rowPalindrome(int i,vector<vector<int>> arr)
    {
        int n = arr.size();
        int left = 0,right = n-1;
        while(left <= right)
        {
            if(arr[i][left] != arr[i][right])
            return false;
            
            left++;right--;
        }
        return true;
    }
    
    bool columnPalindrome(int j,vector<vector<int>> arr)
    {
        int n = arr.size();
        int top = 0,bottom = n-1;
        while(top <= bottom)
        {
            if(arr[top][j] != arr[bottom][j])
            return false;
            
            top++;bottom--;
        }
        return true;
    }
    
    string pattern(vector<vector<int>> &arr) {
        string ans = "-1";
        int n = arr.size();
        
        for(int i=0;i<n;i++)
        {
            if(rowPalindrome(i,arr))
            {
                ans = to_string(i)+" R";
                return ans;
            }
        }
        
        for(int j=0;j<n;j++)
        {
            if(columnPalindrome(j,arr))
            {
                ans = to_string(j)+" C";
                return ans;
            }
        }
        return ans;
    }
};