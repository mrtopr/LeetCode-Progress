class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int num1 = -1;
        int num2 = -1;
        for(int i=0; i<nums.size(); i++){

            if(nums[i] == target) {
                if(num1 == -1) {
                    num1 = i;
                    num2 = i;
                    
                }
                
                else num2 = i;
            }
        }
        
              return {num1, num2} ;
    }
};