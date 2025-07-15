class Solution {
public:
bool isvow(char x) 
    {
        if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'
            ||x=='u'||x=='U')
         return true;
        
        return false;
    }
    bool isValid(string word) 
    {
        int size=word.size();
        if(size<3)
         return false;
         int num=0,con=0,vow=0,extra=0;
        for(int i=0;i<size;i++)
            {
                if(isdigit(word[i]))
                  num++;
                else if(isalpha(word[i]))
                    {
                        if(isvow(word[i]))
                          vow++;
                        else 
                         con++;
                    }
                else 
                   return false;
                
                
            }
                if(vow&&con)
                   return true;
        return false;
    }
};