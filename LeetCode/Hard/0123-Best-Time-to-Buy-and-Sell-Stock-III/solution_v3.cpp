class Solution {
public:
    int solvetab(vector<int>& prices) {
        int n = prices.size();
        

            vector<vector<int>> curr(2, vector<int>(3,0));
            vector<vector<int>> nxt(2, vector<int>(3,0));
        

        for (int i = n - 1; i >= 0; i--) {
            for (int buy = 0; buy <= 1; buy++) {
                for (int limit = 1; limit <= 2; limit++) {
                    int profit = 0;
                    if (buy) {
                        int buykro = -prices[i] + nxt[0][limit];
                        int skipkro = 0 + nxt[1][limit];
                        profit = max(buykro, skipkro);

                    } else {
                        int sellkro = prices[i] + nxt[1][limit - 1];
                        int skipkro = 0 + nxt[0][limit];
                        profit = max(sellkro, skipkro);
                    }
                    curr[buy][limit] = profit;
                }
            }
            nxt = curr;
        }
        return nxt[1][2];
    }

    int maxProfit(vector<int>& prices) { return solvetab(prices); }
};