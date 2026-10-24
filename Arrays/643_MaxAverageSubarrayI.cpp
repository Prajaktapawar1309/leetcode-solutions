// 643. Maximum Average Subarray I | Easy
// Approach: Fixed sliding window, add the new element and remove the old one
// Time: O(n) | Space: O(1)

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double best = sum;

        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];
            best = max(best, sum);
        }
        return best / k;
    }
};