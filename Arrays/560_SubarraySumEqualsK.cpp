// 560. Subarray Sum Equals K | Medium
// Approach: Prefix sum with a hash map, look for sum - k
// Time: O(n) | Space: O(n)
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
        int preSum=0;
        int cnt=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            preSum+=nums[i];
            int remove=preSum-k;
            cnt+=mpp[remove];
            mpp[preSum]+=1;

        }
        return cnt;
        
    }
};