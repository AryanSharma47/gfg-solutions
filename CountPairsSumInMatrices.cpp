//Simple Approach Using Hash Table
class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    unordered_map<int,int> mp;
	    int c=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	           mp[mat1[i][j]]++;
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(mp[x-mat2[i][j]] > 0)
	                c++;
	        }
	    }
	    return c;
	}
};