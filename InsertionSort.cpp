//Insertion Sort
void insertionSort(int arr[], int n)
    {
        for(int i=0;i<n;i++)
        {
            int j = i;
            while(j>0 && arr[j-1]>arr[j])
            {
                std::swap(arr[j-1],arr[j]);
                j--;
            }
        }
    }