class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int ans =0;
        int e=x;
        while(s<=e){
            long long  m = s+(e-s)/2;
            if(m*m<x) {
                s = m+1;
                ans = m;
            }
            else if(m*m>x) e=m-1;
            else return m;
        }
        return ans;
    }
};