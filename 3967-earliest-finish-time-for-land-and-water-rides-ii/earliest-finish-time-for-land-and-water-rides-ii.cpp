class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) 
    {
        int l=ls.size();
        int w=ws.size();
        int l2w=INT_MAX;
        int w2l=INT_MAX;
        int land=INT_MAX;
        int water=INT_MAX;

        for(int i=0;i<l;i++)
            {
                land=min(land, ls[i]+ld[i]);
            }
        for(int i=0;i<w;i++)
            {
                water=min(water,ws[i]+wd[i]);
                l2w=min(l2w,max(land,ws[i])+wd[i]);
            }
        for(int i=0;i<l;i++)
            {
                w2l=min(w2l, max(water, ls[i])+ld[i]);
            }
        return min(l2w,w2l);
    }
};