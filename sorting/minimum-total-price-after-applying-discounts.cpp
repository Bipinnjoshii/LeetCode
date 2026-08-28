class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n = prices.size();
        int m = discounts.size();

        sort(discounts.rbegin(),discounts.rend());
        sort(prices.rbegin(),prices.rend());

        int i = 0;
        int j = 0;

        double ans = 0;

        while(i < n && j < m){
            ans += (prices[i] * (100 - discounts[j])) / 100.0;
            i++;
            j++;
        }
        
        while(i < n){
            ans += prices[i];
            i++;
        }
        return ans;
    }
};