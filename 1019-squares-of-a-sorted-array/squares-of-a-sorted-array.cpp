class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int size=nums.size();
        vector<int> res(size,0);
        int i=0,j=size-1,k=size-1;
        while(i<=j)
            {
               int neg=nums[i]*nums[i];
               int pos=nums[j]*nums[j];
               if(pos>neg)
                {
                   res[k--]=pos;
                   j--;
                }
                else
                {
                    res[k--]=neg;
                    i++;
                }

            }return res;
        
    }
};