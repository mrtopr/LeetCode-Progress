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
    ListNode* partition(ListNode* head, int x) {
        ListNode before(0), after(0);
        ListNode* before_curr = &before;
        ListNode* after_curr = &after;
        ListNode* temp = head;
        while(temp){
            if(temp->val <x){
              before_curr->next = temp;
              before_curr = temp;
            }

            else{
                after_curr->next = temp;
                after_curr = temp;

            }
            temp = temp->next;
        }
           after_curr->next = NULL;
        before_curr->next = after.next;
         return before.next;
    }
};