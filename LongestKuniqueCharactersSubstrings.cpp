//Two pointers Approach || Sliding Window
//TC : O(n)
class Solution{
  public:
    int longestKSubstr(string s, int k) {
       int i = 0,j = 0,ans = -1;
       int cnt = 0,n = s.size();
       vector<int> freq(26,0);
       
       while(j < n)
       {
           freq[s[j]-'a']++;
           
           if(freq[s[j]-'a'] == 1)    //Increment only for new char
           cnt++;
           
           while(cnt > k)              //If distinct char are more than k
           {
               freq[s[i]-'a']--;    //Decrease window size from starting
               
               if(freq[s[i]-'a'] == 0)
               cnt--;
               
               i++;
           }
           if(cnt == k)
           {
           ans = max(ans,(j-i+1));
           //cout<<s.substr(i,j+1)<<" ";
           }
           
           j++;
       }
       return ans;
    }
};