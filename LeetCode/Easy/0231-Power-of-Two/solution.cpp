class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false; // Prevent infinite loop and invalid input

        unsigned long long ans = 1;

        while (ans < n) {
            ans *= 2;
        }

        return ans == n;
    }
};
