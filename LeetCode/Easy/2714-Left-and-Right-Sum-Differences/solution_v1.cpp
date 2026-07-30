class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        
        vector<int> leftSum;
        int sum=0;
        for (auto num:nums){
                        leftSum.push_back(sum);
                        sum += num;
                        
        }
        int n = nums.size();
        int rightSum[n];
        int rsum=0;
        
        for (int j=n-1;j>=0;j--){
              rightSum[j]=(rsum);
             rsum += nums[j];
                        
        }
        vector<int> result;
        for(int i=0; i<n;i++){
            result.push_back(abs(leftSum[i]-rightSum[i]));
        }
        
        return result;
    }
};