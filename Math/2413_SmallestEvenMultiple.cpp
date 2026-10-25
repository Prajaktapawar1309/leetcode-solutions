// 2413. Smallest Even Multiple | Easy
// Approach: If n is even the answer is n, otherwise it is 2 * n
// Time: O(1) | Space: O(1)

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 == 0) {
            return n;
        }
        return 2 * n;
    }
};