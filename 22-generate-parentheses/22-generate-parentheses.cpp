class Solution {
public:
    void paranthesis(string &s,int open , int close, vector<string> &result )
    {
        if(open==close && open == 0)
        {
            result.push_back(s);
            return;
            
        }
        if(open>0)
        {
            s.push_back('(');
            paranthesis(s,open-1,close,result);
            s.pop_back();
        }
        if(close>open)
        {
            s.push_back(')');
            paranthesis(s,open,close-1,result);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string s; 
        paranthesis(s,n,n, result);
        return result;
    }
};