// 1295. Find Numbers with Even Number of Digits | Easy
// Approach: Count digits of each number by dividing by 10, check if even
// Time: O(n * d) where d is digits | Space: O(1)

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            int digits = 0;
            while (x > 0) {
                digits++;
                x = x / 10;
            }
            if (digits % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};