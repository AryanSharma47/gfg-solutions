//Easy Approach || Simple Logic using find Function 
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            vector<int> v;
            int ind=0;
            for(int i=0;i<text.length();i++)
            {
                int found=text.find(pattern,ind);  //or size_t found=text.find(pattern,ind)
                //size_t is an unsigned integer type, which is typically used for
                // sizes and indices in the context of standard library containers 
                if(found!=string::npos)
                {
                v.push_back(found+1);
                ind=found+1;
                }
                else
                ind++;
            }
            return v;
        }
     
};