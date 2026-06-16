/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> arr;
        int maxi = 0;
        while (head){
            arr.push_back(head->val);
            head = head->next;
        }
        int n = arr.size();
        for(int i=0;i<n;i++){
            int s = arr[i] + arr[n-1-i];
            maxi = max(maxi , s);
        }
        return maxi;
    }
};