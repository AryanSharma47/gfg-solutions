//Easiest solution using find function || Time Complexity : O(N)
class Solution{
    public:
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
       auto it=find(arr,arr+N,X);
       if(it != arr+N)
       return it-arr;  //*it-1
       else
       return -1;
    }

};