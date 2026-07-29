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
    ListNode* deleteMiddle(ListNode* head) {
        int n = 0;
        ListNode* ptr = head;
        while (ptr) {
            ptr = ptr->next;
            n++;
        }

        if (n == 1) return nullptr;

        int mid = n / 2;
        ptr = head;
        ListNode* prev = NULL;

        while (mid--) {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = ptr->next;
        return head;
    }
};