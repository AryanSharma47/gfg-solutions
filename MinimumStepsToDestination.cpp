//Simple Approach
class Solution {
  public:
    int minSteps(int d) {
        int steps = 0,sum = 0;
        
        while(true)
        {
            sum += ++steps;
            
            if(sum == d)
            return steps;
            
            if(sum > d && (sum-d)%2 == 0)
            return steps;
        }
        return 0;
    }
};