// 342. Power of Four | Easy
// Approach: Keep dividing by 4 while divisible, then check if 1 is left
// Time: O(log n) | Space: O(1)

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
            return false;
        }
        while (n % 4 == 0) {
            n = n / 4;
        }
        return n == 1;
    }
};