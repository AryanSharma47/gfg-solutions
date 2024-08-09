//Solution without optimization || Time Complexity : O(n)  || need to optimize it to O(Logn)
 long long genFibNum(long long a, long long b, long long c, long long n, long long m) {
        if(n>=1000000007)
        return 0;
        
        vector<long long> v(n+1);
        v[0]=0;
        v[1]=1;
        v[2]=1;
        long long i=3;
        while(i<=n)
        {
            v[i]=(a*v[i-1]+b*v[i-2])+c;
            i++;
        }
        return v[n]%m;
    }