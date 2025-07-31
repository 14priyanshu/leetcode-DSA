class Solution {
public:
string lp(int left,int right,string &s)
    {
        while(left>=0&&right<s.size())
            {
                if(s[left]==s[right])
                  {
                    left--;right++;
                  }
                else
                    {
                        break;
                    }
            }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) 
    { int size=s.size();
    string res="";
        for(int i=0;i<size;i++)
            {
                string odd=lp(i,i,s);
                string even=lp(i,i+1,s);
                if(odd.length()>res.length())
                    {
                        res=odd;
                    }
                if(even.length()>res.length())
                    {
                        res=even;
                    }
                if(res.size()==size)
                  return res;
            }
         return res;
    }
};