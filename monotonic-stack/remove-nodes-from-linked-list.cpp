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
    // bool isValid(int target,int idx,vector<int>&result){
    //     for(int i=idx+1;i<result.size();i++){
    //         if(result[i]>target){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    ListNode* removeNodes(ListNode* head) {
        ListNode* ptr=head;
        vector<int>result;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        vector<int>ans;
        for(int i=0;i<result.size();i++){
            while(!ans.empty() && ans.back()<result[i]){
                ans.pop_back();
            }
            ans.push_back(result[i]);
        }
        ptr=head;
        ListNode* prev=NULL;
        for(int it:ans){
            ptr->val=it;
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=NULL;
        return head;
    }
};