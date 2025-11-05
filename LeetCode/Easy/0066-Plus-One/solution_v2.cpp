class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int n = digits.size()-1;
        for(int i=n;i>=0;i--){
            int sum = digits[i]+carry;
            digits[i] = sum%10;
            carry = sum/10;   //399
        }
        if(carry) digits.insert(digits.begin(),1);
        return digits;
    }
};