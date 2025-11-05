class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int count[10] = {0};

        
        if (n == 0) count[0]++; 
        while (n > 0) {
            int lastDigit = n % 10;
            count[lastDigit]++;
            n /= 10;
        }

       
        int minFreq = INT_MAX;
        for (int d = 0; d < 10; d++) {
            if (count[d] > 0) {
                minFreq = min(minFreq, count[d]);
            }
        }

     
        for (int d = 0; d < 10; d++) {
            if (count[d] == minFreq) {
                return d;
            }
        }

        return -1;
    }
};
