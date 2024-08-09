//Easiest and Simplest Approach || Time Complexity : O(Logn)

class Solution{
    public:
    int search(int arr[], int l, int r, int key){
        // l: The starting index
        // h: The ending index
        
       while(l<=r)
       {
           int mid=l+(r-l)/2;
           
           if(arr[mid]==key)
           return mid;
           
           else if(arr[l]<=arr[mid])
           {
               if(arr[l]<=key && key<=arr[mid])
               r=mid-1;
               else
               l=mid+1;
           }
           
           else if(arr[mid]<=arr[r])
           {
               if(arr[mid]<=key && key<=arr[r])
               l=mid+1;
               else
               r=mid-1;
           }
       }
       return -1;
    }
};