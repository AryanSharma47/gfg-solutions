//First Optimal Approach
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        long long Sn = (n*(n+1))/2;
        long long S2n = (n*(n+1)*(2*n+1))/6;
        long long S = accumulate(arr.begin(),arr.end(),0LL);
        long long S2=0;
        for(auto i : arr)
        S2 += (long long)(i*i);
        
        long long val1 = S-Sn;
        long long val2 = S2-S2n;
        val2 = val2/val1;
        
        long long B = (val1+val2)/2;
        long long A = B-val1;
        
        return {(int)B,(int)A};
    }
};


//Second And Successful Approach
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int xr = 0;
        
        //Doing xor of every ele and n numbers
        for(int i=0;i<n;i++)
        {
            xr = xr^arr[i];
            xr = xr^(i+1);
        }
        
        //Finding differentiating bit
        int bitNo = 0;
        while(true)
        {
            if((xr & (1 << bitNo)) != 0)
            break;
            
            bitNo++;
        }
        
        //Grouping them in one and zero
        int zero = 0,one = 0;
        for(int i=0;i<n;i++)
        {
            if((arr[i] & (1<<bitNo)) != 0)
            one = one^arr[i];
            if(((i+1) & (1<<bitNo)) != 0)
            one = one^(i+1);

            if((arr[i] & (1<<bitNo)) == 0)
            zero = zero^arr[i];
            if(((i+1) & (1<<bitNo)) == 0)
            zero = zero^(i+1);
        }
        
        
        //Finding which is missing and repeating
        int c = 0;
        for(int i=0;i<n;i++)
        {
            if(zero == arr[i])
            c++;
        }
        
        if(c == 2) return {zero,one};
        else return {one,zero};
    }
};