class Solution {
public:
    int reverse(int x) {
        int min1 = INT_MIN;
        int max1 = INT_MAX;
        int result = 0;
        int digit = 0;
        while(x)
        {
            digit = x%10;
            if(result>max1/10 || result==max1/10 && digit>max1%10)
            {
                return 0;
                
            }
            if(result<min1/10 || result==min1/10 && digit<min1%10)
            {
                return 0;
            }
            result =result*10 + digit ;
            x=x/10;
            
        }
        return result ;
    }
};