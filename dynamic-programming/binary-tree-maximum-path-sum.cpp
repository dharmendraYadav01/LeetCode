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
    int mx_s = 0;
    int maxSum(TreeNode* root) {
        if (!root)
            return 0;
        int left = maxSum(root->left);
        int right = maxSum(root->right);
        int ans = 0;
        ans = left + root->val + right;
        mx_s = max(mx_s, ans);
        return ans;
    }
    int maxPathSum(TreeNode* root) {
        maxSum(root);
        return mx_s;
    }
};