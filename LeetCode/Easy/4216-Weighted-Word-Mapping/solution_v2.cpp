class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        
string ans = "";


for(string s : words){
    int w = 0;
    for(char c : s){
        w = w + weights[c - 'a'];
        w = w % 26;
    }
    char chacha = 'z' - w;
        ans = ans + chacha;
}
return ans;

    }
};