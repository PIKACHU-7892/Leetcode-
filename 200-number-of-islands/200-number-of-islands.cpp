class Solution {
public:
    void erase(vector<vector<char>>& grid,int i , int j,int m , int n )
    {
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0')
        {
            return ; 
        }
        grid[i][j]='0';
        erase(grid,i,j+1,m,n);
        erase(grid,i,j-1,m,n);
        erase(grid,i+1,j,m,n);
        erase(grid,i-1,j,m,n);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count =0 ; 
        for(int i = 0 ; i<m ;i++)
        {
            for(int j = 0 ; j<n;j++)
            {
                if(grid[i][j]=='1')
                {
count++;
                    erase(grid,i,j,m,n);
                }
            }
        }
        return count ;
    }
};