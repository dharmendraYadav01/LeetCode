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
        int mini = INT_MAX;
        int maxi = -1;
        for (int i = 1; i < res.size(); i++) {
            mini = min(mini, res[i] - res[i - 1]);
        }
        if (res.size() > 1) {
            maxi = res[res.size() - 1] - res[0];
        }
        if (maxi == -1 || mini == INT_MAX) {
            return {-1, -1};
        }
        return {mini, maxi};
    }
};