class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0 ;
        int bottom = matrix.size()-1;
        int count = 0;
        int mid;
        while(top<=bottom)
        {
            mid = (top +bottom)/2;
            cout<<mid;
           if(matrix[mid][0]<=target && matrix[mid][matrix[0].size()-1]>=target)
           {
               
               count++;
               break;
           }
            else if(target < matrix[mid][0])
            {
                bottom = mid -1;
            }
            else if(target>matrix[mid][matrix[0].size()-1])
            {
                top = mid + 1; 
                
            }
        }
        if(count == 1)
        {
            int left = 0 ;
            int right = matrix[0].size()-1;
            int mid2;
            while(left<=right)
            {
                mid2 = (left + right)/2;
                cout<<endl<<left<<" "<<right<<" " << mid2<<endl;
                if(matrix[mid][mid2]>target)
                {
                    right = mid2 -1 ;
                    cout<<"here"<<right;
                }
                else if(matrix[mid][mid2]<target)
                {
                    left = mid2 +1;
                }
                else
                {
                    return true;
                }
            }
            return false;
        }
        return false ;
    }
};