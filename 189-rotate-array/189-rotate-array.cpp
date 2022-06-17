class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int rotation = k%n ;
        reverse(nums.begin(),nums.begin()+n-rotation);
        reverse(nums.begin()+n-rotation,nums.end());
        reverse(nums.begin(),nums.end());
    }
};