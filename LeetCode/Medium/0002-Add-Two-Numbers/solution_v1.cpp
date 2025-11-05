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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        struct ListNode* result = new ListNode(0);
        struct ListNode* dummy = result;
int r = 0;
        while(l1 != NULL || l2!=NULL || r != 0){
         int a = (l1!=NULL) ? l1->val : 0 ;
         int b = (l2!= NULL) ? l2->val : 0;
         int sum =  a + b + r;

         r = sum/10;
         result->next = new ListNode(sum%10);
         if(l1!=NULL) l1 = l1->next;
         if(l2!=NULL) l2 = l2->next;
         result = result->next;
         
        }
        return dummy->next;
        
    }
};