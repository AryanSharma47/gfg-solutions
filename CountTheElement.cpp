//Using Hash 
class Solution {
  public:
     vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,int q) {
         
         vector<int> res(q,0);
         int j=0;
         int maxEle=0;
         
         for(int i=0;i<n;i++)
         maxEle=max(maxEle,max(a[i],b[i]));
         
         vector<int> freq(maxEle+1,0);
         
         for(auto i : b)
         freq[i]++;
         
         for(int i=1;i<=maxEle;i++)
         freq[i] += freq[i-1];
         
         for(auto num : query)
         {
             int ele=a[num];
             res[j++]=freq[ele];
         }
         return res;
    }  
};