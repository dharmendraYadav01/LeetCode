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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){
            return head;
        }
        vector<int>result;
        ListNode* ptr=head;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        for(int i=0;i<result.size()-1;i=i+2){
            swap(result[i],result[i+1]);
        }
        // dummy node create
        ListNode* new_node=new struct ListNode(0);
        ListNode* curr=new_node;
        for(int it:result){
            curr->next=new struct ListNode(it);
            curr=curr->next;
        }
        return new_node->next;
    }
};