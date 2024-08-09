//Simple Approach || Time Complexity : O(n) || Space Complexity : O(n)
class Solution {
public:
    int findMidSum(int arr1[], int arr2[], int n) {
           int c[n+n];
           merge(arr1,arr1+n,arr2,arr2+n,c);  //merging both arrays together into c in ascending order
           return c[n-1]+c[n];
    }
};