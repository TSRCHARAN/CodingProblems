//GFG Optimal Search -- which is better for LeetCode problem
int matSearch (vector <vector <int>> &mat, int n, int m, int x)
{
    int i=0,j=m-1;
    while(i<n && j>=0)
    {
        if(mat[i][j]==x)
        {
            return 1;
        }
        if(mat[i][j]<x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}
