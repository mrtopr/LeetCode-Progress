class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        for(int i = nums.size()-1;i>=0;i--){
            for(int j = i-1;j>=0;j--){
                if(nums[i]-nums[j]==diff) {
                    for(int k = j-1;k>=0;k--){
                        if(nums[j]-nums[k]==diff) count++;
                    }
                }
            }
        }
        return count;
    }
};