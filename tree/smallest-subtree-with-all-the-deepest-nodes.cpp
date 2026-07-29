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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || root->val == p->val || root->val == q->val) {
            return root;
        }

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        if (left == NULL && right == NULL)
            return NULL;
        if (left != NULL && right == NULL)
            return left;
        if (left == NULL && right != NULL)
            return right;
        if (left != NULL && right != NULL)
            return root;
        return root;
    }
    TreeNode* lowestCommanAncestorM(TreeNode* root, vector<TreeNode*>& result) {
        TreeNode* lca = result[0];
        for (int i = 1; i < result.size(); i++) {
            lca = lowestCommonAncestor(root, lca, result[i]);
        }
        return lca;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(root==NULL) return root;
        queue<TreeNode*> q;
        vector<TreeNode*> result;

        if (root == nullptr) {
            return root;
        }
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            result.clear();
            for (int i = 0; i < n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                result.push_back(curr);
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
        }
        // for(auto it:result){
        //     cout<<it->val<<" ";
        // }
        return lowestCommanAncestorM(root, result);
    }
};