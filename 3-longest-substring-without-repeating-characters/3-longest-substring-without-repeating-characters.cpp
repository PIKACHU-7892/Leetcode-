class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        int j = 0 ;
        int max1 = 0;
        for(int i = 0 ; i<s.size();i++)
        {
              if(a.find(s[i])==a.end())
              {
                  cout<<s[i];
a.insert(s[i]);
                  cout<<i-j+1<<endl;
       max1= max(i-j+1,max1);           
              }
            else
            {
                
                while(s[j]!=s[i])
                {
                    cout<<s[j];
                    a.erase(s[j]);
                    j++;
                }
               
                    j++;
               
            }
        }
        return max1;
        
    }
};