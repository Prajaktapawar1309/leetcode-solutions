// 1. Two Sum | Easy
// Approach: Hash map, store number and its index
// Time: O(n log n) with map | Space: O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            int moreNeeded=target-num;
            if(mpp.find(moreNeeded)!=mpp.end())
            {
                return{mpp[moreNeeded],i};
            
            }
            mpp[num]=i;
        }
        return{-1,-1};
        
    }
};