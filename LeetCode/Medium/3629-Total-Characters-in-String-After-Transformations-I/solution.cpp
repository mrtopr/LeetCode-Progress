class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int MOD = 1e9 + 7;

        vector<vector<long long>> dp(26, vector<long long>(t+1, 0));

        // Base case
        for(int c=0; c<26; c++) dp[c][0] = 1;

        for(int k=1; k<=t; k++) {
            for(int c=0; c<26; c++) {
                if(c == 25) { // 'z'
                    dp[c][k] = (dp[0][k-1] + dp[1][k-1]) % MOD;
                } else {
                    dp[c][k] = dp[c+1][k-1];
                }
            }
        }

        long long ans = 0;
        for(char ch : s) {
            ans = (ans + dp[ch - 'a'][t]) % MOD;
        }

        return (int)ans;
    }
};
