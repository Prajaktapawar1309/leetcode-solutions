// 121. Best Time to Buy and Sell Stock | Easy
// Approach: Track minimum price so far, check profit each day
// Time: O(n) | Space: O(1)


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int n=prices.size();
        int mini=prices[0];
        for(int i=0;i<n;i++)
        {
            int cost=prices[i]-mini;
            maxProfit=max(cost,maxProfit);
            mini=min(mini,prices[i]);
        }
        return maxProfit;
        
    }
};
