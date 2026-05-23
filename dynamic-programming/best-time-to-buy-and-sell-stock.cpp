class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int minimal = arr[0];
       int maxprofit = 0;

       for(int i = 0 ; i < arr.size() ; i++){
        int cost = arr[i] - minimal;
        maxprofit = max(maxprofit,cost);
        minimal = min(minimal,arr[i]);
       } 
       return maxprofit;
    }
};