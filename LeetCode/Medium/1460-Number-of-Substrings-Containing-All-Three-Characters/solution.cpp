class Solution {
public:
    int numberOfSubstrings(string s) {
        int left =0;
        int right = 0;
        int ans= 0;
        int n = s.length();
       int count[3] = {0};
        while(left<n && right <n){
            count[s[right] - 'a']++;
            while(count[0]>0 && count[1]>0 && count[2]>0){
                ans += (n-right);
                count[s[left] - 'a']--;
left++;                
            }
            right++;
        }
        return ans;
    }
};