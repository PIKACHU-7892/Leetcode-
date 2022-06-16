class Solution {
public:
    int palindrome(long long int x ,long long int y )
    {
        while(x>0)
        {
            y=y+x%10;
            y=y*10;
            x=x/10;
            
        }
        return y/10;
    }
    bool isPalindrome(int x) {
        long long int y =0;
        y=palindrome(x,y);
        
        if(x==y )
            return true;
        else 
            return false;
    }
};