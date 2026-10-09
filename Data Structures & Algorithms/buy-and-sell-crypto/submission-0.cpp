class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimumprice = prices[0];
        int profit = 0;
        for(int i=1; i<prices.size(); i++) {
            int cost = prices[i] - minimumprice;
            profit = max(profit, cost);
            minimumprice = min(minimumprice, prices[i]);
        }
        return profit;
    }
};
