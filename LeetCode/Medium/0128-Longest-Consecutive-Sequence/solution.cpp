class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//           int n = nums.size();
//         unordered_map<int,int> mp(n,0);
// int ans = 0;
//         for(int i = 0 ; i<n;i++){
//             if(mp[nums[1] - 1] != 0 ) ans++;
//            else  mp[nums[i]]++;
//         }


        sort(nums.begin(), nums.end());
int count  = 1;
int ans = 1;
  if(nums.empty()) return 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] + 1 == nums[i+1]) count++;
            else if (nums[i+1] == nums[i])     continue;
            else {
                ans = max(count, ans);
                count = 1;
            }
        }
        return max(count, ans);
    }
};