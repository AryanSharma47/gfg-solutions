//Simple Approach
class Solution{
    public:
    int grayToBinary(int n)
    {
        //decimal to binary
        vector<int>dec(32,0);
        int num=n;
        int i=0;
        while(num)
        {
            dec[31-i]=num%2;
            num/=2;
            i++;
        }
        
        vector<int> gray_code(32,0);
        gray_code[0]=dec[0];
        
        for(int i=1;i<=32;i++)
            gray_code[i] = gray_code[i-1]^dec[i];
        
        int dec_gray=0;
        int j=0;
        for(int i=31;i>=0;i--)
        {
            if(gray_code[i])
            dec_gray += pow(2,j);
            
            j++;
        }
        return dec_gray;
    }
};