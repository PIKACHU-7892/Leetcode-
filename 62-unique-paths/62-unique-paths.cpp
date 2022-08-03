class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> grid(m,vector<int> (n,0));
        for(int i = 0;i<n;i++)
        {
          grid[m-1][i]= 1;
        }
        for(int i = 0 ; i<m;i++)
        {
            grid[i][n-1]=1;
        }
        for(int k = m-2;k>=0;k--)
        {
            for(int l = n-2;l>=0;l--)
            {
                grid[k][l]= grid[k][l+1] + grid[k+1][l];
            }
        }
        return grid[0][0];
    }
};