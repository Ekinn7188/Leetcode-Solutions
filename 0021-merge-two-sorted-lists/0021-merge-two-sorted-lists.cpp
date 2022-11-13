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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* solution = nullptr;
        ListNode* tail = nullptr;
        
        while (list1 != nullptr || list2 != nullptr) {
            int val1, val2;
            
            if (list1 == nullptr) {
                val1 = INT_MAX;
                val2 = list2->val;
            }
            else if (list2 == nullptr) {
                val1 = list1->val;
                val2 = INT_MAX;
            }
            else { 
                val1 = list1->val;
                val2 = list2->val;
            }
            
            if (solution == nullptr) {
                solution = new ListNode(min(val1, val2));
            }
            else if (tail == nullptr) {
                solution->next = new ListNode(min(val1, val2));
                tail = solution->next;
            }
            else {
                tail->next = new ListNode(min(val1, val2));
                tail = tail->next;
            }
            
            if (val1 < val2) {
                list1 = list1->next;
            }
            else {
                list2 = list2->next;
            }
        }
        
        return solution;
    }
};