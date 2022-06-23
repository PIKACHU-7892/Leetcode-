class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr,int sc, int newColor,int baseColor)
    {
       if(sr==image.size() || sc==image[0].size() || sr<0 || sc<0 ||image[sr][sc]==newColor || image[sr][sc]!=baseColor)
       {return;}
        else{
        image[sr][sc] = newColor;
        dfs(image,sr+1,sc,newColor,baseColor);
        dfs(image,sr,sc-1,newColor,baseColor);
        dfs(image,sr-1,sc,newColor,baseColor);
        dfs(image,sr,sc+1,newColor,baseColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int baseColor = image[sr][sc];
        dfs(image,sr,sc,newColor,baseColor);
        return image;
    }
};