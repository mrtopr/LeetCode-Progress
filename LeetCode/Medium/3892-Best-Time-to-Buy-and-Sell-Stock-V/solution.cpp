class Solution {
public:
    long long maximumProfit(vector<int>& prices, int k) {

        int n = prices.size();

        vector<vector<vector<long long>>> dp(
            n + 1,
            vector<vector<long long>>(k + 1,
            vector<long long>(3, 0))
        );

        for(int t = 0; t <= k; t++) {
            dp[n][t][1] = -1e18; // long open
            dp[n][t][2] = -1e18; // short open
        }

        for(int i = n - 1; i >= 0; i--) {

            for(int t = 0; t <= k; t++) {

                // State 0 : Neutral

                long long ans = dp[i+1][t][0];

                if(dp[i+1][t][1] != -1e18)
                    ans = max(ans,
                              prices[i] + dp[i+1][t][1]);

                if(dp[i+1][t][2] != -1e18)
                    ans = max(ans,
                              -prices[i] + dp[i+1][t][2]);

                dp[i][t][0] = ans;

                // State 1 : Long Position

                dp[i][t][1] = dp[i+1][t][1];

                if(t > 0)
                    dp[i][t][1] =
                        max(dp[i][t][1],
                            dp[i+1][t-1][0] - prices[i]);

                // State 2 : Short Position

                dp[i][t][2] = dp[i+1][t][2];

                if(t > 0)
                    dp[i][t][2] =
                        max(dp[i][t][2],
                            dp[i+1][t-1][0] + prices[i]);
            }
        }

        return dp[0][k][0];
    }
};