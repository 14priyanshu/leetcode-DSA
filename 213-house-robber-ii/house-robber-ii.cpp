class Solution {
public:
  int solve(vector<int>& nums,vector<int>& dp,int idx,int size)
    {
        if(idx>=size)
            {
                return 0;
            }

        if(dp[idx]!=-1)
          return dp[idx];

        int take=solve(nums,dp,idx+2,size)+nums[idx];
        int skip=solve(nums,dp,idx+1,size);

         return dp[idx]=max(skip,take);
         
    }
    
    int rob(vector<int>& nums) 
    {    
        
     int size=nums.size();
     if(size==1)
       return nums[0];
     if(size==2)
       return max(nums[0],nums[1]);
        vector<int> dp(size+1,-1);
        
        int a=solve(nums,dp,0,size-1);
           dp=vector<int> (size+1,-1);
        int  b=solve(nums,dp,1,size);
        return max(a,b);
        
    }
};