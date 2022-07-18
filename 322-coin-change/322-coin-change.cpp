class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> change(amount+1,amount+1);
        change[0]= 0;
        for(int i = 1;i<amount +1 ;i++)
        {
            for(auto x: coins)
            {
                if(i-x>=0)
                {
                    change[i] = min(change[i],1+change[i-x]);
                }
            }

        }
        if(change[amount]== amount+1)
        {
            return -1;
        }
        else
        {
            return change[amount];
        }
        
    }
};