class Solution {
public:
double myPow(double x, int n) {  
    if (n == 0) {  
        return 1.0;  
    }  

    if (n == 1) {  
        return x;  
    }  

    if (n == -1) {  
        return 1.0 / x;  
    }  

    long long abs_n = static_cast<long long>(n);  
    if (n < 0) {  
        abs_n = -abs_n;  
        x = 1.0 / x;  
    }  

    double result = 1.0;  
    while (abs_n > 0) {  
        if (abs_n % 2 == 1) {  
            result *= x;  
        }  
        x *= x;  
        abs_n /= 2;  
    }  

    return result;  
}   
};