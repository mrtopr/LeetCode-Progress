class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        
string ans = "";
unordered_map<char, int> mp;

for(int i = 0; i < 26; i++) {
    mp['a' + i] = i;
}


for(string s : words){
    int w = 0;
    for(char c : s){
        w = w + weights[mp[c]];
        w = w % 26;
    }
    char chacha = 'z' - w;
        ans = ans + chacha;
}
return ans;

    }
};