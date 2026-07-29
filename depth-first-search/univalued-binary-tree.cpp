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
    bool isUnivalTree(TreeNode* root) {
    // using dfs
        if (!root)
            return 1;
        if (root->left && root->left->val != root->val)
            return false;
        if (root->right && root->right->val != root->val)
            return false;
        return isUnivalTree(root->left) && isUnivalTree(root->right);
    // using traversal teachnique
        // void compute(unordered_set<int> & Oo, TreeNode * root) {
        //     if (!root)
        //         return;
        //     Oo.insert(root->val);
        //     compute(Oo, root->left);
        //     compute(Oo, root->right);
        // }
        // bool isUnivalTree(TreeNode * root) {
        //     unordered_set<int> Oo;
        //     compute(Oo, root);
        //     return Oo.size() == 1 ? 1 : 0;
        // }
    }
};