class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(numCourses);
        vector<int> indegree(numCourses);
        for(int i=0;i<prerequisites.size();i++)
        {
            int a=prerequisites[i][1];
            int b= prerequisites[i][0];
            graph[a].push_back(b);
            indegree[b]++;
            
}
        vector<int> L;
        vector<int> S;
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0) S.push_back(i);
            

        }
        while(S.size()>0)
        {
            int vertex=S[S.size()-1];
            S.pop_back();
            L.push_back(vertex);
            for(int i=0;i<graph[vertex].size();++i)
            {int neighbor= graph[vertex][i];
             indegree[neighbor]--;
             if(indegree[neighbor]==0) S.push_back(neighbor);

            }
            
        }
        if(L.size()<numCourses)L.clear();
        return L;
    }
};