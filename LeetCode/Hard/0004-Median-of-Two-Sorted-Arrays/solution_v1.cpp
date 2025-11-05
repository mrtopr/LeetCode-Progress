class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        // Combine the two vectors
        int m = nums1.size();
        int n = nums2.size();
        std::vector<int> num3;
        
        // Add elements from nums1 to num3
        for (int i = 0; i < m; i++) {
            num3.push_back(nums1[i]);
        }

        // Add elements from nums2 to num3
        for (int i = 0; i < n; i++) {
            num3.push_back(nums2[i]);
        }

        // Sort the combined vector
        std::sort(num3.begin(), num3.end());

        // Find the median
        int total = m + n;
        if (total % 2 == 1) {
            // If the total number of elements is odd, return the middle element
            return num3[total / 2];
        } else {
            // If the total number of elements is even, return the average of the two middle elements
            return (num3[total / 2 - 1] + num3[total / 2]) / 2.0;
        }
    }
};
