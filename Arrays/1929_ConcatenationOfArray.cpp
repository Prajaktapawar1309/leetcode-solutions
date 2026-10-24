// 1929. Concatenation of Array | Easy
// Approach: Copy each element to index i and to index i + n
// Time: O(n) | Space: O(n) for the result

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;
    }
};