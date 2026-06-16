class Solution {
public:
   int solvetab(vector<int>& prices){
    int n = prices.size();

    vector<vector<int>> dp(n + 1, vector<int>(2, 0));
    for (int i = n - 1; i >= 0; i--) {
        for (int buy = 0; buy <= 1; buy++) {

            int profit = 0;
            if (buy) {
                int buykro = -prices[i] + dp[i+1][0];
                int skipkro = 0 + dp[i+1][1];
                profit = max(buykro, skipkro);

            } else {
                int sellkro = prices[i] + dp[i+1][1];
                int skipkro = 0 + dp[i+1][0];
                profit = max(sellkro, skipkro);
            }
           dp[i][buy] = profit;
        }
    }
    return dp[0][1];
    }

    int maxProfit(vector<int>& prices) {
        return solvetab(prices);
    }

};