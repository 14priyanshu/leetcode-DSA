class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) 
    {   int size=classes.size();
        priority_queue<pair<double,int>> pq;
        for(int i=0;i<size;i++)
            {
                double old=(double)classes[i][0]/classes[i][1];
                double neww=(double)(classes[i][0]+1)/(classes[i][1]+1);
                double del=neww-old;
                pq.push({del,i});
            }
        while(extraStudents--)
            {   double del=pq.top().first;
                int idx=pq.top().second;
                pq.pop();
                classes[idx][0]++;
                classes[idx][1]++;
                double old=(double)classes[idx][0]/classes[idx][1];
                double neww=(double)(classes[idx][0]+1)/(classes[idx][1]+1);
                 del=neww-old;
                pq.push({del,idx});

            }
        double res=0.000;
        for(int itr=0;itr<size;itr++)
            {
                res+=(double)classes[itr][0]/classes[itr][1];
            }
        return res/size;
    }
};