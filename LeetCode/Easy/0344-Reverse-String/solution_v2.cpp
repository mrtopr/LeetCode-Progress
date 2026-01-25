
class Solution {
public:
    void reverseString(vector<char>& s) {
       stack<char> st;
      
       for(auto num : s){
        st.push(num);
       }

               for (int i = 0; i < s.size(); i++) {
            s[i] = st.top();
            st.pop();
        }

    }
};