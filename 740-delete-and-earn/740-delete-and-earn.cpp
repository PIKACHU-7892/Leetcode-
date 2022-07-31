class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        vector<int> final ;
        map<int,int> result;
        for(int i = 0 ; i<nums.size();i++)
        {
            if(result[nums[i]]==0)
            {
                final.push_back(nums[i]);
            }
            result[nums[i]]++;
            
            

        }
        if(final.size()==1)
        {
            return final[0]*result[final[0]];
        }
        int counter1 = final[0]*result[final[0]];
        int counter2;
        if(final[1]-final[0]==1)
        {
             counter2 = final[1]*result[final[1]];
            if(counter1>counter2)
            {
counter2 = counter1;}
            
        }
        else 
        {
            counter2 = final[1]*result[final[1]] + final[0]*result[final[0]];
        }
        for(int i = 2;i<final.size();i++)
        {   if(final[i]-final[i-1]==1)
        {
            int temp = max(final[i]*result[final[i]]+counter1,counter2);
            counter1 =counter2;
            counter2 = temp;
        }
         else
         {
             int temp = max(counter1,counter2) + final[i]*result[final[i]];
             counter1 =counter2 ;
             counter2 =temp;
         }

        }
        return max(counter1,counter2);
        
        
        
    }
};