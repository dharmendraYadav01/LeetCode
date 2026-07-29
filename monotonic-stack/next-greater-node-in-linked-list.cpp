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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>result;
        vector<int>res;
        ListNode* ptr=head;
        while(ptr){
            result.push_back(ptr->val);
            ptr=ptr->next;
        }

        for(int i=0;i<result.size();i++){
            int max_val=0;         
            bool flag=false;   
            for(int j=i+1;j<result.size();j++){
                if(result[i]<result[j]){
                    max_val=max(max_val,result[j]);
                    flag=true;
                }
                if(flag){
                    break;
                }
            }
            res.push_back(max_val);
        }

        return res;
    }
};