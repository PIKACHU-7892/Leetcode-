class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        vector<int> hell; 
        int min = INT_MAX;
            int sum = 0;
        for(int i = 0 ; i<nums.size()-1;i++)
        {
            int check = target - nums[i];
            
            int left = i+1;
            int right = nums.size()-1;
            
            while(left<right)
            {
                if(nums[left]+nums[right]<check)
                {
                    
                    
                    if(abs(check-nums[left]-nums[right])<min)
                    {
                        min = abs(check-nums[left]-nums[right]);
                        sum = nums[i] + nums[left]+nums[right];
                    }
                    left++;
                }
                else if(nums[left]+nums[right]>check)
                {
                    
                     if(abs(check-nums[left]-nums[right])<min)
                    {
                        min = abs(check-nums[left]-nums[right]);
                        sum = nums[i] + nums[left]+nums[right];
                    }
                    right--;
                    
                }
                else
                {
                    return target;
                }
            }
            
            
        }
       return sum;
    }
};