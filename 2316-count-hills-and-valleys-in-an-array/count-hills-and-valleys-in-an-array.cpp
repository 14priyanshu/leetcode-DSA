class Solution {
public:
    int countHillValley(vector<int>& nums) 
    {
        int nonequal=nums[0],res=0;
        int size=nums.size();
        for(int i=1;i<size-1;i++)
            {
                if((nums[i]>nonequal&&nums[i]>nums[i+1])||
                (nums[i]<nonequal&&nums[i]<nums[i+1]))
               { res++; 
                 nonequal=nums[i];
               }
            }
    
        return res;
    }
};