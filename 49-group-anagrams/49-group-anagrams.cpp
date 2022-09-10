class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<int>> final(strs.size(),vector<int> (26,0));
        
        map< vector<int>,vector<string> > result;
        for(int  i = 0;i< strs.size();i++)
        {
            for(int j = 0;j<strs[i].size();j++)
            {
                final[i][strs[i][j]-'a']++;
                
                
                }
            result[final[i]].push_back(strs[i]);
            
        }
        
        vector<vector<string>> finale;
        for(auto x: result)
        {
            finale.push_back(x.second);

        }
        return finale;
    }
};