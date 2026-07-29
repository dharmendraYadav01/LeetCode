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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>res;
        for(ListNode* it:lists){
            ListNode* ptr=it;
            while(ptr){
                res.push_back(ptr->val);
                ptr=ptr->next;
            }
        }
        sort(res.begin(),res.end());
        ListNode* new_node=new struct ListNode(0);
        ListNode* ptr=new_node;
        for(int it:res){
            ptr->next=new struct ListNode(it);
            ptr=ptr->next;
        }
        return new_node->next;
    }
};