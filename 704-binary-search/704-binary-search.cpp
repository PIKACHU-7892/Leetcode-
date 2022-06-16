class Solution {
public:
    int search1(vector<int>& nums,int target)
    {
int low = 0; int high = nums.size()-1 ; 
        int mid;
        while(low<=high)
        {
            mid = (low + high) /2;
            if(target>nums[mid])
            {
                low = mid +1;
            }
            if(target< nums[mid] )
            {
                high = mid -1 ;
            }
             if(target == nums[mid])
             {
                 return mid ;
             }
        }
        return -1 ;
    }
    int search(vector<int>& nums, int target) {
        int num1= search1(nums,target);
        return num1;
    }
};