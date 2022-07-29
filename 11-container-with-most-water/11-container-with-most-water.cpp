class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 ; 
        int right = height.size()-1;
        int area = -1;
        while(left<right)
        {    int width  = right - left ;
             int height1 = min(height[left],height[right]);
             area = max(area,height1*width);
             if(height[left]>height[right])
             {
                 right--;
             }
             else
             {
                 left++;
             }

        }
        return area;
    }
};