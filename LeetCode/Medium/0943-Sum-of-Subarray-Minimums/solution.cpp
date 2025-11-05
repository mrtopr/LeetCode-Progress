class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int n = arr.size();
        long long result = 0;
        stack<int> st;

        for (int i = 0; i <= n; ++i) {
            int curr = (i < n) ? arr[i] : 0;

            while (!st.empty() && arr[st.top()] > curr) {
                int mid = st.top(); st.pop();
                int left = st.empty() ? -1 : st.top();
                int right = i;

                long long count = (mid - left) * (right - mid) % MOD;
                result = (result + arr[mid] * count % MOD) % MOD;
            }

            st.push(i);
        }

        return (int)result;
    }
};
