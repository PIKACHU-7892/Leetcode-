class Solution {
public:
    void generator(vector<int>& nums ,vector<vector<int>> &res ,int i,vector<int> &temp )
    {
        if(i==nums.size())
        {
            res.push_back(temp);
            return;
            
        }
        generator(nums,res,i+1,temp);
        
        temp.push_back(nums[i]);
        generator(nums,res,i+1,temp);
        temp.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res; 
        vector<int>temp;
        generator(nums,res,0,temp);
        return res;
        
        
        
    }
};