class Solution {
public:
        vector<int> findBall(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
            vector<int> res; 
        for(int i= 0 ; i<cols;i++)
        {
            int current = i ;
            int check ;
            for(int j = 0 ; j<rows; j++)
            {
                check = current + grid[j][current];
                if(check<0 || check>=cols || grid[j][check]!=grid[j][current])
                {
                    current = -1;
                    break; 
                }
                current = check;

            }
            res.push_back(current);
        }
            return res;
    }
};