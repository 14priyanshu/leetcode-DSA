class Solution {
public:
    int maximumLength(vector<int>& nums, int k) 
    {
        int size=nums.size();
        vector<vector<int>> dp(k,vector<int> (k,0));
         int res=0;
          for(int i=0;i<size;i++)
            {
                nums[i]%=k;
                for(int j=0;j<k;j++)
                    {
                        dp[j][nums[i]]=1+dp[nums[i]][j];
                          res=max(res,dp[j][nums[i]]);
                    }
            }
            return res;
        
    }
};