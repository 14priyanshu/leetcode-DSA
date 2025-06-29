class Solution {
public:
    int numSubseq(vector<int>& nums, int target) 
    { int mod=1e9+7;
       int size=nums.size();
       int res=0;
       int i=0,j=size-1;
       vector<int> power(size,1);
       for(int i=1;i<size;i++)
        {
            power[i]=(power[i-1]*2)%mod;
        }
       sort(begin(nums),end(nums));
       while(i<=j)
        {
            if(nums[i]+nums[j]<=target)
                {
                    res=(res%mod+power[j-i])%mod;
                    i++;
                }
            else 
               
                j--;
               
            
        }return res;        
    }
};