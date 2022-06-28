class Solution {
public:
    int hammingWeight(uint32_t n) {
        // trick is to use n& n-1
        int count = 0 ;
         while(n)
         {
             n = n& (n-1);
             count++;
         }
        return count ; 
    }
};