//First Approach
class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        if(st.empty())
        {
            stack<int> s;
            s.push(x);
            return s;
        }
        
        int top=st.top();
        st.pop();
        stack<int> s = insertAtBottom(st,x);
        s.push(top);
        return s;
    }
};

//Second Approach Using Vector
class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        vector<int> v;
        stack<int> s;
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        
       s.push(x);
       int n=v.size()-1;
       for(int i=n;i>=0;i--)
       s.push(v[i]);
        
        return s;
    }
};