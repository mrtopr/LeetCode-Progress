class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> cnt(0);
        
        for(auto s : text){
            if(s=='b' || s=='a' || s=='l' || s=='o' || s=='n') cnt[s]++;
        }
        
        int b = cnt['b'];
        int a = cnt['a'];
        int l = cnt['l']/2;
        int o = cnt['o']/2;
        int n = cnt['n'];
        
        
        return min({b,a,l,o,n});
        
    }
};