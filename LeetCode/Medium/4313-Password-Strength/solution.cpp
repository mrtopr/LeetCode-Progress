class Solution {
public:
    int passwordStrength(string password) {
        int score = 0;
        unordered_set<char> visitedch;

        for(char ch : password) {
            if(visitedch.count(ch))
                continue;

           visitedch.insert(ch);
            
            if(ch>='a' && ch<= 'z'){
                score+=1;
            }
            if(ch>='A' && ch <= 'Z'){
                score+=2;
            }
            if(ch>='0' && ch <= '9'){
                score+=3;
            }
            if(ch =='!' || ch == '@' || ch =='#' || ch == '$'){
                score+=5;
            }
            
        }
        return score;
    }
};