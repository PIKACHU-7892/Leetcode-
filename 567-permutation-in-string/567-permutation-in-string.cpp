class Solution {
public:
     int matcher(int *a,int *b)
    {
        for(int i =0;i<26;i++)
        {
            if(a[i]!=b[i])
            {return false;}
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int check1[26]={0};
        
        for(int i =0;i<s1.size();i++)
        {
            check1[s1[i]-'a']++;
            
        }
        if(s1.size()>s2.size()) return false ;
        for(int i = 0;i<=s2.size()-s1.size();i++)
        {
            int check2[26]={0};
            for(int j = 0 ; j<s1.size();j++)
            {
check2[s2[i+j]-'a']++;
            }
            if(matcher(check1,check2)) return true;
            
        }
        return false;
    }
    
   
};