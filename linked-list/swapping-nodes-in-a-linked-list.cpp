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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>result;
        
        ListNode* ptr=head;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        int n=result.size();
        swap(result[k-1],result[n-k]);
        ListNode* dummy=new struct ListNode(0);
        ListNode* curr=dummy;
        for(int it:result){
            curr->next=new struct ListNode(it);
            curr=curr->next;
        }
        return dummy->next;
    }
};