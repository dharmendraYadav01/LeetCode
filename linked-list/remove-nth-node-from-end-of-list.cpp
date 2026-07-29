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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int>result;
        ListNode* ptr=head;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        int N=result.size();
        result.erase(result.begin()+N-n);
        ListNode* dummy=new struct ListNode(0);
        ListNode* curr=dummy;
        for(int it:result){
            curr->next=new struct ListNode(it);
            curr=curr->next;
        }
        return dummy->next;
    }
};