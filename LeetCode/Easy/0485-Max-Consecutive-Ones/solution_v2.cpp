#include<stack>
#include<vector>
class Solution {

public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxCount = 0;
        stack<int> s;

        for(int i=0;i<n;i++){
         if(nums[i] == 1) {
            s.push(nums[i]);
            count++;
            if(maxCount < count) maxCount = count;
         }
         else {
            while(!s.empty()){
                s.pop();
            }
            count = 0;
         }

        }
        return maxCount;
    }
};