class Solution {
public:
    string decodeCiphertext(string et, int rows) 
    {  int c=et.size()/rows;
        vector<vector<char>>mat(rows,vector<char>(c));
        map<int,string>mp;
        int a=0;
        for(int i=0;i<rows;i++)
            {
                for(int j=0;j<c;j++)
                    {
                       mat[i][j]=et[a];
                       if((i-j)<=0)
                       {
                        mp[i-j]=mp[i-j]+et[a];
                       }
                       a++;
                    }
            }
            string res="";
           // a=0;
        for(int i=0;i<c;i++)
            {
                  res+=mp[-i];
            }
            while(!res.empty()&&res.back()==' ')
              res.pop_back();
            return res;
       
        
    }
};