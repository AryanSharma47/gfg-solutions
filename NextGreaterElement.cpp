//Simple Approach Using Stack
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> v;
        stack<long long> s;
        int i=n-1;
        while(i>=0)
        {
            if(s.empty())
            {
                v.push_back(-1);
                s.push(arr[i]);
                i--;
            }
            else
            {
                if(s.top() > arr[i])
                {
                    v.push_back(s.top());
                    s.push(arr[i]);
                    i--;
                }
                else
                {
                    s.pop();
                }
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};