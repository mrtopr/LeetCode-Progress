class Solution {
public:
    int solve(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n + 1, vector<int>(2 * k+1, 0));

        for (int index = n - 1; index >= 0; index--) {
            for (int op = 0; op < 2 * k; op++) {
                int profit = 0;
                if (op % 2 == 0) {
                    // buy allowd
                    int buykro = -prices[index] + dp[index + 1][op + 1];
                    int skipkro = 0 + dp[index + 1][op];
                    profit = max(buykro, skipkro);
                } else {
                    // sell allowed
                    int sellkro = prices[index] + dp[index + 1][op + 1];
                    int skipkro = 0 + dp[index + 1][op];
                    profit = max(sellkro, skipkro);
                }
                dp[index][op] = profit;
            }
        }
        return dp[0][0];
    }

    int maxProfit(int k, vector<int>& prices) { return solve(k, prices); }
};