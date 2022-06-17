class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int  left = 0;
        int  right = n-1;
        vector<int> a(n);
        int  target = n-1;
        while(left<=right)
        {
            if(nums[left]*nums[left]>nums[right]*nums[right])
            {
                cout<<nums[left]*nums[left];
                a[target]=nums[left]*nums[left];
                left++;
                target--;
            }
            else
            {
                a[target]=nums[right]*nums[right];
                right--;
                target--;
            }
        }
        return a;
        
    }
};