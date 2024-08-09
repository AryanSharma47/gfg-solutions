//Simple Approach
//Taking First Index as Pivot

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low < high)
        {
            int pIndex = partition(arr,low,high);
            
            quickSort(arr,low,pIndex-1);
            quickSort(arr,pIndex+1,high);
        }
    }
    
    int partition (int arr[], int low, int high)
    {
       int pivot = arr[low];
       int i=low,j=high;
       
       while(i < j)
       {
           while(i<high && arr[i] <= pivot)
           i++;
           
           while(j>low && arr[j] >= pivot)
           j--;
           
           if(i<j)
           std::swap(arr[i],arr[j]);
       }
       std::swap(arr[low],arr[j]);
       return j;
    }
};


//Taking last element as Pivot
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low < high)
        {
            int pIndex = partition(arr,low,high);
            
            quickSort(arr,low,pIndex-1);
            quickSort(arr,pIndex+1,high);
        }
    }
    
    int partition (int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = low;
        
        for(int j=low;j<high;j++)
        {
            if(arr[j] < pivot)
            {
                std::swap(arr[i],arr[j]);
                i++;
            }
        }
        std::swap(arr[i],arr[high]);
        return i;
    }
};