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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>result;
        ListNode* ptr=head;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        reverse(result.begin()+left-1,result.begin()+right);
        ListNode* dummy=new struct ListNode(0);
        ListNode* curr=dummy;
        for(int it:result){
            curr->next=new struct ListNode(it);
            curr=curr->next;
        }
        return dummy->next;
    }
};