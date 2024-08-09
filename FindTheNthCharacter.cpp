//Best Solution || Time Complexity : O(r*|s|)
class Solution{
  public:
   string solve(string s,int r)
   {
       if(r==0)
       return s;
       
        string ans="";
        for(int i=0;i<=s.size()/2;i++)
        {
            if(s[i]=='0')
             ans+="01";
            else
             ans+="10";
        }
        return solve(ans,r-1);
   }
    char nthCharacter(string s, int r, int n) 
    {
       string res=solve(s,r);
       return res[n];
    }
};