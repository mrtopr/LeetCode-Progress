#include<queue>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        deque<char> dq;
         int ans = 0;

        for(int i=0;i<s.length();i++){
         
            char ch = s[i];
               

        while(!dq.empty() && find(dq.begin(),dq.end(),ch) != dq.end()){
            dq.pop_front();
        }
        dq.push_back(ch);
       ans = max(ans , (int)dq.size());
        }
        return ans;
    }
};