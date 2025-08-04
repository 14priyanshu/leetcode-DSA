class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int unique=0;
        int size=fruits.size();
        int i=0,j=0,res=0;
        map<int,int> mp;
        while(j<size)
            {
                if(mp[fruits[j]]==0)
                  unique++;
                  mp[fruits[j]]++;
                    
                while(unique>2)
                    {
                        mp[fruits[i]]--;
                        if(mp[fruits[i]]==0)
                         unique--;
                        i++;
                    }
                res=max(res,j-i+1);
                j++;
            }return res;
        
    }
};