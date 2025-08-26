class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) 
    {
        int r=mat.size();
        int c=mat[0].size();
        vector<int> res;
       // res.push_back(mat[0][0]);
       map<int,vector<int>> mp;
       for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                {
                    mp[i+j].push_back(mat[i][j]);
                }
        }
       // bool up=true;
        for(int i=0;i<r+c-1;i++)
            {
                if(i%2==0)
                    {
                        reverse(mp[i].begin(),mp[i].end());
                    }
                for(auto it:mp[i])
                    {
                        res.push_back(it);
                    }

            }return res;
        
    }
};