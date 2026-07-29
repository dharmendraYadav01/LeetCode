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
    void deleteNode(ListNode* node) {
        vector<int> result;
        ListNode* ptr = node;
        while (ptr) {
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        result.erase(result.begin());
        ptr=node;
        for(int it:result){
            ptr->val=it;
            ptr=ptr->next;
        }
        ptr=node;
        ListNode* prev=NULL;
        while(ptr->next!=NULL){
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=NULL;
    }
};