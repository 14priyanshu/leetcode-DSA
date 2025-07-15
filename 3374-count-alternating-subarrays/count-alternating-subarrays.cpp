class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) 
    {  int s=nums.size();
        long long res=s;
        int i=0,j=1;
        if(s==1)
         return 1;
        while(j<s)
            {
                if(nums[j]==nums[j-1])
                    {
                        i=j;j++;
                    }
                else if(nums[j]!=nums[j-1])
                    {
                        res+=(j-i);
                        j++;
                    }
            }return res;
        
    }
};