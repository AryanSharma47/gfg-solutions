//Simple Recursive Approach
class Solution {
  public:
    
    void solve(vector<long long> &ans,long long n)
    {
        if(n == 1)
        {
            ans.push_back(n);
            return;
        }
        
        else
        {
            ans.push_back(n);
            
            if(n%2 == 0)
                n = pow(n,0.5);
            else
                n = pow(n,1.5);
                
            return solve(ans,n);
        }
    }
    
    vector<long long> jugglerSequence(long long n) {
        vector<long long> ans;
        solve(ans,n);
        
        return ans;
    }
};