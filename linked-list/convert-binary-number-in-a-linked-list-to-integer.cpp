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
    int getDecimalValue(ListNode* head) {
        ListNode* ptr=head;
        int num=0;
        while(ptr){
            num=num*2+ptr->val;
            ptr=ptr->next;
        }
        // int base=1;
        // int res=0;
        // while(num){
        //     int rem=num%10;
        //     num/=10;
        //     res+=rem*base;
        //     base=base*2;
        // }
        return num;
    }
};