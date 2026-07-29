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
    ListNode* sortList(ListNode* head) {
        vector<int>res;
        ListNode* ptr=head;
        while(ptr){
            res.push_back(ptr->val);
            ptr=ptr->next;
        }
        sort(res.begin(),res.end());

        // yaha par hum new_node bana ke ussme value daal rahe hai res me se
        ListNode* new_node=new struct ListNode(0);
        ListNode* curr=new_node;
        for(int it:res){
            curr->next=new struct ListNode(it);
            curr=curr->next;
        }
        return new_node->next;
    }
};