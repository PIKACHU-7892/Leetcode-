class Solution {
public:
    int jump(vector<int>& nums) {
        int farthest = 0;
        int left = 0;
        int right = 0;
        int jumps = 0;
        while(farthest<nums.size()-1)
        {
            jumps++;
            int temp =farthest;
            while(right<=farthest)
            {
                temp= max(temp,nums[right]+right);
                right++;
                
            }
            farthest = temp;
            left = right;
            

        }
        return jumps ;
    }
};