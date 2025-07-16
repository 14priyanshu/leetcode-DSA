class Solution {
public:
int row,col;
int solve(int row,int col,vector<vector<int>>& dp,int cr,int cc,vector<vector<int>>& grid)
    {
        if(cr>=row||cc>=col||grid[cr][cc])
            return  0;
        if(cr==row-1&&cc==col-1)
          return 1;
        if(dp[cr][cc]!=-1)
          return dp[cr][cc];
        int right=solve(row,col,dp,cr,cc+1,grid);
        int down=solve(row,col,dp,cr+1,cc,grid);
        dp[cr][cc]=right+down;
        return dp[cr][cc];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) 
    {
        row=grid.size();
        col=grid[0].size();
        vector<vector<int>> dp(row+1,vector<int> (col+1,-1));
        return solve(row,col,dp,0,0,grid);
        
    }
};