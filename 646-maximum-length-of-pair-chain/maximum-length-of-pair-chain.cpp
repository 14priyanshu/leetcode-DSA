class Solution {
public:
//int dp[1001][1001]={-1};
int solve(vector<vector<int>>& pairs,int prev,int curr,vector<vector<int>>& dp,int size)
{
    if(curr>=size)
     return 0;
    if(prev!=-1&&dp[prev][curr]!=-1)
      return dp[prev][curr];
     int take=0;
      if(prev==-1||pairs[curr][0]>pairs[prev][1])
       take=1+solve(pairs,curr,curr+1,dp,size);
     int skip=solve(pairs,prev,curr+1,dp,size);
        if(prev!=-1)
         dp[prev][curr]=max(take,skip);
      
      return max(take,skip);
}
    int findLongestChain(vector<vector<int>>& pairs) 
     {   sort(pairs.begin(),pairs.end());
        int size=pairs.size();
     vector<vector<int>>dp(size+1,vector<int>(size+1,-1));
        return solve(pairs,-1,0,dp,size);
        
    }
};