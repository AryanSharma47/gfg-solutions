//TC : O(n) || SC : O(1)
class Solution{
public:
    void insertAtBottom(stack<int> &st,int x)
    {
        if(st.empty())  
        {
            st.push(x);
            return;
        }

        int a = st.top();
        st.pop();
        insertAtBottom(st,x);
        st.push(a);
    }
    
    void Reverse(stack<int> &st){
        if(st.empty())   
        return;
        
        int a = st.top();
        st.pop();
        Reverse(st);
        
        insertAtBottom(st,a);
    }
};