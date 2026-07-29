/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*>q;
        vector<vector<int>>result1;
        if(root==nullptr){
            return result1;
        }
        q.push(root);
        while(!q.empty()){
            vector<int>result;
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* curr=q.front();
                q.pop();
                result.push_back(curr->val);
                for(auto child: curr->children){
                    if(child) q.push(child);
                }
            }
            result1.push_back(result);
        }
        return result1;
    }
};