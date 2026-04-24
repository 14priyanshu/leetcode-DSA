class Solution {
public:
    int furthestDistanceFromOrigin(string moves) 
    {
        int size=moves.size(), s=0,r=0,l=0;
        for(int i=0;i<size;i++)
            {
                if(moves[i]=='L')
                  l++;
                else if(moves[i]=='R')
                    r++;
                else 
                   s++;
                  
            }
            return abs(l-r)+s;
        
    }
};