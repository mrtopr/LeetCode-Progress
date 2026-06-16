class Solution {
public:
   int solvetab(vector<int>& prices){
    int n = prices.size();

    vector<int> next(2,0);
    vector<int> curr(2,0);

    for (int i = n - 1; i >= 0; i--) {
        for (int buy = 0; buy <= 1; buy++) {

            int profit = 0;
            if (buy) {
                int buykro = -prices[i] + next[0];
                int skipkro = 0 + next[1];
                profit = max(buykro, skipkro);

            } else {
                int sellkro = prices[i] + next[1];
                int skipkro = 0 + next[0];
                profit = max(sellkro, skipkro);
            }
           curr[buy] = profit;
        }
        next = curr;
    }
    return next[1];
    } 

    int maxProfit(vector<int>& prices) {
        return solvetab(prices);
    }

};