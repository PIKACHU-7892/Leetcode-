class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        if(rows == 0 )
            return mat; 
        int cols = mat[0].size();
        vector<vector<int>>  dist(rows, vector<int> (cols,INT_MAX));
        queue<pair<int,int>> q; 
        for(int i = 0 ; i<rows; i++)
        {
            for(int j = 0 ; j<cols; j++)
            {
if(mat[i][j]==0)
{
    dist[i][j]=0;
    q.push({i,j});
}
            }
        }
        int dir[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty())
        {
            pair<int,int> curr  = q.front();
            q.pop();
            for(int i = 0 ; i<4;i++)
            {
                for(int j = 0 ; j<4;j++)
                {
                    int nr  = curr.first + dir[i][0];
                    int nc = curr.second + dir[i][1];
                    if(nr >= 0 && nc>= 0 && nr<rows && nc<cols )
                    {
                        if(dist[nr][nc]>dist[curr.first][curr.second]+1)
                        {
                            dist[nr][nc]= dist[curr.first][curr.second]+1;
                            q.push({nr,nc});
                        }

                    }

                }

            }
        }
        return dist ; 
        
    }
    
};