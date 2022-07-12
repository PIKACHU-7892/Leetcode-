class Solution {
public:
    int longestPalindrome(vector<string>& words) {
      unordered_map <string ,int> a;
      int count = 0;
        for(auto x: words)
        {
a[x]++;
        }
        bool flag =true;
        for(auto x : words)
        {
            string w =x ;
            reverse(w.begin(),w.end());
            if(w!=x && a[x]>0 && a[w]>0)
            {
                a[x]--;
                a[w]--;
                count+=4;
            }
            else if(w==x && a[x]>1)
            {
                a[x]-=2;
                count+=4;
            }
            else if(w==x && flag && a[x]>0)
            {
                a[x]--;
                count+=2;
                flag = false ;
            }
        }
        return count; 
    }
};