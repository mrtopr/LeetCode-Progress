class Solution {
    int value(char s) {
        switch (s) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0; // optional safety for invalid input
        }
    }

public:
    int romanToInt(string s) {
        int ans = 0;
        int i = 0;

        while (s[i] != '\0') {
            int val1 = value(s[i]);
            int val2 = value(s[i + 1]);

            if (s[i + 1] != '\0' && val1 < val2) {
                ans += (val2 - val1);
                i += 2;
            } else {
                ans += val1;
                i++;
            }
        }

        return ans;
    }
};
