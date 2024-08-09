// TC : O(n)

class Solution{   
public:
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        int i=0;
        int left=0,right=arr.size()-1;
        
        while(i<=right)
        {
            if(arr[i] < a)
            {
                swap(arr[left],arr[i]);
                left++;i++;
            }
            
            else if(arr[i] > b)
            {
                swap(arr[right],arr[i]);
                right--;
            }
            
            else
            {
                i++;
            }
        }
    }
};