//Binary Search Solution 
class Solution {
public:
    int findKRotation(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            // Check if the mid element is the pivot
            if (mid > 0 && arr[mid] < arr[mid - 1])
                return mid;

            // If the right half is sorted, the pivot must be in the left half
            if (arr[mid] <= arr[high])
                high = mid - 1;
            else
                low = mid + 1;
        }

        return 0; // If no rotation is found, return 0
    }
};
