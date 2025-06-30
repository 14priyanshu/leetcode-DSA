class Solution {int size;
public:
 int solve(int idx , vector<int>& nums, vector<vector<int>>& dp,int pre)
        {
            if(idx>=size)
             return 0;
            if(pre!=-1 && dp[idx][pre]!=-1)
              return dp[idx][pre];
              int take=0;
            if(pre==-1||nums[pre]<nums[idx])
             {
                 take= solve(idx+1,nums,dp,idx)+1;
             }
           
              int not_take=solve(idx+1,nums,dp,pre);
              if(pre!=-1)
              dp[idx][pre]=max(take,not_take);
            //return dp[idx];

            return max(take,not_take);
            
            
        }
    int lengthOfLIS(vector<int>& nums) 
    {
        size=nums.size();
        vector<vector<int>> dp(size+1,vector<int>(size+1,-1));
           int pre=INT_MIN;
        return solve(0,nums,dp,-1);
    }
};