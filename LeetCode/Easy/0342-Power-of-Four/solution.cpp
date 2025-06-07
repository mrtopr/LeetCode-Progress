class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<0) return false;
        else if(n==1) return true;
        
        unsigned long long ans = 1;
        while(ans<n){
            ans = ans*4;
        }

        return ans==n;
    }
};