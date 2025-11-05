class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp2 = head;
        int count = 0;

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        
        for (int i = 0; i < count / 2; i++) {
            temp2 = temp2->next;
        }

        return temp2;
    }
};
