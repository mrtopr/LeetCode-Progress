class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maxCount = 0;
        int ans  = 0;
        unordered_map<int,int> maj; 
        for(int i=0;i<n;i++){
            maj[nums[i]]++;
            if(maj[nums[i]] > maxCount) {
                maxCount= maj[nums[i]];
                ans = nums[i];
                
            }
        
        }
        return ans;
    }
};