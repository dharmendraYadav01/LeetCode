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
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* pre = NULL;
        ListNode* next;
        while (curr) {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }
    int pairSum(ListNode* head) {
        int count = 0;
        int ans=INT_MIN;
        ListNode* ptr = head;
        while (ptr) {
            count++;
            ptr = ptr->next;
        }
        ptr = head;
        for (int i = 0; i < (count / 2) - 1; i++) {
            ptr = ptr->next;
        }
        ListNode* start = ptr->next;
        ptr->next=reverse(start);
        // ptr=head;
        // while(ptr){
        //     cout<<ptr->val<<endl;
        //     ptr=ptr->next;
        // }
        ptr=head;
        for (int i = 0; i < (count / 2); i++) {
            ptr = ptr->next;
        }
        ListNode* slow=head;
        ListNode* fast=ptr;
        
        while(fast && slow){
            int sum=slow->val+fast->val;
            ans=max(ans,sum);
            slow=slow->next;
            fast=fast->next;
        }
        return ans;
    }
};