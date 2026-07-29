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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        vector<int>res;
        res.push_back(head->val);
        ListNode* prevptr=head->next;
        while(prevptr){
            if(res[res.size()-1]!=(prevptr->val)){
                res.push_back(prevptr->val);
            }
            prevptr=prevptr->next;
        }

        prevptr=head;
        int idx=0;
        ListNode* pre=NULL;
        while(idx<res.size()){
            prevptr->val=res[idx];
            idx++;
            pre=prevptr;
            prevptr=prevptr->next;
        }
        pre->next=NULL;
        return head;
    }
};