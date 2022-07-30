class Solution {
public:
    
    void checker(vector<int>& candidates,vector<vector<int>> &result,vector<int>& tracker,int target,int &i ,int &k)
    {
        if(i==target)
        {
           
            result.push_back(tracker);
        }
        else if(i>target)
        {
            return ;

        }
        for(int j=k;j<candidates.size();j++)
        {
            i = i + candidates[j];
            
            tracker.push_back(candidates[j]);
            checker(candidates, result ,tracker,target,i,j);
            i =i -candidates[j];
            tracker.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result ;
        vector<int> tracker;
        int i = 0;
        int j = 0;
        checker(candidates,result ,tracker,target,i,j );
        return result;
        
    }
};