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
    int min_diff(TreeNode* root){
        if(!root) return 0;
        vector<int>result;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            result.push_back(curr->val);
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        int min_=INT_MAX;
        sort(result.begin(),result.end());
        for(int i=1;i<result.size();i++){
            min_=min(min_,abs(result[i]-result[i-1]));
        }
        return min_;
    }
    int minDiffInBST(TreeNode* root) {
        return min_diff(root);

    }

};