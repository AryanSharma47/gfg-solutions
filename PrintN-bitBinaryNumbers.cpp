//Easiest Approach Using Recursion
class Solution{
public:	
    void NBitBinaryHelper(string ans,int one,int zero,int n,vector<string> &arr)
    {
        if(ans.size() == n)
        {
            arr.push_back(ans);
            return;
        }
        
        NBitBinaryHelper(ans+'1',one+1,zero,n,arr);
        
        if(one > zero)
        NBitBinaryHelper(ans+'0',one,zero+1,n,arr);
        
        return;
    }
    
	vector<string> NBitBinary(int n)
	{
	   vector<string> arr;
	   NBitBinaryHelper("",0,0,n,arr);
	   return arr;
	}
};