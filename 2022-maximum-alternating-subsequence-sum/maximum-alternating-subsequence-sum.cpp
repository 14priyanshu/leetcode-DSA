class Solution {
    long long solve(int flag,int idx,vector<vector<long long>>& dp,vector<int>& nums,int size)
        {
           if(idx>=size)
            return 0;
          if(dp[idx][flag]!=-1)
           return dp[idx][flag];

        long long nottake=solve(flag,idx+1,dp,nums,size);
        long long v=nums[idx];
           if(flag==false)
             v=-v;
            
        long long take=solve(!flag,idx+1,dp,nums,size)+v;
         return dp[idx][flag]=max(take,nottake);
        }
public:
    long long maxAlternatingSum(vector<int>& nums) 
    {
        int size=nums.size();
        vector<vector<long long>> dp(size+1,vector<long long>(2,-1));
        return solve(1,0,dp,nums,size);
        
    }
};