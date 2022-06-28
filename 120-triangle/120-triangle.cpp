class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        reverse(triangle.begin(),triangle.end());
        cout<<triangle[0].size();
        for(int i = 1;i<triangle.size();i++)
        {
            for(int j = 0;j<triangle[i].size();j++)
            {
                triangle[i][j]= triangle[i][j]+min(triangle[i-1][j],triangle[i-1][j+1]);
            }
        }
        return triangle[triangle.size()-1][0];
    }
};