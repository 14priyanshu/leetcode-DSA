class FindSumPairs {
public:
     // map<int,int> m1;
      map<int,int> m2;vector<int> n1;
      vector<int> n2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) 
    {       n1=nums1;
            n2=nums2;
       
        for(auto &it: n2)
            {
                m2[it]++;
            }
        
    }
    
    void add(int index, int val) 
    {    m2[n2[index]]--;
        n2[index]+=val;
        m2[n2[index]]++;
        
    }
    
    int count(int tot) 
    { int res=0;
        for(auto &it : n1)
            {
                res+=m2[tot-it];
            }
        return res;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */