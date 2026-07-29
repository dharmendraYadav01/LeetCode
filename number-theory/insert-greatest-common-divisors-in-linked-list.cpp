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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head) return head;
        ListNode* ptr=head;
        vector<int>result;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        vector<int>ans;
        ans.push_back(result[0]);
        for(int i=1;i<result.size();i++){
            int n=gcd(result[i-1],result[i]);
            ans.push_back(n);
            ans.push_back(result[i]);
        }
        ListNode* new_head=new struct ListNode(0);
        ptr=new_head;
        for(int it:ans){
            ptr->next=new struct ListNode(it);
            ptr=ptr->next;
        }
        return new_head->next;
    }
};