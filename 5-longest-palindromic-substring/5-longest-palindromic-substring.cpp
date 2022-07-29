class Solution {
public:
    string longestPalindrome(string s) {
        string result ;
        int length = 0;
        for(int i = 0;i<s.size();i++)
        {
             int left = i ;
            int right = i;
            while(left>=0 && right<s.size()&& s[left]==s[right])
            {
                if(right - left +1 >length)
                {
                    length = right - left +1 ;
                   
                    result=s.substr(left,length);
                    
                }
                left--;
                right++;

            }
            left = i;
            right = i+1;
            while(left>=0 && right<s.size() && s[left]==s[right])
            {
                if(right-left+1>length)
                {
                    
                    length =right - left +1;
                   
                    result=s.substr(left,length);
                    
                    
                }
                left--;
                right++;

            }
            
        }
        return result ;
    }
};