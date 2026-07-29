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
    int getSum(int val,vector<int>&result){
        int sum=0;
        for(int it:result){
            if(it>=val){
                sum+=it;
            }
        }
        return sum;
    }
    void GreaterSum(vector<int>&result,TreeNode*root){
        // base case
        if(root==NULL) return;
        int val=root->val;
        int sum=getSum(val,result);
        root->val=sum;
        GreaterSum(result,root->left);
        GreaterSum(result,root->right);
    }
    void InOrder(vector<int>&result,TreeNode*root){
        if(root==NULL) return;
        InOrder(result,root->left);
        result.push_back(root->val);
        InOrder(result,root->right);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int>result;
        InOrder(result,root);
        GreaterSum(result,root);
        return root;
    }
};