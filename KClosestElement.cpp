//Simple Approach
class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] == x)
            continue;
            
            pq.push({abs(arr[i]-x),-arr[i]});
            
            if(pq.size() > k)
            pq.pop();
        }
        
        while(!pq.empty())
        {
            ans.push_back(-pq.top().second);
            pq.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};