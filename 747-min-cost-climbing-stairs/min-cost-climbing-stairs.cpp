class Solution {
    int solve(int idx,vector<int>& cost, vector<int>& dp,int size)
        {
            if(idx>=size)
             return 0;
            if(dp[idx]!=-1)
             return dp[idx];
            int one=solve(idx+1,cost,dp,size)+cost[idx];
            int two=solve(idx+2,cost,dp,size)+cost[idx];
            return dp[idx]=min(one,two);
        }
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int size=cost.size();
         vector<int> dp(size,-1);
        return min(solve(1,cost,dp,size),solve(0,cost,dp,size));

        
    }
};