class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1)
        {

        return INT_MAX;}
        long dvs = labs(dividend);
        long div = labs(divisor);
        long m = 0 ;
        int sign = (dividend>0)^(divisor>0)? -1:1;
        while(dvs>=div)
        {
            long temp = div;
            long count = 1; 
            while(temp<<1 <=dvs )
            {
                count = count<<1;
                temp = temp<<1;
            }
            m+=count ; 
            dvs = dvs - temp;
            
        }
        return m*sign ; 
    
        
    }
};