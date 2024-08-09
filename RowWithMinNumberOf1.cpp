//Simple Approach
class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) 
    {
        int ones = INT_MAX;
        int ind = 0;
        
        for(int i=0;i<a.size();i++)
        {
            int next=0;
            for(int j=0;j<a[0].size();j++)
            {
                if(a[i][j] == 1)
                next++;
            }
            
            if(ones > next)
            {
                ones = next;
                ind = i;
            }
        }
        return ind+1;
    }
};