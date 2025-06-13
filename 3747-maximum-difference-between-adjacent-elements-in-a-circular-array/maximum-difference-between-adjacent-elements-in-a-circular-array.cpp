class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) 
    { int size=nums.size();
      int max=0;
        for(int i=0;i<nums.size()-1;i++)
            {
                if(abs(nums[i]-nums[i+1])>max)
                  max=abs(nums[i]-nums[i+1]);
            }
            if(abs(nums[size-1]-nums[0])>max)
              return abs(nums[size-1]-nums[0]);
              return max;
        
    }
};