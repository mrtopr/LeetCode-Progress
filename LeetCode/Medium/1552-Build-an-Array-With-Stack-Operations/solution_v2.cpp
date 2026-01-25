#include<stack>
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack <int> s;
        vector <string> ans;
        int j = 0;
        for(int i=1;i<=n && j < target.size();i++){
            s.push(i);
            ans.push_back("Push");
            if(s.top() == target[j]){
                j++;
            }
            else {
                s.pop();
                 ans.push_back("Pop");
            }
           

        }
        return ans;
    }
};