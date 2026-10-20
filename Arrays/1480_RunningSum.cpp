// 1480. Running Sum of 1d Array | Easy
// Approach: Add the previous running total to each number, in place
// Time: O(n) | Space: O(1)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        return nums;
        
    }
};