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
    TreeNode* createTree(vector<int>& result, int start, int last) {
        if (start > last)
            return nullptr;
        int max_val = start;
        for(int i=start;i<=last;i++){
            if(result[i]>result[max_val]){
                max_val=i;
            }
        }
        TreeNode* root=new TreeNode(result[max_val]);
        root->left=createTree(result, start, max_val - 1);
        root->right=createTree(result, max_val + 1, last);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int n = nums.size() -1;
        return createTree(nums, 0, n);   
    }
};