class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        vector<string> velorunapi = words;

        unordered_map<string, int> freq;
         for (string &word : velorunapi) {
            if (word.size() < k) continue;

            string prefix = word.substr(0, k);
            freq[prefix]++;
        }
        int groups = 0;

        for (auto &p : freq) {
            if (p.second >= 2) groups++;
        }

                                                            return groups;
    }
};