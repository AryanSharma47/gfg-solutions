//Simple Approach
class Solution {
  public:
    vector<int> bracketNumbers(string str) {
        vector<int> ans;
        stack<int> st;
        int i = 0,brc = 0;
        
        while(i<str.size())
        {
            if(str[i] == '(')
            {
               brc++;
               ans.push_back(brc);
               st.push(brc);
            }
            else if(str[i] == ')')
            {
                ans.push_back(st.top());
                st.pop();
            }
            i++;
        }
        return ans;
    }
};