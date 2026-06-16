class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result = "";

        for (string &word : words) {
            int total = 0;

            for (char c : word) {
                total += weights[c - 'a'];
            }

            int m = total % 26;
            char mapped = 'z' - m;  // reverse mapping

            result.push_back(mapped);
        }

        return result;
        
    }
};