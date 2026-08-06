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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return nullptr;
        set<ListNode*>st;
        ListNode* ptr=head;
        while(ptr){
            if(st.find(ptr)!=st.end()){
                return ptr;
            }else{
                st.insert(ptr);
                ptr=ptr->next;
            }
        }
        return nullptr;
    }
};