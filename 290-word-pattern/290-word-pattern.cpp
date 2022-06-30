class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> a; 
        int j = 0 ; 
        string y= "";
        int count = 0;
        for(int i = 0 ;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                count++;
                if(a[pattern[j]] =="")
                {
                     a[pattern[j]]=y;
                    j++;
                }
                else if(a[pattern[j]]!=y)
                {
                    return false;
                }
                else
                {
                    j++;
                }
                y="";
               
            }
            else
            {
                y=y + s[i];

            }
        }
        count++;
        if(count!=pattern.size())
        {
            return false ; 
        }
        if(a[pattern[j]]!=y && a[pattern[j]]!="")
        {
            return false;
        }
       else
       {
           if(a[pattern[j]]=="")
           {
               a[pattern[j]]=y;
           }
       }
        for(int i = 0 ; i<26;i++)
        {
            for(int j = i+1 ; j<26;j++)
            {
                if(a[j+'a']==a[i+'a'] && i!=j && a[j+'a']!="")
                {
                    cout<<"HERE";
                    return false ;
                }
            }
        }
        return true;
    }
};