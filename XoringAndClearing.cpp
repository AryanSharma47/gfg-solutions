//Simple Logic using memset and xor operation
class Solution {
  public:
    void printArr(int n, int arr[]) {
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        
        cout<<"\n";
    }

    void setToZero(int n, int arr[]) {
        memset(arr,0,sizeof(int)*n);
    }

    void xor1ToN(int n, int arr[]) {
        for(int i=0;i<n;i++)
        arr[i] ^= i;
    }
};