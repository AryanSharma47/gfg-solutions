//Having k Distinct Characters

//find all substrings and check for distinct elements
//TC : O(n^3) || SC : O(n^3)
class Solution
{
  public:
    vector<string> sub;
    void subStrings(string str)
    {
        for(int i=0;i<str.size();i++)
        {
            for(int j=i;j<str.size();j++)
            {
                string ans = str.substr(i,j -i + 1);
                sub.push_back(ans);
            }
        }
    }
    
    long long int substrCount (string s, int k) {
    	subStrings(s);
    	int cnt = 0;
    	
    	for(int i=0;i<sub.size();i++)
    	{
    	    unordered_set<char> st;
    	    
    	    for(auto j : sub[i])
    	    st.insert(j);
    	    
    	    if(st.size() == k)
    	    cnt++;
    	    
    	    //cout<<sub[i]<<" ";
    	}
    	return cnt;
    }
};

//Better Approach
//Check distinct characters while putting it in set
long long int substrCount (string s, int k) {
    	int cnt = 0;
    	
    	for(int i=0;i<s.size();i++)
    	{
    	    unordered_set<char> st;
    	    
    	    for(int j=i;j<s.size();j++)
    	    {
    	        st.insert(s[j]);
    	    
    	        if(st.size() == k)
    	        cnt++;
    	        else if(st.size() > k)
    	        break;
    	    }
    	    
    	}
    	return cnt;
    }

//Optimal Approach
//Two Pointers || Sliding Window
//TC : O(n) || SC : O(1)
class Solution
{
  public:
    int atmostKdistinctChar(string str,int x)
    {
       int i = 0,j = 0,ans = 0;
       int cnt = 0,n = str.size();
       vector<int> freq(26,0);
       
       while(j < n)
       {
           freq[str[j]-'a']++;
           
           if(freq[str[j]-'a'] == 1)    //Increment only for new char
           cnt++;
           
           while(cnt > x)              //If distinct char are more than x
           {
               freq[str[i]-'a']--;    //Decrease window size from starting
               
               if(freq[str[i]-'a'] == 0)
               cnt--;
               
               i++;
           }
           ans += (j-i+1);
           j++;
       }
       return ans;
    }
    
    long long int substrCount (string s, int k) {
    	long long ans = (atmostKdistinctChar(s,k)) - (atmostKdistinctChar(s,k-1));
    	return ans;
    }
};