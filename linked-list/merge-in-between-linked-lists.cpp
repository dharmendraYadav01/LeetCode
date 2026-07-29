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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(list1==NULL || list2==NULL){
            return list1;
        }
        ListNode* ptr=list1;
        ListNode* prev1=NULL;
        int count=-1;
        while(ptr){
            count++;
            if(count==a)
                break;
            prev1=ptr;
            ptr=ptr->next;
        }
        while(ptr && count!=b){
            count++;
            ptr=ptr->next;
            if(count==b) break;
        }
        ListNode* chlo=list2;
        while(chlo->next!=NULL){
            chlo=chlo->next;
        }
        prev1->next=list2;
        chlo->next=ptr->next;
        return list1;

    }
};