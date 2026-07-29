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
    void inorder(TreeNode* root,vector<int>&result){
        if(!root) return;
        inorder(root->left,result);
        result.push_back(root->val);
        inorder(root->right,result);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>result;
        inorder(root,result);


        TreeNode* new_node=new struct TreeNode(0);
        TreeNode* curr=new_node;
        for(int it:result){
            curr->right=new struct TreeNode(it);
            curr=curr->right;
        }
        return new_node->right;
    }
};