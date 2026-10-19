// 217. Contains Duplicate | Easy
// Approach: Hash set, return true if the number was already seen
// Time: O(n) | Space: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>seen;
        for(int i=0;i<nums.size();i++){
            if(seen.find(nums[i])!=seen.end()){
            return true;
            }
            seen.insert(nums[i]);

        }
        return false;
        
    }
};