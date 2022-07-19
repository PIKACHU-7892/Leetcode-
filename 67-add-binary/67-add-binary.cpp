class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string final;
        long long i = 0;
        int carry = 0;
        while(i<a.size() || i<b.size())
        {
            int a1;
            int b1;
            if(i<a.size())
            {
                a1 = a[i]-'0';
            }
            else
            {
                a1=0;
            }
             if(i<b.size())
            {
                b1 = b[i]-'0';
            }
            else
            {
                b1=0;
            }
            
           
            if(a1+b1+carry ==2)
            {
                final =final + '0';
                carry = 1;
            }
            else if(a1+b1+carry ==3)
            {
                final =final + '1';
                carry = 1;
                
            }
            else if(a1+b1+ carry ==1)
            {
                final =final + '1';
                carry = 0;
            }
             else if(a1+b1+ carry ==0)
            {
                final =final + '0';
                carry = 0;
            }
            i++;
        }
        if(carry==1)
        {
            final=final+'1';
        }
        reverse(final.begin(),final.end());
       return final;
    }
};