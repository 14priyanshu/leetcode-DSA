class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        map<int,int> row;
        map<int,int> col;
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                    {
                        if(matrix[i][j]==0)
                            {
                                row[i]++;
                                col[j]++;
                            }
                    }
            }
        for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                    {
                        if(row[i]||col[j])
                         {
                            matrix[i][j]=0;
                         }
                    }
            }
        
    }
};