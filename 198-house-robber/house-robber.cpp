class Solution {public:
//int dp[101]={-1};

int solve(vector<int>& nums,int i,int size,vector<int>& dp)
        {
            if(i>=size)
             return 0;
             if(dp[i]!=-1)
             return dp[i];
            int choose=nums[i]+solve(nums,i+2,size,dp);
            int notchoose=solve(nums,i+1,size,dp);
            return dp[i]=max(choose,notchoose);
        }
public:
    int rob(vector<int>& nums) 
    {
        int size=nums.size();
         vector<int> dp(101,-1);
         return solve(nums,0,size,dp);
        
    }
};