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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new struct ListNode(0);
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* ptr = dummy;
            while (ptr->next != NULL && ptr->next->val <= curr->val) {
                ptr = ptr->next;
            }
            ListNode* temp = curr->next;
            curr->next = ptr->next;
            ptr->next = curr;
            curr = temp;
        }
        return dummy->next;
    }
};