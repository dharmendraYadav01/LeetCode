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
    int count = 0;
    int getnode(TreeNode* root){
        if(root==NULL) return 0;
        // cout<<count<<endl;
        return 1+getnode(root->left)+getnode(root->right);
    }
    int getSum(TreeNode* root) {
        if (root == NULL)
            return 0;
        // count<<sum;
        return root->val+getSum(root->left)+getSum(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        // base case
        if (root == NULL)
            return 0;
        int sum = getSum(root);
        int nodes = getnode(root);
        if ((sum / nodes) == root->val)
            count++;
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return count;
    }
};