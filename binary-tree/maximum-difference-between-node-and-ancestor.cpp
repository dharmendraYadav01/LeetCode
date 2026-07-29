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
    int maxdiff;
    void find_max(TreeNode* root,TreeNode* child){
        if(!root || !child) return;

        maxdiff=max(maxdiff,abs(root->val-child->val));
        find_max(root,child->left);
        find_max(root,child->right);
    }
    void find_diff(TreeNode* root){
        if(root==NULL) return;
        find_max(root,root->left);
        find_max(root,root->right);
        find_diff(root->left);
        find_diff(root->right);
    }
    int maxAncestorDiff(TreeNode* root) {
        maxdiff=-1;
        find_diff(root);
        return maxdiff;
    }
};