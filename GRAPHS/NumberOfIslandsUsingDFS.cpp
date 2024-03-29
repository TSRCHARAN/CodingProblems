void DFS(vector<vector<char>>& grid, int i, int j)
{
        // boundary checking
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()){
            return;
        }
         // return if current position is of water or is already visited
        if(grid[i][j] == '0' || grid[i][j] == '2'){
            return;
        }
        // mark the current as visited
        grid[i][j] = '2';

        // do DFS in all 4 directions
        DFS(grid,i-1,j);
        DFS(grid,i+1,j);
        DFS(grid,i,j-1);
        DFS(grid,i,j+1);
}
int numIslands(vector<vector<char>>& grid)
{
        int m = grid.size(), n = grid[0].size();
        int islands = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == '1')
                {
                    islands++;
                    DFS(grid,i,j);
                }
            }
        }

        return islands;
}
