//Similar like split the largest sum array and book allocation problem
#include<bits/stdc++.h>

int countPainters(vector<int> arr,int time)
{
    int painters = 1;
    long long boardPainters = 0;

    for(int i=0;i<arr.size();i++)
    {
        if(boardPainters+arr[i] <= time)
        boardPainters += arr[i];
        else
        {
            painters++;
            boardPainters = arr[i];
        }
    }
    return painters;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
   int low = *max_element(boards.begin(),boards.end());
   int high = accumulate(boards.begin(),boards.end(),0);

   while(low <= high)
   {
       int mid = (low+high)/2;
       int painters = countPainters(boards,mid);

       if(painters > k)
       low = mid+1;
       else
       high = mid-1;
   } 
   return low;
}