class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n+1,0);
        for(int i = 0;i<nums.size();i++){
            count[nums[i]]++;
            
        }
        int i=1;
        int duplicate,missing;
        while(i!=n+1){
        if(count[i]==2) duplicate = i;
        if(count[i]==0) missing = i;
        i++;
        }
return {duplicate,missing};

    }
};