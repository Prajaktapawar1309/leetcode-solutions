// 189. Rotate Array | Medium
// Approach: k = k % n, reverse whole array, reverse first k, reverse the rest
// Time: O(n) | Space: O(1)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};