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
    bool isPalindrome(ListNode* head) {
        vector<int>orginal;
        vector<int>reverse;
        ListNode* ptr=head;
        while(ptr){
            orginal.push_back(ptr->val);
            ptr=ptr->next;
        }
        int org=orginal.size();
        for(int i=org-1;i>=0;i--){
            reverse.push_back(orginal[i]);
        }
        bool flag=true;
        for(int i=0;i<reverse.size();i++){
            if(orginal[i]!=reverse[i]){
                flag=false;
                break;
            }
        }
        return flag?true:false;
    }
};