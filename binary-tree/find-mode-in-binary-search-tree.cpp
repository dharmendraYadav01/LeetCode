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
    vector<int> findMode(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        map<int,int>freq;
        q.push(root);
        vector<int>result;
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            freq[curr->val]++;
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        int max_count=0;
        for(auto it:freq){
            max_count=max(max_count,it.second); // store frequency of most occurred element
        }
        for(auto it:freq){
            if(it.second==max_count){
                result.push_back(it.first);
            }
        }
        return result;
    }
};