// 27. Remove Element | Easy
// Approach: Two pointers, copy every number that is not val to position j
// Time: O(n) | Space: O(1)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
        
    }
};