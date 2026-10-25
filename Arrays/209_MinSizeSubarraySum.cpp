// 209. Minimum Size Subarray Sum | Medium
// Approach: Variable sliding window, expand right, shrink left while sum >= target
// Time: O(n) | Space: O(1)

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int sum = 0;
        int best = INT_MAX;

        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];
            while (sum >= target) {
                best = min(best, r - l + 1);
                sum -= nums[l];
                l++;
            }
        }
        return best == INT_MAX ? 0 : best;
    }
};