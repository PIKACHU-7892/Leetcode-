class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i , int j , int m , int n , int* cost)
    {
if(  i ==m || j == n || i<0 || j<0 || grid[i][j] == 0 )
{
    return;
}
        
            grid[i][j]=0;
            *cost+=1;
            dfs(grid,i+1, j , m , n , cost);
            dfs(grid,i-1, j , m , n , cost);
            dfs(grid,i, j+1 , m , n , cost);
            dfs(grid,i, j-1 , m , n , cost);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
         int max =0;
        for(int i =0;i < m ; i++)
        {
            for(int j = 0 ; j< n ;j++)
            {
                 int cost = 0;
                if(grid[i][j] == 1 )
                {
dfs(grid,i , j , m , n , &cost );
                    if(cost>max)
                    {
                        max=cost;
                    }
                }
            }

        }
        return max;
    }
};