class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(0<s.length() && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};