class Solution {
public:
    int maximumLength(vector<int>& nums) 
    {
        int size=nums.size();
      //  vector<vector<int>>dp (size+1,vector<int>(size+1,-1));
      int even=0,odd=0,alternate=1;bool s=nums[0]%2;
        for(int i=0;i<size;i++)
            {
              if(nums[i]%2)
                 even++;
              else 
                 odd++;
            }
        for(int i=1;i<size;i++)
            {
               if(s&&nums[i]%2==0)
                { alternate++;s=false;}
                else if(!s&&nums[i]%2==1)
                {
                    alternate++;
                    s=true;
                }
                
            }
        return max(alternate,max(odd,even));
        
         
        
    }
};