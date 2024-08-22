//First Approach
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
         int totalSum = accumulate(arr.begin(), arr.end(), 0);
        
        int leftSum = 0;  // Sum of elements from arr[0] to arr[i]
        
        for (int i = 0; i < arr.size() - 1; i++) 
        {  
            leftSum += arr[i];
            
            int rightSum = totalSum - leftSum;
            
            if (leftSum == rightSum)  // If the two sums are equal, return true
            return true;  
        }
        
        return false;
    }
};

//Second Approach
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int n = arr.size();
        if(n <= 1)
        return false;
        
        int left = 0,right = n-1;
        int lSum = arr[left],rSum = arr[right];
        left++;right--;
        
        while(left <= right)
        {
            if(lSum < rSum)
            lSum += arr[left++];
            else
            rSum += arr[right--];
        }
        if(lSum == rSum)
        return true;
        else
        return false;
    }
};