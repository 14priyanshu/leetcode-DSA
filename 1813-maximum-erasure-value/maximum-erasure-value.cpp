class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {    int size=nums.size();
        int currsum=0,res=0;

       // sum=accumulate(nums.begin(),nums.end(),0);
        map<int,int> mp;
        int i=0,j=0;
        while(j<size)
            {
                mp[nums[j]]++;
                while(mp[nums[j]]>1)
                 {
                    mp[nums[i]]--;
                   currsum-=nums[i];
                    i++;
                 }
                 currsum+=nums[j];
                res=max(res,currsum);
               
                j++;
            }
      return res;
        
    }
};