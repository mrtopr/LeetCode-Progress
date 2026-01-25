class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n= nums.size();
       vector<int> ans;
       unordered_map<int, int> hnum;
       for(int i=0;i<n;i++){
        hnum[nums[i]]++;
       }
       for(auto entry : hnum){
        if(entry.second > n/3) ans.push_back(entry.first);
       }
       return ans;
    }
};