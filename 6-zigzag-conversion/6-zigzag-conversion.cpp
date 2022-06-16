class Solution {
public:
    string convert(string s, int numRows) {
         if(numRows ==1 ){
             return s ;
         }
        else{
            string t ; 
            int len = s.size();
            int cycle = 2*numRows -2 ; 
            for(int i = 0;i<numRows;i++)
            {
                for(int j = 0; j+i<len ;j+= cycle)
                {
                    t=t + s[j+i];
                    if(i != 0 && i != numRows-1 && j+ cycle -i < len )
                    {

                    t = t+ s[j+cycle -i];}
                }
            }
            return t;
        }
    }
};