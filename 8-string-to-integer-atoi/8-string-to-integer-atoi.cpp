class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int result ;
        int value  = 0;
        int flag =1  ;
        int flag2 = 1 ;
        for(int i = 0 ; i<s.size();i++)
        {
            if(s[i]==' ' && flag)
            {
                
                continue;
            }
            if(s[i]=='+' && flag)
            {
                sign = 1;
                flag =0;
                continue ;
            }
            if(s[i]=='-' && flag)
            {
                sign = -1 ;
                flag = 0;
                continue ;
            }
            if(isdigit(s[i]))
            {
                flag =0;
                
            }
         if(!isdigit(s[i]))
             {
                 break; 
             //2147483647
            }
            if((value>(INT_MAX/10) || ((value==(INT_MAX/10)&& (s[i]-'0')>7))))
            {
                
                if(sign==1)
                {
                    return INT_MAX;
                }
                else
                {
                    return INT_MIN;
                }
            }
            
            value = value*10 + (s[i]-'0');
        }
        return sign*value ;
    }
};