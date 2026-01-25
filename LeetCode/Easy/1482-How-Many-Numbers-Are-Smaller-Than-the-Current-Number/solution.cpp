class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> freq;
        for(int i=0;i<nums.size();i++){
            int a = nums[i];
            int count = 0;
            for(int j = 0;j<nums.size();j++){
                if(a>nums[j]) count++;
            }
            freq.push_back(count);
        }
        return freq;
    }
};