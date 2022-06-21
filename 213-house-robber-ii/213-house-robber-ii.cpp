class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int max1 = money(nums,nums.size()-1);
        cout<<max1;
        nums.erase(nums.begin());
        int max2 = money(nums,nums.size());
        cout<<max2;
        return max(max1,max2);
    }
    int money(vector<int>& a,int n )
    {
        int rob1= 0; 
        int rob2=0;
        for(int i = 0;i<n;i++)
        {
            int temp = max(rob1+a[i], rob2);
            rob1= rob2;
            rob2 = temp;
        }
        return rob2;
    }
};