class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) 
    {
        float dia=0;int ar=0;
       // int size=d.size();
        for(auto &itr:d)
            {
                float ndia=sqrt(pow(itr[0],2)+pow(itr[1],2));
                 if(ndia>dia)
                    {
                        dia=ndia;
                        ar=itr[0]*itr[1];
                    }
                else if(ndia==dia&&(itr[0]*itr[1]>ar))
                 ar=itr[0]*itr[1];

            }return ar;

        
    }
};