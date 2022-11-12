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
        ListNode* solution;
        ListNode* tail = nullptr;
        
        // Last value before % 10 is applied.
        int last_val;

        do {
            int l1_val;
            int l2_val;
            if (l1 == nullptr) {
                l1_val = 0;
                l2_val = l2->val;
                l2 = l2->next;
            }
            else if (l2 == nullptr) {
                l2_val = 0;
                l1_val = l1->val;
                l1 = l1->next;
            }
            else {
                l1_val = l1->val;
                l2_val = l2->val;

                l1 = l1->next;
                l2 = l2->next;
            }

            // First value. Initialize solution && set tail == solution.
            if (tail == nullptr) {
                last_val = l1_val + l2_val;
                solution = new ListNode(last_val%10);
                tail = solution;
            }
            else {
                last_val = (last_val-last_val%10)/10 + (l1_val+l2_val);
                tail->next = new ListNode(last_val%10);
                tail = tail->next;
            }
        } while (l1 != nullptr || l2 != nullptr);

        // Add remaining numbers.
        if (last_val-last_val%10 != 0) {
            tail->next = new ListNode((last_val-last_val%10)/10);
        }

        return solution;
    }
};