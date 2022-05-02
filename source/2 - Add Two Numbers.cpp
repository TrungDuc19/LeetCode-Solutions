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
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        bool flag = false;
        while (l1 || l2) {
            int val = 0;
            if (l1 != nullptr) val += l1->val;
            if (l2 != nullptr) val += l2->val;
            if (flag) val++;
            flag = val > 9;
            curr->next = new ListNode(val % 10);
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
            curr = curr->next;
        }
        if (flag) curr->next = new ListNode(1);
        return dummy->next;
    }
};
