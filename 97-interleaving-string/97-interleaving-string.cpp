class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!=s3.size())
        {
            return false;
        }
        bool a[s1.size()+1][s2.size()+1];
        for(int i = 0 ; i<s1.size()+1;i++)
        {
            for(int j = 0 ; j<s2.size()+1;j++)
            {
                a[i][j]= false;
            }
        }
        a[s1.size()][s2.size()]= true;
        for(int i = s1.size();i>=0;i--)
        {
            
            for(int j = s2.size();j>=0;j--)
            {
                if(i<s1.size() && s1[i]==s3[i+j] && a[i+1][j])
                {
                    a[i][j]=true;
                }
                if(j<s2.size() && s2[j]==s3[i+j] && a[i][j+1])
                {
                    a[i][j]=true;
                }

            }
        }
        return a[0][0];
    }
};