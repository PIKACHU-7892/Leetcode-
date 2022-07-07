class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
       
        int i = 0 ; 
        string p ;
        while(i<strs[0].size() && i<strs[strs.size()-1].size())
        {
            if(strs[0][i]== strs[strs.size()-1][i])
            {
                p = p +strs[0][i];

            }
            else
            {
                return p ;
            }
            i++;

        }
        return p ;
    }
};