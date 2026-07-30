class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        
        int leftSum=0;
       int rightSum = 0; 
        for (auto num:nums){
         
         rightSum += num; // totalSum
                        
        }
        vector<int> ans; 
        
        for(int a : nums){
            ans.push_back(abs(leftSum-(rightSum-(leftSum+a))));
        
        leftSum += a;
        }
        
        return ans;
            }
};