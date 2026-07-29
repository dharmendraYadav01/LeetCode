/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*>num1;
        vector<ListNode*>num2;
        ListNode* temp=headA;
        while(temp){
            num1.push_back(temp);
            temp=temp->next;
        }
        temp=headB;
        while(temp){
            num2.push_back(temp);
            temp=temp->next;
        }
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int i=0;
        int j=0;
        ListNode* intersect=nullptr;
        while(i<num1.size() && j<num2.size() && num1[i]==num2[j]){
            intersect=num1[i];
            i++;
            j++;
        }
        return intersect;
    }
};