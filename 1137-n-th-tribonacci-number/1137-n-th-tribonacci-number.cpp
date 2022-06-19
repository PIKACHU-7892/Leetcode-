class Solution {
public:
    int a[38]={0};
    int tribonacci(int n) {
        if(n<=1)
        {
            return n ; 
        }
        else if(n==2)
        {
            return 1;
        }
        else if(a[n]!=0)
        {
            return a[n];
        }
        else
        {
            a[n]=tribonacci(n-1)+ tribonacci(n-2)+ tribonacci(n-3);
        }
        return a[n];
    }
};