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
        ListNode* New_node=new struct ListNode(0);
        ListNode* curr=New_node;
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
            carry=sum/10;
            curr->next=new struct ListNode(sum%10);
            curr=curr->next;
        }
        return New_node->next;

    }
};