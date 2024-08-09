//Simple Approach
class Solution {
public:
    //Directions
    vector<pair<int,int>> dir = {{1,0},{0,-1},{-1,0},{0,1}};
    
    int solve(vector<vector<int>> arr)
    {
        int r = arr.size();
        int c = arr[0].size();
        int infTime[r][c];
        queue<pair<pair<int,int>,int>> q;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                infTime[i][j] = -1;
                
                if(arr[i][j] == 2)
                {
                    q.push({{i,j},0});
                    infTime[i][j] = 0;
                }
            }
        }
        
        while(!q.empty())
        {
            auto curr = q.front();
            q.pop();
            
            for(auto it : dir)
            {
                int i = curr.first.first + it.first;
                int j = curr.first.second + it.second;
                
                if(i<0 || j<0 || i>=r || j>=c || arr[i][j]!=1 || infTime[i][j]!=-1)
                continue;
                
                q.push({{i,j},curr.second + 1});
                infTime[i][j] = curr.second + 1;
            }
        }
        
        
        int flag = 0;
        int maxi = INT_MIN;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(arr[i][j] != 1)
                continue;
                
                if(arr[i][j] == 1 && infTime[i][j] == -1)
                {
                    flag = 1;
                    break;
                }
                
                maxi = max(maxi,infTime[i][j]);
            }
        }
        
        if(flag)
        return -1;
        else
        return maxi;
    }
    
    int helpaterp(vector<vector<int>> hospital)
    {
        return solve(hospital);
    }
};