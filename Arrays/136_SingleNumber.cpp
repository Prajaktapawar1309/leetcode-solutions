// 136. Single Number | Easy
// Approach: XOR all numbers, pairs cancel out
// Time: O(n) | Space: O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            result=result^nums[i];
        }
        return result;
    }
};
