void setZeroes(vector<vector<int>>& matrix)
{

        int i,j,row=matrix.size(),column=matrix[0].size(),col0=1;
        for(i=0;i<row;i++)
        {
            if(matrix[i][0]==0)
                col0=0;
            for(j=1;j<column;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=matrix[0][j]=0;
                }
            }
        }
        for(i=row-1;i>=0;i--)
        {
            for(j=column-1;j>=1;j--)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
            if(col0==0)
                matrix[i][0]=0;
        }
}
