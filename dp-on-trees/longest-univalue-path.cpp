/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    int findLength(TreeNode* root) {
        if (!root)
            return 0;
        int left = findLength(root->left);
        int right = findLength(root->right);
        int leftpath = 0;
        int rightpath = 0;
        if (root->left && root->left->val == root->val) {
            leftpath = 1 + left;
        }
        if (root->right && root->right->val == root->val) {
            rightpath = 1 + right;
        }
        ans = max(ans, leftpath + rightpath);
        return max(leftpath, rightpath);
    }
    int longestUnivaluePath(TreeNode* root) {
        findLength(root);
        return ans;
    }
};