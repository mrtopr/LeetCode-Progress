class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++) {
            int x = nums1[i];
            int pos = -1;

            // Find position of x in nums2
            for(int j = 0; j < nums2.size(); j++) {
                if(nums2[j] == x) {
                    pos = j;
                    break;
                }
            }

            int nextGreater = -1;

            // Look to the right of that position in nums2
            for(int k = pos + 1; k < nums2.size(); k++) {
                if(nums2[k] > x) {
                    nextGreater = nums2[k];
                    break;
                }
            }

            ans.push_back(nextGreater);
        }

        return ans;
    }
};
