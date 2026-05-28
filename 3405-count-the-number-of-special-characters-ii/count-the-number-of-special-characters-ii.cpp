class Solution {
public:
    int numberOfSpecialChars(string word) 
    {
       int size=word.size();
       int res=0;
       vector<int> fupper(26,-1),llower(26,-1);
       for(int i=0;i<size;i++)
        {   
            if(word[i]>='a'&&word[i]<='z')
                llower[word[i]-'a']=i;
            else 
                {
                    if(fupper[word[i] - 'A'] == -1)
                        fupper[word[i] - 'A'] = i;
                
                }
        }
        for(int i=0;i<26;i++)
            {
                if(llower[i]!=-1&&fupper[i]!=-1&&llower[i]<fupper[i])
                    {
                        res++;
                    }
            }return res;
    }
};