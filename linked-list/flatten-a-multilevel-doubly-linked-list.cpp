/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    void dfs(Node* root,vector<int>&ans){
        if(!root) return;
        ans.push_back(root->val);
        if(root->child){
            dfs(root->child,ans);
        }
        if(root->next){
            dfs(root->next,ans);
        }
    }
    Node* flatten(Node* head) {
        vector<int>result;
        dfs(head,result);
        // vector<int>result;
        // vector<vector<int>>rand;
        // Node* ptr=head;
        // while(ptr){
        //     result.push_back(ptr->val);
        //     if(ptr->child!=NULL){
        //         Node* forw=ptr->next;
        //         printNext(forw,rand);
        //         ptr=ptr->child;
        //         result.push_back(ptr->val);
        //     }
        //     ptr=ptr->next;
        // }
        // for(int i=rand.size()-1;i>=0;i--){
        //     for(int j=0;j<rand[i].size();j++){
        //         result.push_back(rand[i][j]);
                
        //     }
        // }
        // rand.clear();
        // for(int it:result){
        //     cout<<it<<" ";
        // }
        Node* new_node=new struct Node(0);
        Node* ptr=new_node;
        for(int it:result){
            ptr->next=new struct Node(it);
            ptr->next->prev=ptr;
            ptr=ptr->next;
        }
        head = new_node->next;
        if (head != nullptr) head->prev = nullptr;
        return head;
    }
};