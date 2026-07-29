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
    void levelOreder(TreeNode* root, vector<vector<int>>& result1) {
        queue<TreeNode*> q;
        if (root == nullptr) {
            return;
        }
        q.push(root);
        while (!q.empty()) {
            vector<int> result;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                result.push_back(curr->val);
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
            result1.push_back(result);
        }
    }
    int GetSum(vector<int>&result){
        int sum=0;
        for(int it:result){
            sum+=it;
        }
        return sum;
    }
    int maxLevelSum(TreeNode* root) {
        int maxSum=INT_MIN;
        int level=0;
        vector<vector<int>> result;
        levelOreder(root, result);
        for(int i=0;i<result.size();i++){
            int sum=GetSum(result[i]);
            if(sum>maxSum){
                maxSum=sum;
                level=i+1;
            }
            
        }
        return level;
    }
};