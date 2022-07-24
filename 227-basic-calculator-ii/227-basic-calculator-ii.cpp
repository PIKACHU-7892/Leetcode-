class Solution {
public:
    int calculate(string s) {
        long long  int  current_number = 0 ;
        char previous_operator = '+';
        stack< int > result ;
        for(int i = 0 ;i<s.size();i++)
        {
if(s[i]-'0'>=0 && s[i]-'0'<=9)
{
    current_number = current_number*10 + s[i]-'0';
}
            else if(s[i]==' ')
            {
                continue;
            }
            else{
                if(previous_operator=='+')
                {
                    result.push(current_number);
                }
                else if(previous_operator=='-')
                {
                    result.push(-current_number);
                }
                else if(previous_operator=='*')
                {
                    
                     int k = result.top();
                    result.pop();
                    result.push(current_number*k);
                }
                else if(previous_operator=='/')
                {
                     int k = result.top();
                    result.pop();
                    
                    result.push(k/current_number);
                    
                }
                previous_operator =s[i];
                current_number = 0;
            }
        }
        
  if(previous_operator=='+')
                {
                    result.push(current_number);
                }
                else if(previous_operator=='-')
                {
                    result.push(-current_number);
                }
                else if(previous_operator=='*')
                {
                     int k = result.top();
                    result.pop();
                    result.push(current_number*k);
                }
                else if(previous_operator=='/')
                {   
                     int k = result.top();
                    
                    result.pop();
                    result.push(k/current_number);
                }
                
            long long sum = 0;
 while(!result.empty())
   {
     
       sum+=result.top();
     
       result.pop();
   }
    return sum ;
            }       
 
    
};