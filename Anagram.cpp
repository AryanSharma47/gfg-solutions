//Easiest approach || Time Complexity : O(|a|+|b|)
class Solution
{
    public:
    bool isAnagram(string a, string b){
        int as=a.size();
        int bs=b.size();
        if(as!=bs)
        return false;
        
      int arr[26]={0};
      int brr[26]={0};
      
      for(int i=0;i<as;i++)
           arr[a[i]-97]+=1;
           
      for(int i=0;i<bs;i++)
           brr[b[i]-97]+=1; 
           
      for(int i=0;i<26;i++)
      {
           if(arr[i]!=brr[i])
           return false;
      }
           
       return true;

    }

};

//Second Approach ||  Time Complexity : O(nLogn)
class Solution
{
    public:
    bool isAnagram(string a, string b){
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       if(a.size()!=b.size() || a!=b )
       return false;
       else
       return true;
    }

};