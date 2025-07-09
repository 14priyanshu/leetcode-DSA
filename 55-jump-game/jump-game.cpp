class Solution {
public:
    bool canJump(vector<int>& nums) 
    {  int size=nums.size();
        int jump=0;
        for(int i=0;i<size;i++)
            {
                if(i>jump)
                 return false;
                jump=max(jump,i+nums[i]);
            }
        return true;
    }
};