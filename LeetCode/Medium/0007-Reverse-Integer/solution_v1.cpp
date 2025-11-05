class Solution {
public:
    int reverse(int x) {
        long long num = 0;
        while (x != 0) {
            int digit = x % 10;
            num = num * 10 + digit;
            x = x / 10;
        }
        // Check for 32-bit int overflow
        if (num < INT_MIN || num > INT_MAX)
            return 0;
        return static_cast<int>(num);
    }
};
