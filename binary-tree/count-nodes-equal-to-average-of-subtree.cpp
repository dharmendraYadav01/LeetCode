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
    int cnt = 0;
    pair<int, int> Solve(TreeNode* root) {
        if (!root)
            return {0, 0};
        pair<int, int> left = Solve(root->left);
        pair<int, int> right = Solve(root->right);
        int sum = root->val + left.first + right.first;
        int node = 1 + left.second + right.second;
        if ((sum / node) == root->val)
            cnt++;
        return {sum, node};
    }
    int averageOfSubtree(TreeNode* root) {
        if (!root)
            return 0;
        Solve(root);
        return cnt;
    }
};