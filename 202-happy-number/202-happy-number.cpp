class Solution {
public:
    int nextNumber(int n )
    {
        int totalsum = 0 ;
        while(n>0)
        {
            int d = n%10 ; 
            n = n /10;
            totalsum += d*d;
            

        }
        return totalsum ;
    }
    bool isHappy(int n) {
        unordered_set <int> a;
        while(n!=1 && a.find(n)==a.end())
        {
            a.insert(n);
            n = nextNumber(n);
            cout<<n<<endl;
        }
        cout<<n<<endl;
        return n==1;
    }
};