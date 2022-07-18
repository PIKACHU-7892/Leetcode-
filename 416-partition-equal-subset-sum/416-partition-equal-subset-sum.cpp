class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0 ;
        for(int i = 0 ;i<nums.size();i++)
        {
            sum+= nums[i];
        }
        if(sum%2 == 1)
        {
            return false;
        }
        int target = sum/2;
        set<int> check;
        check.insert(0);
        for(auto x:nums)
        {
            int t = check.size();
            auto it = check.begin();
            set<int> track = check;
           for(auto k: track)
           {
               if(k+x== target)
               {
                   return true ;
                   
               }
                check.insert(k+x);
           }
        }
        return false ;
    }
};