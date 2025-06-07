class Solution {
public:
    string reverseWords(string s) {
        string ans, word;
        for (char c : s) (c == ' ' ? ans += string(word.rbegin(), word.rend()) + " ", word = "" : word += c);
        return ans + string(word.rbegin(), word.rend());
    }
};
