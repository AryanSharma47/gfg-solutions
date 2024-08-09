//Simplest Solution || Best Approach
class Solution{
public:
	string removeDuplicates(string str) {
	    string ans="";
	    for(auto i : str)
	    {
	        if(ans.find(i)==string::npos)
	        ans+=i;
	    }
	    return ans;
	}
};