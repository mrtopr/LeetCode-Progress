class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        
        
        long long mini = INT_MAX;
        long long maxi = INT_MIN;
        
        for(long long temp : nums){
            mini = min(mini,temp);
            maxi = max(maxi,temp);
        }
        return (maxi-mini)*k;
    }
};