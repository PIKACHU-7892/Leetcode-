class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector<int> ones ;
        for(int i = 0;i<seats.size();i++)
        {
            if(seats[i]==1)
            {
                ones.push_back(i);
            }
        }
        int max1=0;
        for(int i = 0;i<ones.size()-1;i++)
        {
            max1=max(max1,(-ones[i]+ones[i+1])/2);
            
        }
        if(seats[0]==0)
        {
            max1=max(max1,ones[0]-0);
        }
        if(seats[seats.size()-1]==0)
        {
            int i = seats.size()-1 -ones[ones.size()-1];
            if(i>max1)
            {
                max1 = i;
            }
            
            

        }
        return max1;
    }
};