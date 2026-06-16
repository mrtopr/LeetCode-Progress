class Solution {
public:

    int solvetab(vector<int>& prices, int k) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(
            n+1, vector<vector<int>>(2, vector<int>(k+1, 0)));
        

        for (int i = n - 1; i >= 0; i--) {
            for (int buy = 0; buy <= 1; buy++) {
                for (int limit = 1; limit <= k; limit++) {
                    int profit = 0;
                    if (buy) {
                        int buykro = -prices[i] + dp[i + 1][0][limit];
                        int skipkro = 0 + dp[i + 1][1][limit];
                        profit = max(buykro, skipkro);

                    } else {
                        int sellkro = prices[i] + dp[i + 1][1][limit - 1];
                        int skipkro = 0 + dp[i+1][0][limit];
                        profit = max(sellkro, skipkro);
                    }
                    dp[i][buy][limit] = profit;
                }
            }
        }
        return dp[0][1][k];
    }



    int maxProfit(int k, vector<int>& prices) {
        return solvetab(prices,k);
    }
};