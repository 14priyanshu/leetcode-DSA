class Solution {
public:
 int count=0,size;
  void lp(int left,int right,string& s)
    {
        while(left>=0&&right<size&&s[left]==s[right])
            {
                left--;right++;
                count++;
            }
    }
    int countSubstrings(string s) 
    {
        size=s.size();
        for(int i=0;i<size;i++)
            {
               lp(i,i,s);
               lp(i,i+1,s);
            }return count;
        
    }
};