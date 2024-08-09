//Easy Approach using Merge Sort || Time Complexity : O(NLogN) || Space Complexity : O(N)
#include<bits/stdc++.h>
class Solution
{
    public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int c=0;
    void merge(long long arr[],long long l,long long mid,long long r)
    {
        vector<long long> a;
        
        long long i=l;
        long long j=mid+1;
        
        while(i<=mid && j<=r)
        {
            if(arr[i]<=arr[j])
            {
                a.push_back(arr[i++]);
               
            }
            
            else
            {
                a.push_back(arr[j++]);
                c+=(mid-i+1);
            }
        }
        
        while(i<=mid)
            a.push_back(arr[i++]);
            
        while(j<=r)
            a.push_back(arr[j++]);
            
            
        for(long long i=l;i<=r;i++)
            arr[i]=a[i-l];
            
           
    }
    void mergeSort(long long arr[],long long l,long long r)
    {
        if(l<r)
        {
            long long mid=l+(r-l)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
            
        }
    }
    long long int inversionCount(long long arr[], long long n)
    {
         mergeSort(arr,0,n-1);
         return c;
    }

};