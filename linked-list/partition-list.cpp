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
    ListNode* partition(ListNode* head, int x) {
        vector<int>result;
        vector<int>first;
        vector<int>second;
        ListNode* ptr=head;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        for(auto it:result){
            if(it<x){
                first.push_back(it);
            }
            else{
                second.push_back(it);
            }
        }
        result.clear();
        for(auto it:first){
            result.push_back(it);
        }
        for(auto it:second){
            result.push_back(it);
        }
        first.clear();
        second.clear();
        ListNode* dummy=new struct ListNode(0);
        ListNode* curr=dummy;
        for(auto it:result){
            curr->next=new struct ListNode(it);
            curr=curr->next;
        }
        return dummy->next;
    }
};