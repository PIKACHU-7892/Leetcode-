class Solution {
public:
    void permutation(vector<vector<int>> &res, vector<int> nums ,int index,vector<int> &temp  ){
        if(temp.size()== nums.size())
        {
            cout<<"done"<<endl;
            res.push_back(temp);
            return;
            
        }
        for(int i = 0 ; i<nums.size();i++)
        {
            int count = 0 ; 
            for(int j = 0 ; j<temp.size();j++)
            {
                if(temp[j]==nums[i])
                {
                    count++;
                }
            }
            if(count==1) continue ;
            temp.push_back(nums[i]);
            
            
            permutation(res,nums,index,temp);
             for(int j = 0 ; j<temp.size();j++)
            {
               cout<<temp[j];
            }
            cout<<endl;
                        
            

            
            temp.pop_back();
            

        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res ;
        vector<int> temp;
        permutation(res,nums,0,temp);
        return res;
        
    }
};