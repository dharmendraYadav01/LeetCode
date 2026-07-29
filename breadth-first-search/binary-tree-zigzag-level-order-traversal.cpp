/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void levelorder(TreeNode* root,vector<vector<int>>&result){
        if(!root) return;
        queue<TreeNode*>pq;
        pq.push(root);
        while(!pq.empty()){
            vector<int>ans;
            int n=pq.size();
            for(int i=0;i<n;i++){
                TreeNode* curr=pq.front();
                pq.pop();
                ans.push_back(curr->val);
                if(curr->left) pq.push(curr->left);
                if(curr->right) pq.push(curr->right);
            }
            result.push_back(ans);
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        levelorder(root,result);
        for(int i=1;i<result.size();i+=2){
            reverse(result[i].begin(),result[i].end());
        }
        return result;
    }
};