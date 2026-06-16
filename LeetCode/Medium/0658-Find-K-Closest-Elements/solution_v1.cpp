class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int m = 0;
        int minDiff = INT_MAX;
        vector<int> ans;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int diff = abs(arr[i] - x);
            if (diff < minDiff) {
                minDiff = diff;
                m = i;
            }
        }

        int left = m;
        int right = m + 1;

        while (ans.size() < k) {
            if (left >= 0 && right < n) {
                if (abs(arr[left] - x) <= abs(arr[right] - x)) {
                    ans.push_back(arr[left--]);
                } else {
                    ans.push_back(arr[right++]);
                }
            } else if (left >= 0) {
                ans.push_back(arr[left--]);
            } else {
                ans.push_back(arr[right++]);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};