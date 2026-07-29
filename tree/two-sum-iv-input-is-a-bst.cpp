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
    void inorder(TreeNode* root,vector<int>&nums){
        if(!root) return;
        inorder(root->left,nums);
        nums.push_back(root->val);
        inorder(root->right,nums);
    }
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        vector<int>nums;
        inorder(root,nums);
        int l=0;
        int r=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(l<r){
            if(nums[l]+nums[r]==k) return true;
            else if (nums[l]+nums[r]>k) r--;
            else if (nums[l]+nums[r]<k) l++;
        }
        return false;
    }
};