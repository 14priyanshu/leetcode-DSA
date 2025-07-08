class Solution {
public:
    int maxEvents(vector<vector<int>>& events) 
    {int size=events.size();
      priority_queue<int,vector<int>,greater<int>> q;
      int count=0;
        sort(begin(events),end(events));
        int start=events[0][0];
        int i=0;
        while(i<size||!q.empty())
            {
                if(q.empty())
                  start=events[i][0];
                
                while(i<size&&events[i][0]==start)
                {
                    q.push(events[i][1]);
                    i++;
                }

                if(!q.empty())
                    {
                        q.pop();
                        count++;
                    }
                    start++;
                while(!q.empty()&&q.top()<start)
                    {
                        q.pop();
                    }
            }
         
        return count;
    }
};