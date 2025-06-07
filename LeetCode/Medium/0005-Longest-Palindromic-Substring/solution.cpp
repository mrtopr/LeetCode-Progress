class Solution {
public:
    // Helper function to check if s[i..j] is a palindrome
    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        int maxLen = 0;
        int start = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if ((j - i + 1) > maxLen && isPalindrome(s, i, j)) {
                    start = i;
                    maxLen = j - i + 1;
                }
            }
        }

        return s.substr(start, maxLen);
    }
};
