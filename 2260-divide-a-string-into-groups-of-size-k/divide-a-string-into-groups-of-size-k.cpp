class Solution {
public:
    vector<string> divideString(string s, int k, char fill) 
    {
       vector<string> res;
      int size=s.size();
      if(size%k!=0)
        {
            int nfill=size%k;
            for(int i=0;i<k-nfill;i++)
             s+=fill;
             size+=(k-nfill);

        }
             //cout<<size;

      string temp="";
      int i=0;
      while(i<size)
        {
            temp+=s[i];
            if((i+1)%k==0)
                {   cout<<temp;
                    res.push_back(temp);
                    temp="";
                }
             i++;
        }
        return res;
    //     if(temp.size()!=k||temp.size()!=0)



  }
};