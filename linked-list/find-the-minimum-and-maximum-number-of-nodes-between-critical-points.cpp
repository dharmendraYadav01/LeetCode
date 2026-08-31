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
        vector<int> temp;
        ListNode* ptr = head;
        while (ptr) {
            temp.push_back(ptr->val);
            ptr = ptr->next;
        }
        vector<int> res;
        for (int i = 1; i < temp.size() - 1; i++) {
            if (temp[i] > temp[i - 1] && temp[i] > temp[i + 1]) {
                res.push_back(i + 1);
            }
            if (temp[i] < temp[i - 1] && temp[i] < temp[i + 1]) {
                res.push_back(i + 1);
            }
        }
        vector<int> ans(2, -1);
        if (res.size() > 1) {
            ans[0] = res[res.size() - 1] - res[res.size() - 2];
            ans[1] = res[res.size() - 1] - res[0];
        }
        return ans;
    }
};