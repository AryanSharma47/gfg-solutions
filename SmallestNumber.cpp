//Simple Approach
class Solution {
  public:
    string smallestNumber(int s, int d) {
       int num = 0,place = 1;
       while(d-- > 1)
       {
           int n = min(s-1,9);
           num = num+n*place;
           
           place *= 10;
           s -= n;
       }
       
       if(s/10 != 0) return "-1";
       return to_string(num+place*max(1,s));
    }
};