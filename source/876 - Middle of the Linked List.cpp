class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp = head;
        int cnt = 0;
        while (head != nullptr) {
            cnt++;
            head = head->next;
        }
        cnt >>= 1;
        while (cnt--) {
            tmp = tmp->next;
        }
        return tmp;
    }
};
