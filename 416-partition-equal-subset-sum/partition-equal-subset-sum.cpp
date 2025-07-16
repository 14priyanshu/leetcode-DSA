class Solution {

public:
int size;
bool solve(vector<int>& nums, vector<vector<int>>& dp,int tar,int idx)
    {
        if(tar==0)
          return true;
        if(idx>=size||tar<0)
          return false;
        if(dp[idx][tar]!=-1)
            {
                return dp[idx][tar];
            }
        int take=false,skip;
        if(tar>=nums[idx])
            {
                take=solve(nums,dp,tar-nums[idx],idx+1);
            }
        skip=solve(nums,dp,tar,idx+1);
        dp[idx][tar]=(take||skip);
        return dp[idx][tar];
        
    }
    bool canPartition(vector<int>& nums) \
    {
        size=nums.size();
        int total=accumulate(nums.begin(),nums.end(),0);
        cout<<total;
         if(total%2!=0)
           return false;
        int target=total/2;

        vector<vector<int>> dp(size+1,vector<int>(target+1,-1));
        return solve(nums,dp,target,0);
    }
};