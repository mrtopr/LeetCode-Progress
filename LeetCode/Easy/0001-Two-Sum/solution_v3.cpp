class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> hashh;
        for(int i=0;i<nums.size();i++){
            int d = target - nums[i];
            if(hashh.find(d) != hashh.end() && hashh[d] != i) return {i,hashh[d]};
            else hashh.insert({nums[i],i});
        }
          return {};
    }
};