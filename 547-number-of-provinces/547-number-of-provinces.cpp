class Solution {
public:
    
    void dfs(vector<vector<int>> &isConnected,vector<int> &visited,int pos)
    {
        for(int j = 0;j<isConnected.size();j++)
        {
            if(!visited[j] && isConnected[pos][j])
            {
                visited[j]=1;
                dfs(isConnected,visited,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> visited(isConnected.size(),0);
        int count = 0;
        for(int i  = 0 ;i<visited.size();i++)
        {
              if(visited[i]==0)
              {
                  visited[i]=1;
                  count++;
                  dfs(isConnected,visited,i);
              }
        }
        return count;
    }
};