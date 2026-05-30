class Solution {
public:
string cap(string str)
    {
      int  size=str.size();
        if(size==2)
         {
           str[0] = tolower(str[0]);
           str[1] = tolower(str[1]);
            
         }
        else if(size==1)
         { str[0]=tolower(str[0]);}
         
      else
        {
                for(int i=0;i<size;i++)
            {
                if(i==0)
                  str[i]=toupper(str[i]);
                else 
                    str[i]=tolower(str[i]);
            }
        }return str;
    }


    string capitalizeTitle(string title) 
    {
        int size= title.size();
        string str="";
        string res="";
        for(int i=0;i<size;i++)
            {  // str+=title[i];
            
                 if(title[i]==' ')
                  { 
                    res+=cap(str)+" ";
                    str="";
                  }
                else
                 str+=title[i];
            }return res+cap(str);
        
    }
};