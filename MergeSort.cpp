class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
       int ans[r-l+1];
       int i = l,j = m+1,k = 0;
       
       while(i <= m && j <= r)
       {
           if(arr[i] <= arr[j])
           ans[k++] = arr[i++];
           else
           ans[k++] = arr[j++];
       }
       
       while(i <= m)
       ans[k++] = arr[i++];
       
       while(j <= r)
       ans[k++] = arr[j++];
       
       for(int i=l;i<=r;i++)
       arr[i] = ans[i-l];
    }

    void mergeSort(int arr[], int l, int r)
    {
        if(l >= r)
        return;
        
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        
        merge(arr,l,m,r);
    }
};