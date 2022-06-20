class Solution {
public:
    int a[46]={0};
    int climbStairs(int n) {
        if(n<=1)
        {
            a[n]=1;
        }
        else if(a[n]!=0)
        {
            return a[n];
        }
        else
        {
            a[n]=climbStairs(n-1)+climbStairs(n-2);
        }
        return a[n];
    }
};