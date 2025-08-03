class Solution {
public:
    long long minCost(vector<int>& b1, vector<int>& b2) 
    {int mini=INT_MAX;
        map<int,int> mp;
        for(auto &it:b1)
         { mp[it]++;mini=min(mini,it);}
        for(auto &it:b2)
         {mp[it]--;mini=min(mini,it);}
         vector<int> cele;
         for(auto &it:mp)
            { int freq=abs(it.second);
              int val=it.first;
                if(freq!=0)
                {
                    if(freq%2!=0)
                    return -1;
                    else
                     {
                        for(int i=0;i<freq/2;i++)
                         cele.push_back(val);
                     }
                }
            }
            int size=cele.size();
            long long res=0;
        // nth_element(cele.begin(),size/2,cele.end());
        sort(begin(cele),end(cele));
         for(int i=0;i<size/2;i++)
            {
               res+=min(cele[i],mini*2);
            }
        return res;
    }
};