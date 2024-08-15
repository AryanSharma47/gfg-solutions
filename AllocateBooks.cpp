//Brute Force
bool isPossible(vector<int> arr,int m,int totalPages)
{
    int stdn = 1;
    long long pageStdn = 0;

    for(int i=0;i<arr.size();i++)
    {
        if(pageStdn+arr[i] <= totalPages)
        {
            pageStdn += arr[i];
        }
        else
        {
            stdn++;
            pageStdn = arr[i];
        }
    }
    return (stdn == m);
}

int findPages(vector<int>& arr, int n, int m) {
     if (m > n) 
     return -1;

    int first = *max_element(arr.begin(),arr.end());
    int last = accumulate(arr.begin(),arr.end(),0);

    for(int i=first;i<=last;i++)
    {
        if(isPossible(arr,m,i))
        return i;
    }
    return first;
}

//Optimal  Approach
//Binary Search
int countStudents(vector<int> arr,int totalPages)
{
    int stdn = 1;
    long long pageStdn = 0;

    for(int i=0;i<arr.size();i++)
    {
        if(pageStdn+arr[i] <= totalPages)
        {
            pageStdn += arr[i];
        } 
        else 
        {
            stdn++;
            pageStdn = arr[i];
        }
    }
    return stdn;
}

int findPages(vector<int>& arr, int n, int m) {
     if (m > n) 
     return -1;

    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);

    while(low <= high)
    {
        int mid = (low+high)/2;
        int stud = countStudents(arr,mid);

        if(stud > m)
        low = mid+1;
        else
        high = mid-1;
    }
    return low;
}