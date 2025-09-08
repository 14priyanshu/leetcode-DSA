class Solution {
public:
 
    vector<int> getNoZeroIntegers(int n) 
    {
        vector<int> res;
         for(int i=1;i<n;i++)
            {
                string s1=to_string(i);
                string s2=to_string(n-i);
                if(s1.find('0')!=string::npos||s2.find('0')!=string::npos)
                  continue;
                else
                 {
                    res.push_back(i);
                    res.push_back(n-i);
                    return res;
                 }
            }

        return res;
    }
};