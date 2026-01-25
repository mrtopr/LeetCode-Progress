class Solution {
public:

bool isAlphanumeric(char c){
    if(( c>='a' && c<='z') || ('0'<=c && c<='9' ) || c>='A' && c<='Z') return true;
    return false;
} 
    bool isPalindrome(string s) {
    
int st=0;
int end=s.size()-1;      
        while(st<=end){
           if(!isAlphanumeric(s[st])){
             st++;
            continue; }

            if(!isAlphanumeric(s[end])){ 
                end--;
                 continue;
                 }
            
            if(tolower(s[st])!=tolower(s[end]) ) return false;

            st++;
            end--;
        }


        
        return true;
        }

        
    
};