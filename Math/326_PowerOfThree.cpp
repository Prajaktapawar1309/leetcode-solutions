// 326. Power of Three | Easy
// Approach: Keep dividing by 3 while divisible, then check if 1 is left
// Time: O(log n) | Space: O(1)
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        while(n%3==0)
        {
            n=n/3;
        }
        return n==1;
        
    }
};