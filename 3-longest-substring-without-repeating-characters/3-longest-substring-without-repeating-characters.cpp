class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        int max1= 0;
        int j = 0;
        for(int i = 0 ;i<s.size();i++)
        {
            if(a.find(s[i])==a.end())
            {
                a.insert(s[i]);
                max1= max(max1,i-j+1);
            }
            else
            {
                while(s[j]!=s[i])
                {
                    a.erase(s[j]);
                    j++;
                }
                j++;
                
            }
        }
        return max1;
    }
};