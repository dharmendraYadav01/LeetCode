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
    bool isMirror(TreeNode* leftsub,TreeNode* rightsub){
        if(leftsub==nullptr && rightsub==nullptr){
            return true;
        }
        if(!leftsub || !rightsub || leftsub->val!=rightsub->val){
            return false;
        }
        return isMirror(leftsub->left,rightsub->right) && isMirror(leftsub->right,rightsub->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isMirror(root->left,root->right);
    }
};