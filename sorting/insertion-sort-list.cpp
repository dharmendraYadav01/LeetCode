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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>result;
        ListNode* ptr=head;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        sort(result.begin(),result.end());
        ListNode* new_node=new struct ListNode(0);
        ListNode* pre=new_node;
        for(int it:result){
            pre->next=new struct ListNode(it);
            pre=pre->next;
        }
        return new_node->next;
    }
};