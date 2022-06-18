class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        vector<int> b;
        while(left<=right)
        {
            if(numbers[left]+numbers[right]<target)
            {
                left++;
                
            }
            else if(numbers[left]+numbers[right]>target)
            {
                right--;
            }
            else
            {
b.push_back(left+1);
                b.push_back(right+1);
                return b;
            }
        }
        return b;
    }
};