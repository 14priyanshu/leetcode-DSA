class Solution {
public:
    int arrayPairSum(vector<int>& nums) 
    {  
        int size=nums.size();
        sort(nums.begin(),nums.end());
        int n=size/2;
        int res=0;
        for(int i=0;i<size;i+=2)
            {
               res+=nums[i];
            }
        return res;
    }
};