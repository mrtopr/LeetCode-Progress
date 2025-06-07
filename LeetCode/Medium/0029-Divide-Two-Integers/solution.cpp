class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle edge case: Prevent integer overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; // Avoid overflow
        }

        return dividend / divisor; // Normal division
    }
};
