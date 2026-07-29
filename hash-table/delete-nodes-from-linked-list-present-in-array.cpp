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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st(nums.begin(),nums.end());
        ListNode* ptr=head;
        vector<int>result;
        vector<int>ans;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        for(int i=0;i<result.size();i++){
            if(st.find(result[i])==st.end()){
                ans.push_back(result[i]);
            }
        }
        ListNode* new_node=new struct ListNode(0);
        ptr=new_node;
        for(int it:ans){
            ptr->next=new struct ListNode(it);
            ptr=ptr->next;
        }
        return new_node->next;
    }
};