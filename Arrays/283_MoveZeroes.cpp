// 283. Move Zeroes | Easy
// Approach: Two pointers, swap non-zero to front
// Time: O(n) | Space: O(1)


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        
    }
};