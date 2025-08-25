class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int size=nums.size();
        int i=0,j=0,res=0;
        int one=0,zero=0;
        while(j<size)
         {      if(nums[j]==0)
                 zero++;
                else if(nums[j]==1)
                 one++;
                while(zero>1)
                {
                    nums[i]==0?zero--:one--;
                    i++;
                }
              res=max(res,one);
                j++;
            }
            if(one==size)
              return size-1;
              return res;
    }
};