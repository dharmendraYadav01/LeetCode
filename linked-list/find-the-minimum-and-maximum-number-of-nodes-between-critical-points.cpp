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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = prev->next;
        int pos = 2;
        int first_c = 0;
        int prev_c = 0;
        int mini = INT_MAX;
        int maxi = -1;
        while (curr->next) {
            bool critical = false;
            if (curr->val > prev->val && curr->val > curr->next->val) {
                critical = true;
            }
            if (curr->val < prev->val && curr->val < curr->next->val) {
                critical = true;
            }
            if (critical) {
                if (first_c == 0) {
                    first_c = pos;
                }
                if (prev_c) {
                    mini = min(mini, pos - prev_c);
                }
                prev_c = pos;
            }
            prev = curr;
            curr = curr->next;
            pos++;
        }
        if (mini == INT_MAX)
            return {-1, -1};
        maxi = prev_c - first_c;
        return {mini, maxi};
    }
};