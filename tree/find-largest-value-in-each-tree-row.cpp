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
    vector<int> largestValues(TreeNode* root) {
        vector<int>result;
        if(!root){
            return result;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int curr=INT_MIN;
            for(int i=0;i<n;i++){
                TreeNode* ele=q.front();
                q.pop();
                
                curr=max(curr,ele->val);
                if(ele->left){
                    q.push(ele->left);
                }
                if(ele->right){
                    q.push(ele->right);
                }
            }
            result.push_back(curr); 
        }
        return result;

    }
};