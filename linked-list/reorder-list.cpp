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
    void reorderList(ListNode* head) {
        ListNode* ptr=head;
        vector<int>result;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        vector<int>ans;
        int i=0;
        int j=result.size()-1;
        while(i<j){
            ans.push_back(result[i++]);
            ans.push_back(result[j--]);
        }
        if(i==j){
            ans.push_back(result[i]);
        }
        ptr=head;
        for(int it:ans){
            ptr->val=it;
            ptr=ptr->next;
        }
        // ListNode* dummy=new struct ListNode(0);
        // ListNode* curr=dummy;
        // for(int it:ans){
        //     curr->next=new struct ListNode(it);
        //     curr=curr->next;
        // }
        // head=dummy->next;
        // return head;
    }
};