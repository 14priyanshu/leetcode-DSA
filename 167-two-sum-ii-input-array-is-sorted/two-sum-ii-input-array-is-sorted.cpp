class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {  
       int size=numbers.size();
       int i=0,j=size-1;
       while(i<j) 
        { int total=numbers[i]+numbers[j];
            if(total==target)
                {
                    vector<int> res;
                    res.push_back(i+1);
                    res.push_back(j+1);
                    return res;
                }
            else if(total<target)
                {
                    i++;
                }
            else j--;
        }
        return {-1,-1};
    }
};