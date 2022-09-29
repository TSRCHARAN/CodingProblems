int f(int i, int j, vector<vector<int>>& grid)
{
        if(i==0 && j==0)
            return grid[0][0];

        int up=grid[i][j];
        if(i-1>=0)
            up += f(i-1,j,grid);
        else
            up+=1e9;

        int left=grid[i][j];
        if(j-1>=0)
            left += f(i,j-1,grid);
        else
            left+=1e9;

        return min(up,left);
}
int minPathSum(vector<vector<int>>& grid)
{
        int n=grid.size();
        int m=grid[0].size();
        return f(n-1,m-1,grid);
}
