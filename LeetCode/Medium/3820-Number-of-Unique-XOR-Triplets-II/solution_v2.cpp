class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> XORpair;
        unordered_set<int> ans;


        for(int x = 0;x<nums.size();x++){
            for(int y = x;y<nums.size();y++){
                XORpair.insert(nums[x]^nums[y]);
            }
        }
        for(int x:XORpair){
            for(int y:nums){
                ans.insert(x^y);
            }
        }

        return ans.size();
    }
};