class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> a;
        int n = nums.size();
        int sum = 0;
        for(int i = 0 ; i<n;i++)
        {
            a.insert(nums[i]);
        }
        for(int j = 0 ; j<n ; j++)
        {
            if(a.find(nums[j]-1)==a.end())
            {
                int count = 0;
                while(true)
                {
                    if(a.find(nums[j])!=a.end())
                    {
                        count++;
                        nums[j]++;
                    }
                    else
                    {
                        break;
                    }

                }
                if(count>sum)
                {
                    sum = count ;
                }

            }
        }
        return sum ;
        
    }
};