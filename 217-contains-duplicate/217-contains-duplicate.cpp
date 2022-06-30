class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> a ;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(a.find(nums[i])==a.end())
            {
            a.insert(nums[i]);
            }
            else
            {
                return true ;
            }
        }
        return false ;

        }
};