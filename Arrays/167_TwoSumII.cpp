// 167. Two Sum II - Input Array Is Sorted | Medium
// Approach: Two pointers from both ends, move based on the sum
// Time: O(n) | Space: O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r=numbers.size()-1;

        while(l<r)
        {
            int sum=numbers[l]+numbers[r];
            if(sum==target)
            {
                return {l+1,r+1};
            }
            else if(sum<target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return{};
    }
};