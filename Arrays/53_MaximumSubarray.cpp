// 53. Maximum Subarray | Medium
// Approach: Kadane's, extend the sum or start fresh
// Time: O(n) | Space: O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=nums[0];
        int maxSum=nums[0];

        for (int i=1;i<nums.size();i++){
            curr=max(nums[i],curr+nums[i]);
            maxSum=max(maxSum,curr);
        }
        return maxSum;
        
    }
};