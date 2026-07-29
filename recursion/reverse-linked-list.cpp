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
    ListNode* reverseList(ListNode* head) {
        stack<int>s;
        struct ListNode *ptr=head;
        while(ptr!=NULL){
            s.push(ptr->val);
            ptr=ptr->next;
        }
        ptr=head;
        while(!s.empty()){
            ptr->val=s.top();
            s.pop();
            ptr=ptr->next;
        }
        return head;
    }
};