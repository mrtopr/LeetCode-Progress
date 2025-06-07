class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> Index1(200,0);
         vector<int> Index2(200,0);

         if(s.length()!=t.length()){
            return false;
         }

         else{
            for(int i=0;i<s.length();i++){
                if(Index1[s[i]] != Index2[t[i]]){
                    return false;
                }
                Index1[s[i]] = i+1 ;
                Index2[t[i]] = i+1 ;
            }

         }
         return true;
    }
};