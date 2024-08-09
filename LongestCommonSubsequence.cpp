//Using Recursion || Time Complexity : O(2^m+n)
class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2) {
    if(m==0 || n==0)
    return 0;
    
    if(s1[n-1]==s2[m-1])
    return 1+lcs(n-1,m-1,s1,s2);
    else
    return max(lcs(n,m-1,s1,s2),(lcs(n-1,m,s1,s2)));
}

};

//Using Memoization
class Solution
{
    public:
    int lcs(int n, int m, string s1, string s2) {
        
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        
    if(m==0 || n==0)
    return 0;
    
    if(s1[n-1]==s2[m-1])
    return dp[n][m] = 1+lcs(n-1,m-1,s1,s2);
    
    if(dp[n][m]!=-1)
    return dp[n][m];
    
    else
    return dp[n][m] = max(lcs(n,m-1,s1,s2),(lcs(n-1,m,s1,s2)));
}

};


//Using Dynamic Programming || Time Complexity : O(n*m)
class Solution
{
    public:
    int lcs(int n, int m, string s1, string s2) {
        
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1] == s2[j-1])
              dp[i][j] = 1 + dp[i-1][j-1];
            else
              dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
        }
    }
    return dp[n][m];
}

};