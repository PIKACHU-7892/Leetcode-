class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result ; 
        sort(intervals.begin(),intervals.end(),[](vector<int> a , vector<int> b){return a[0]<b[0];});
        result.push_back(intervals[0]);
        for(int i = 1;i<intervals.size();i++)
        {
             if(result[result.size()-1][1]>=intervals[i][0])
             {
                 result[result.size()-1][1] = max(result[result.size()-1][1],intervals[i][1]);
                 
             }
            else
            {
                result.push_back(intervals[i]);
            }
        }
        return result ;
    }
};