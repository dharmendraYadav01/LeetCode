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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* ptr=head;
        vector<ListNode*>result(k,nullptr);
        int N=0;
        while(ptr){
            N++;
            ptr=ptr->next;
        }
        int n=N/k; 
        int s=N%k;
        ptr=head;
        for(int i=0;i<k&& ptr;i++){
            result[i]=ptr;
            int curr=n+(i<s?1:0);
            for(int j=1;j<curr;j++){
                ptr=ptr->next;
            }
            if(ptr){
                ListNode* temp=ptr->next;
                ptr->next=nullptr;
                ptr=temp;
            }

        }
        return result;

    }
};