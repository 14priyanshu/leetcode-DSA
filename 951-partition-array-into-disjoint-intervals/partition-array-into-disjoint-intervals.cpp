class Solution {
public:
    int partitionDisjoint(vector<int>& nums)
     
    {
        int size=nums.size();
        vector<int> left(size);
        vector<int> right(size);
        left[0]=nums[0];
        right[size-1]=nums[size-1];

        for(int i=1;i<size;i++)
            {
               if(left[i-1]<nums[i])
                    {
                        left[i]=nums[i];
                    }
                else 
                    left[i]=left[i-1];
               
            }
           
        for(int i=size-2;i>=0;i--)
            {
                if(right[i+1]<nums[i])
                    {
                        right[i]=right[i+1];
                    }
                else 
                 right[i]=nums[i];
                 
            }
            for(int i=0;i<size-1;i++)
                {
                     if(left[i]<=right[i+1])
                       return i+1;
                    
                }
                return 1;

        
    }
};