class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0 ;
        int right =  0;
        for(int i = 0 ;i<nums.size();i++)
        {
            if(nums[left]==nums[right])
            {
                right++;
            }
            else if(nums[left]!=nums[right])
            {
                left++;
                nums[left] =nums[right];
                right++;
                
            }

        }
        return left+1 ;
        
    }
};