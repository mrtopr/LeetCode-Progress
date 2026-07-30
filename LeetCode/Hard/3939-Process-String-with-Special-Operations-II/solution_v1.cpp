class Solution {
public:
    char processStr(string s, long long k) {
        vector<long long> len;
        long long cur = 0;

        for (char ch : s) {
            if (islower(ch)) cur++;
            else if (ch == '*') { // pop
                if (cur) cur--;
            }
            else if (ch == '#') cur *= 2;
// double 
            len.push_back(cur);
        }

        if (k >= cur) return '.';

        for (int i = s.size() - 1; i >= 0; i--) {
            long long prev = (i ? len[i - 1] : 0);

            if (s[i] == '#')
                k %= prev;

            else if (s[i] == '%')
                k = len[i] - 1 - k;

            else if (islower(s[i]) && k == len[i] - 1)
                return s[i];
        }

        return '.';
    }
};