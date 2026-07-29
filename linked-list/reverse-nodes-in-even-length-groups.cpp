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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        vector<int> result;
        vector<vector<int>> ans;
        ListNode* ptr = head;
        while (ptr) {
            result.push_back(ptr->val);
            ptr = ptr->next;
        }
        int i = 0;
        int grp = 1;
        while (i < result.size()) {
            int j = min(i + grp, (int)result.size()); 
            vector<int> hola;
            for (int k = i; k < j; k++) {
                hola.push_back(result[k]);
            }
            ans.push_back(hola);
            i = j;
            grp++;
        }
        for (auto &it : ans) {
            if (it.size() % 2 == 0) {
                reverse(it.begin(), it.end());
            }
        }
        ptr=head; 
        for (auto j = 0; j < ans.size(); j++) {
            for (int i = 0; i < ans[j].size(); i++) {
                ptr->val=ans[j][i];
                ptr=ptr->next;
            }
        }
        return head;
    }
};