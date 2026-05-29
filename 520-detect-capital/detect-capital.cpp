class Solution {
public:
    bool isalllower(string word, int n)
     {
      for(int i=1;i<n;i++)
        {
            if(word[i]>='A'&&word[i]<='Z')
              return false;
        }return true;
     }
    bool detectCapitalUse(string word) 
    {
        int size=word.size();
         if(word[size-1]>='a'&&word[size-1]<='z')
          {
            //if(word[0]>='a'&&word[0]<='z')
            return isalllower(word,size);

          }
        else
         {
            for(int i=0;i<size;i++)
                {
                    if(word[i]>='a'&&word[i]<='z')
                      return false;
                }
         }

        return true;
    }
};