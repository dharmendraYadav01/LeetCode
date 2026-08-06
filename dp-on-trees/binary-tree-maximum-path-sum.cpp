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
    int mx_s = INT_MIN;
    int maxSum(TreeNode* root) {
        if (!root)
            return 0;
        int left = max(0, maxSum(root->left));
        int right = max(0, maxSum(root->right));
        int ans = 0;
        ans = left + root->val + right;
        mx_s = max(mx_s, ans);
        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        maxSum(root);
        return mx_s;
    }
};