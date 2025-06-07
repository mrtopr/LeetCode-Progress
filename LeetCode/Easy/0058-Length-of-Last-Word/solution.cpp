class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = (int)s.size() - 1;
        // skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            --i;
        }
        // count letters of last word 
        int length = 0;
        while (i >= 0 && s[i] != ' ') {
            i--;
            length++;
        }
        return length;
    }
};