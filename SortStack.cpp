//TC : O(n) || SC : O(1)
void insert(stack<int> &st,int x)
{
    if(st.empty() || st.top() <= x)
    {
        st.push(x);
        return;
    }
    
    int a = st.top();
    st.pop();
    insert(st,x);
    
    st.push(a);
}

void SortedStack :: sort()
{
   if(s.empty())   return;
   
   int a = s.top();
   s.pop();
   sort();
   
   insert(s,a);
}