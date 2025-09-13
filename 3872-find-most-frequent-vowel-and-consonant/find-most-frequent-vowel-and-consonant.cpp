class Solution {
public:
    int maxFreqSum(string s) 
    {
        map<char,int> vowel;
        map<char,int> cons;
        int maxv=0,maxc=0;
        for(auto &it: s)
            {
                if(it=='a'||it=='e'||it=='i'||it=='u'||it=='o')
                { vowel[it]++;
                 if(vowel[it]>maxv)
                  maxv=vowel[it];
                }
                else
                    {
                        cons[it]++;
                        if(cons[it]>maxc)
                         maxc=cons[it];
                    }
            }
            return maxc+maxv;
        
    }
};