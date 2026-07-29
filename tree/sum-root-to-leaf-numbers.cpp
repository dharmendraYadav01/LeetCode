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
    void dfs(TreeNode* root,int curr,vector<int>&result){
        if(!root) return;
        curr=curr*10+root->val; // root ke value->curr
        if(!root->left && !root->right){ // agar left and right null hai then push and return 
            result.push_back(curr);
            return;
        }
        dfs(root->left,curr,result); // varna recursive call to left
        dfs(root->right,curr,result); // then right
    }
    int sumNumbers(TreeNode* root) {
        vector<int>result;
        dfs(root,0,result);
        int temp=0;
        for(int &it:result){
            temp+=it;

        }
        return temp;
    }
};