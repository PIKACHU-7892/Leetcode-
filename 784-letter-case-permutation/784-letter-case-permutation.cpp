class Solution {
public:
    void permutater(vector<string> &res , string &s, string & temp,int i  )
    {
        
        if(temp.size()==s.size())
        {
            cout<<"INSIDE"<<endl<<temp<<endl;
            res.push_back(temp);
            return ;
        }
        if(isalpha(s[i]) && s[i]>=97)
        {
            
            temp.push_back(s[i]);
            permutater(res,s,temp,i+1);
            temp.pop_back();
            temp.push_back(s[i]-32);
            permutater(res,s,temp,i+1);
            temp.pop_back();
        }
        else if(isalpha(s[i]) && s[i]<97)
        {
            
            temp.push_back(s[i]);
            permutater(res,s,temp,i+1);
            temp.pop_back();
            temp.push_back(s[i]+32);
            permutater(res,s,temp,i+1);
            temp.pop_back();
        }
        else
        {
            temp.push_back(s[i]);
            permutater(res,s,temp,i+1);
            temp.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        string temp;
        int i = 0 ;
        permutater(res, s, temp, i);
        return res ;
    }
};