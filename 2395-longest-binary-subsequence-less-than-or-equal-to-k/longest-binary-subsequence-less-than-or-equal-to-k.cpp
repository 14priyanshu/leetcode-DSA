class Solution {
    
public:
    int longestSubsequence(string s, int k) 
    {
        
        int size=s.size()-1;int len=0;
        int a=0;
        for(int itr=size;itr>=0;itr--,a++)
            {
                 if(s[itr]=='0')
                   len++;
                else if(pow(2,a)<=k)
                   {
                    k=k-pow(2,a);
                    len++;
                   }
            }
        return len;
    }
};