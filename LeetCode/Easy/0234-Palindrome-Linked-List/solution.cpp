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
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        struct ListNode* temp = head;
        
        while(temp!=NULL){
            arr.push_back(temp->val);
           temp =temp->next;
        }
int n = arr.size();

        for(int j=0;j<n/2;j++){
            if(arr[j] != arr[n-j-1]){
                return false;
            } 
           
        }
         return true; 
    }
};