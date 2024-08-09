//Simple Approach
class Solution{
	public:
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	   unordered_map<int,int> mp;
	   vector<int> v;
	   
	   for(int i=0;i<m;i++)
	   mp[b[i]]++;
	   
	   for(int i=0;i<n;i++)
	   {
	       if(mp.find(a[i]) == mp.end())
	       v.push_back(a[i]);
	   }
	   return v;
	} 
};