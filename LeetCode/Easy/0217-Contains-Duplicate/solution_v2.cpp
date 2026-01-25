class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(),nums.end());
       
        
        if(seen.size() < nums.size()) return true;
        else return false;
    }
};