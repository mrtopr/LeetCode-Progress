class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map <int,int> countN;
        vector<int> anss;
        
        for(int i=0;i<nums.size();i++){
        countN[nums[i]]++;

            if(countN[nums[i]] <= k) {
                anss.push_back(nums[i]);
            }
        
        }
        return anss;
    }
};