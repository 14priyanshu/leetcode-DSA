class Solution {
public:
  int solve(int left,int right,string &s,vector<vector<int>>& dp)
    {
        if(left>right)
          return 0;
        else if(left==right)
           return 1;
        else if(dp[left][right]!=-1)
            return dp[left][right];
        else if(s[left]==s[right])
          dp[left][right]=2+solve(left+1,right-1,s,dp);
        else
        {
            dp[left][right]=max(solve(left+1,right,s,dp),solve(left,right-1,s,dp));
        }
        return dp[left][right];
    }

    int longestPalindromeSubseq(string s) 
    {
       int size=s.size();
       vector<vector<int>> dp(size,vector<int> (size,-1));
       return solve(0,size-1,s,dp);
        
    }
};