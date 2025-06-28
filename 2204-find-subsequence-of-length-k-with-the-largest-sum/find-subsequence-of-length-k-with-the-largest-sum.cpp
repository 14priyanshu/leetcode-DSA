class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) 
    {   int size=nums.size();
        vector<pair<int,int>> temp(size);
         for(int itr=0;itr<size;itr++)
            {
                temp[itr].first=nums[itr];
                temp[itr].second=itr;

            }
        sort(temp.begin(),temp.end() ,[](auto &a,auto &b)
            {
                return a.first>b.first;
            });
            sort(temp.begin(),temp.begin()+k,[](auto &a, auto &b)
                {
                    return a.second<b.second;
                });
        //    for(int i=size-k;i<k;i++)
        //     {
        //         swap(temp[i].first,temp[i].second);
        //     }
        //     sort(temp.begin()+(size-k),temp.end());

        vector<int> res;
        for(int i=0;i<k;i++)
            {
                res.push_back(temp[i].first);
            }return res;
        
    }
};