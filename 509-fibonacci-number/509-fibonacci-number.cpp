class Solution {
public:
    int a[31]={0};
    int fib(int n) {
        if(n<=1)
        {
            return n ;
        }
        else if(a[n]!=0)
        {
            return a[n];
        }
        else 
        {
a[n]= fib(n-1) + fib(n-2);
        }
        return a[n];
    }
};