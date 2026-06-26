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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prevGroup = &dummy;

        while (true) {
            // Check if there are k nodes ahead
            ListNode* kth = prevGroup;
            for (int i = 0; i < k && kth; i++) {
                kth = kth->next;
            }
            if (!kth) break;

            // Reverse k nodes
            ListNode* groupPrev = prevGroup->next;
            ListNode* curr = groupPrev->next;

            for (int i = 1; i < k; i++) {
                groupPrev->next = curr->next;
                curr->next = prevGroup->next;
                prevGroup->next = curr;
                curr = groupPrev->next;
            }

            prevGroup = groupPrev;
        }

        return dummy.next;
    }
};
