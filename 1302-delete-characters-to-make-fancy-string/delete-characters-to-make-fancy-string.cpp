class Solution {
public:
    string makeFancyString(string s) 
    {int count=1;
    int size=s.size();
    string str="";
    str.push_back(s[0]);
        for(int i=1;i<size;i++)
            {
               if(s[i]==str.back())
               {
                count++;
                if(count<3)
                {
                    str.push_back(s[i]);
                }
               }
               else {
                count=1;
                str.push_back(s[i]);
               }
            
            }
            return str;
        
    }
};