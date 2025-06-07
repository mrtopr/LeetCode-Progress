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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        struct ListNode* curr = head;
        struct ListNode* prev;
        struct ListNode* temp = head;
    int count = 0;
    while(temp!= NULL){
        temp = temp->next;
        count++;
    }

    if (n == count) {
            return head->next;
        } 

    int i=1;
        while(i!=count-n+1){
             prev = curr;
            curr = curr->next;
           
            i++;
        }
        prev->next = curr->next;
        delete curr;
return head;
    }
};