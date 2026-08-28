class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int mincost = prices[0];
        int maxprofit = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            int cost = prices[i] - mincost;

            maxprofit = max(maxprofit,cost);

            mincost = min(prices[i],mincost);

        }

        return maxprofit;
    }
};