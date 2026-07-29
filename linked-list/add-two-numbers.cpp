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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new struct ListNode(0);
        ListNode* pre=dummy;
        ListNode* ptr1=l1;
        ListNode* ptr2=l2;
        int carry=0;
        while(ptr1 || ptr2 || carry){
            int sum=carry;
            if(ptr1){
                sum+=ptr1->val;
                ptr1=ptr1->next;
            }
            if(ptr2){
                sum+=ptr2->val;
                ptr2=ptr2->next;
            }
            // if sum is in two digit then 1st is carry and 2nd is value
            carry=sum/10;
            pre->next=new struct ListNode(sum%10);
            pre=pre->next;
        }
        return dummy->next;
    }
};