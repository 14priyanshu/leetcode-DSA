class Solution {
public:
    int minimumCost(vector<int>& cost) 
    {
        sort (cost.begin(), cost.end());
        int size=cost.size();
        int sum=0;
        int free=size%3;
        for(int i=0;i<size;i++)
            {
                if(i%3!=free)
                sum+=cost[i];
            }return sum;
        
    }
};