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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val){
            head=head->next;
        }
        if(head==nullptr){
            return head;
        }
        ListNode* pre=head;
        while(pre->next!=nullptr){
            if(pre->next->val==val){
                pre->next=pre->next->next;
            }
            else{
                pre=pre->next;
            }
        }
        return head;
    }
};