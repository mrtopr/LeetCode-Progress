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

        ListNode* reverseList(ListNode* head) {
    // Base case: if list is empty or has only one node
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Reverse the rest of the list
    ListNode* newHead = reverseList(head->next);

    // Make the next node point back to the current node
    head->next->next = head;

    // Break the old link
    head->next = NULL;

    return newHead;

    }
};