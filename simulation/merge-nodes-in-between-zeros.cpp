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
    ListNode* mergeNodes(ListNode* head) {
        vector<int>result;
        vector<int>fool;
        ListNode* ptr=head;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }
        int j=0;
        for(int i=1;i<result.size();i=j+1){
            j=i;
            int sum=0;
            while(result[j]!=0){
                sum+=result[j];
                j++;
            }
            fool.push_back(sum);
        }
        ListNode* new_node=new struct ListNode(0);
        ListNode* curr=new_node;
        for(int it:fool){
            curr->next=new struct ListNode(it);
            curr=curr->next;
        }
        return new_node->next;;
    }
};