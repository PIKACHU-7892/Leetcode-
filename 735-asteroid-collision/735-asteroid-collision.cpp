class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> result; 
        for(int i = 0 ; i<asteroids.size();i++)
        { int flag = 0;
            while(!result.empty() && result.top()>0 && asteroids[i]<0)
            {
                int difference = result.top() + asteroids[i];
                if(difference<0)
                {
                    result.pop();
                }
                else if(difference>0)
                { flag = 1;
                 break;
                    
                }
                else
                {
                     result.pop();
                    flag = 1;
                    break;
                }
            }
         if(!flag)
         {
             result.push(asteroids[i]);
         }

        }
        vector<int> final;
        while(!result.empty())
        {
            final.push_back(result.top());
            result.pop();
        }
        reverse(final.begin(),final.end());
        return final;
    }
};