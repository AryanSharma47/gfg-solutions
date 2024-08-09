//Simple Approach
class Solution {
  public:
        int isValid(string str) {
        int dots = 0;
        string temp="";
        
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='.' && str[i+1]=='.')
            return false;
            
            if(str[i]=='.')
            {
                dots++;
                int num = stoi(temp);
                
                if((temp[0]=='0' && num != 0) || num < 0 || num > 255)
                return false;
                
                temp="";
            }
            else if(isdigit(str[i]))
            temp += str[i];
        }
        
        int num = stoi(temp);
        if((temp[0]=='0' && num != 0) || num < 0 || num > 255 || dots != 3)
        return false;
        else 
        return true;
    }
};