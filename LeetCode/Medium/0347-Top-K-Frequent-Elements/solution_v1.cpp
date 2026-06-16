class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencyMap; // Step 1: Count frequencies
        for (int num : nums) {
            frequencyMap[num]++;
        }

        // Step 2: Use a max heap (priority queue)
        priority_queue<pair<int, int>> maxHeap; // Pair: {frequency, num}
        for (auto& entry : frequencyMap) {
            maxHeap.push({entry.second, entry.first});
        }

        vector<int> result; // Step 3: Extract results
        for (int i = 0; i < k; i++) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return result;
    }
};