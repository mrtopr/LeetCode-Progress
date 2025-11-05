class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (int x : nums) {
            if (k==0 || k==1 || x != nums[k - 2]) {
                nums[k] = x;
                k++;
            }
        }
        return k;
    }
};