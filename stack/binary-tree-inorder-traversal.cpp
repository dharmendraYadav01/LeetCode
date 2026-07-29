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
    vector<int> inorderTraversal(TreeNode* root) {
        // Base case
        if(root==NULL) return {};

        // Morris Order Traversal
        TreeNode* curr=root;
        vector<int>result;
        while(curr){
            if(curr->left==NULL){
                result.push_back(curr->val);
                curr=curr->right;
            }
            else{
                TreeNode* predessor=curr->left;
                while(predessor->right && predessor->right!=curr){
                    predessor=predessor->right;
                }
                if(predessor->right==NULL){
                    predessor->right=curr; // here we r creating temporarily links
                    curr=curr->left;
                }
                else{
                    predessor->right=NULL; // here del temporarily links
                    result.push_back(curr->val);
                    curr=curr->right;
                }
            }
        }
        return result;
    }
};