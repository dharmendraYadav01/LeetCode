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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr=head;
        vector<int>result;
        unordered_map<int,int>mp;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        for(auto it:result){
            mp[it]++;
        }
        result.clear();
        for(auto it:mp){
            if(it.second==1){
                result.push_back(it.first);
            }
        }
        sort(result.begin(),result.end());
        ListNode* dummy=new struct ListNode(0);
        ListNode* curr=dummy;
        for(auto it:result){
            curr->next=new struct ListNode(it);
            curr=curr->next;
        }

        return dummy->next;
        
    }
};