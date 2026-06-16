class KthLargest {
public:
    priority_queue<int, std::vector<int>, std::greater<int>> MinHeap;
       int K;
    KthLargest(int k, vector<int>& nums) {
     K=k;
        for (int num : nums) {
            MinHeap.push(num);
            if (MinHeap.size() > k) {
                MinHeap.pop();
            }
        }
    }

    int add(int val) {
        MinHeap.push(val);
        if (MinHeap.size()>K) {
            MinHeap.pop();
        }
        return MinHeap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */