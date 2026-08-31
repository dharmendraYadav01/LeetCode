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
    // first Approach :
        // vector<int> temp;
        // ListNode* ptr = head;
        // while (ptr) {
        //     temp.push_back(ptr->val);
        //     ptr = ptr->next;
        // }
        // vector<int> res;
        // for (int i = 1; i < temp.size() - 1; i++) {
        //     if (temp[i] > temp[i - 1] && temp[i] > temp[i + 1]) {
        //         res.push_back(i + 1);
        //     }
        //     if (temp[i] < temp[i - 1] && temp[i] < temp[i + 1]) {
        //         res.push_back(i + 1);
        //     }
        // }
        // int mini = INT_MAX;
        // int maxi = -1;
        // for (int i = 1; i < res.size(); i++) {
        //     mini = min(mini, res[i] - res[i - 1]);
        // }
        // if (res.size() > 1) {
        //     maxi = res[res.size() - 1] - res[0];
        // }
        // if (maxi == -1 || mini == INT_MAX) {
        //     return {-1, -1};
        // }
        // return {mini, maxi};
    
    // Second Approach : 
        ListNode* prev = head;
        ListNode* curr = prev->next;
        int pos = 2; // start with idx 1 & first node is not local maxi or mini;
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