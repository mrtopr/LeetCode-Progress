class Solution {
public:
int GCD(int a , int b){
    
    int r = a%b;
    if(r==0) return b;
   return GCD(b,r);
}
    int findGCD(vector<int>& nums) {
        int mini = INT_MAX;
        int mx = INT_MIN;
        
        for(auto a:nums){
            mini = min(mini,a);
            mx = max(mx,a);
        }
        return GCD(mx,mini);
    }
};