//First Approach Brute Force
//SC : O(n+m)
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int l=n+m;
        int arr3[l];
        for(int i=0;i<n;i++)
        arr3[i]=arr1[i];
        
        for(int i=0;i<m;i++)
        arr3[n+i]=arr2[i];
        
        sort(arr3,arr3+l);    //qsort(arr3, l, sizeof(int), compare); 
        
        return arr3[k-1];
    }
};


//Second Approach using two pointers Approach for sorting
class Solution {
  public:
    void sortedArray(vector<int>& a1,vector<int>& a2)
    {
        int n = a1.size(),m = a2.size();
        int left = n-1,right = 0;
        
        while(left >=0 && right < m)
        {
            if(a1[left] > a2[right])
            swap(a1[left],a2[right]);
            else
            break;
            
            left--;right++;
        }
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());
    }
    
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {

        sortedArray(arr1,arr2);
        
        int n = arr1.size();
        
        if(k <= n)
        return arr1[k-1];
        else
        return arr2[k-n-1];
    }
};




//Third Approach using Gap Method
class Solution {
  public:
    //Swaping if arr1[i] > arr2[j]
    void swapIfGreater(vector<int>& arr1, vector<int>& arr2,int i,int j)
    {
        if(arr1[i] > arr2[j])
        swap(arr1[i],arr2[j]);
    }
    
    //sorting using gap method
    void sortArrays(vector<int>& arr1, vector<int>& arr2)
    {
        int n = arr1.size(),m = arr2.size();
        int len = n+m;
        int gap = ceil(len/2.0);
        
        while(gap > 0)
        {
            int left = 0,right = left+gap;
            
            while(right < len)
            {
                //arr1 and arr2
                if(left < n && right >= n)
                swapIfGreater(arr1,arr2,left,right-n);
                //arr2 and arr2
                else if(left >= n)
                swapIfGreater(arr2,arr2,left-n,right-n);
                //arr1 and arr1
                else
                swapIfGreater(arr1,arr1,left,right);
                
                left++;right++;
            }
            if(gap == 1)
            break;
            
            gap = ceil(gap/2.0);
        }
    }
    
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        sortArrays(arr1,arr2);
        
        if(k<=n)
        return arr1[k-1];
        else
        return arr2[k-n-1];
    }
};