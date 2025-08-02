class Solution {
    vector<int> nextrow(vector<int> temp)
        {
            vector<int> te;
            te.push_back(1);
            for(int i=0;i<temp.size()-1;i++)
                {
                   te.push_back({temp[i]+temp[i+1]});
                }
            te.push_back(1);
            return te;
        }
public:
    vector<vector<int>> generate(int numRows) 
    { //int size=numRows.size();
        vector<vector<int>> ans;
        if(numRows==1)
         {ans.push_back({1});return ans ;}
         ans.push_back({1});
         if(numRows==2)
       { ans.push_back({1,1});return ans;}
       ans.push_back({1,1});
       numRows -=2;
        
        while(numRows>0)
            {
                ans.push_back({nextrow(ans.back())});
                numRows--;
            }return ans;
        
    }
};