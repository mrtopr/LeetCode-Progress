class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
  
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
        count[nums[i]]++;
        }

 priority_queue<pair<int,int>> pq;
  for(auto &p : count){
     pq.push({p.second, p.first});
      }
      vector<int> ans; for(int i=0; i<k; i++){ ans.push_back(pq.top().second); pq.pop(); }
        return ans;
    }
};