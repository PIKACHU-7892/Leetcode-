class Solution {
public:
    int search(vector<int>& nums, int target) {
       int left = 0 ;
       int right = nums.size()-1;
       int mid ; 
       while(left<=right)
       {
           int mid  = (left + right)/2;
           if(nums[mid]==target )
           {
               return mid ;
           }
           else if(nums[left]<=nums[mid])
           {
                 // Checking the left sorted array 
               if(nums[mid]<target || target<nums[left])
               {
                   left = mid+1;
               }
               else
               {
                   right = mid-1;
               }
           }
           else
           {
               //checking the right sorted array 
               if(nums[mid]>target || target>nums[right])
               {
                   right = mid-1;
               }
               else
               {
                   left = mid+1;

               }
           }
               
       }
        return -1;
    }
    
};