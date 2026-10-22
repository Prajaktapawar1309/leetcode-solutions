// 977. Squares of a Sorted Array | Easy
// Approach: Two pointers at both ends, fill the result from the back
// Time: O(n) | Space: O(n) for the result

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int l = 0;
        int r = n - 1;

        for (int k = n - 1; k >= 0; k--) {
            if (abs(nums[l]) > abs(nums[r])) {
                result[k] = nums[l] * nums[l];
                l++;
            } else {
                result[k] = nums[r] * nums[r];
                r--;
            }
        }
        return result;
    }
};