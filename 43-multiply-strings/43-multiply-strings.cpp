class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 =="0")
        {
            return "0";
        }
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int max_len = num1.size()+ num2.size();
        string a(max_len,'0');
        for(int second_number = 0; second_number<num2.size();second_number++)
        {
            int digit1 = num2[second_number]-'0';
            for(int first_number = 0 ; first_number<num1.size();first_number++)
            {
                int digit2 = num1[first_number]-'0';
                int result_place = first_number+ second_number;
                
                int current = a[result_place]-'0';
                int multiply = digit1*digit2 +current;
                a[result_place]=multiply%10 +'0';
                a[result_place+1]+= multiply/10;
                
            }
        }
        if(a.back()=='0')
        {
            a.pop_back();
        }
        reverse(a.begin(),a.end());
        return  a;
    }
};