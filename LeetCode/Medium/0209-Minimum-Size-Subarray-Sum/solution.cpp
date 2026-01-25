
#include<queue>

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        deque<int> dq;
        int ans = INT_MAX;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            dq.push_back(nums[i]);
            sum += nums[i];
            while(!dq.empty() && sum>=target){
                ans = min(ans, (int)dq.size());

                sum -= dq.front();
                dq.pop_front();
            }
        
               
            
        }
        return (ans != INT_MAX) ? ans : 0;
    }
};