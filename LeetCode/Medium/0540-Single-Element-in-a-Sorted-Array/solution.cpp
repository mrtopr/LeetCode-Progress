class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i,j;
        for( i=0, j=1;i<nums.size()-1,j<nums.size();i+=2, j+=2){
             if(nums[i] != nums[j]) break;
        }
        return nums[i];
    }
};