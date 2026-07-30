class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans =0;
        long long sum = 0;
        while(n>0){
            int a = n%10;
            if(a!=0) ans =ans*10+a;
            sum += a;
            n/=10;
        }
        long long  res =0;
        
        while(ans>0){
            int b = ans%10;
            res = res *10 +b;
            ans/=10;
           
        }
       
        
        return res*sum;
    }
};