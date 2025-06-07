class Solution {
public:
    bool isPowerOfThree(int n) {
        int long product = 1;
        while(product < n)   {
            product = product * 3;
        }

        if(product == n) return true;
        else return false;
    }
};