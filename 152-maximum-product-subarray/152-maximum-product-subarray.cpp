class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=  INT_MIN;
        int current_max = 1;
        int current_min =1;
        for(int i = 0;i<nums.size();i++)
        {
            int temp = max(current_max*nums[i],current_min*nums[i]);
            int temp1 = max(temp,nums[i]);
            int temp2 = min(current_max*nums[i],current_min*nums[i]);
            int temp3 = min(temp2,nums[i]);
            current_max = temp1;
            current_min = temp3;
            res = max(res,current_max);
            
            
        }
        return res;
    }
};