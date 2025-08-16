class Solution {
public:
    int maximum69Number (int num) 
    {  int size=log10(num)+1;
        string str=to_string(num);

        for(int i=0;i<size;i++)
            {
                if(str[i]=='6')
                  {str[i]='9';
                   break;}
            }
        return stoi(str);
        
    }
};