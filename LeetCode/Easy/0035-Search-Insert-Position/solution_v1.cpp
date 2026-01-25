class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int find = 0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]== target) find = i;
            else {
                if(nums[i] < target) find = i+1;
            }
        }
        return find;
    }
};