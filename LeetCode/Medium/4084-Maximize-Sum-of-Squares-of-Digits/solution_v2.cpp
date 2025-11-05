class Solution {
public:

   int score(int n){
       int sq = 0;
       int lastDigit;
       while(n!=0){
          
          lastDigit = n%10;
           sq = sq + lastDigit*lastDigit ;
           n = n/10;
       }
       return sq;
   }

    bool Good(int n, int num, int sum){
        int lastDigit;
        int count = 0;
        int adds = 0;
         while(n!=0){
          lastDigit = n%10;
          count++;
             adds = adds+lastDigit;
           n = n/10;
       }
      return (count == num && adds == sum) ;
    }

    
    string maxSumOfSquares(int num, int sum) {
      if (sum > 9 * num || sum < 0)
            return "";

        string ans = "";

        // Build the number digit by digit from the most significant side
        for (int i = 0; i < num; i++) {
            if (sum >= 9) {
                ans += '9';
                sum -= 9;
            } else {
                ans += char('0' + sum);
                sum = 0;
            }
        }

        // If sum left > 0, no valid number possible
        if (sum > 0)
            return "";

        return ans; // the largest number
    }
};