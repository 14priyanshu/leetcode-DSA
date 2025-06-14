class Solution {
public:
    int largestPerimeter(vector<int>& nums) 
    {  int maxi=0;
        sort(begin(nums),end(nums));
        for(int i=nums.size()-1;i>=2;i--)
            {
                if(nums[i]<nums[i-1]+nums[i-2])
                  maxi=max(maxi,nums[i]+nums[i-1]+nums[i-2]);
            }
            return maxi;
        
    }
};